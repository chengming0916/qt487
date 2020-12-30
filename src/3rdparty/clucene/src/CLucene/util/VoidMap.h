/*------------------------------------------------------------------------------
* Copyright (C) 2003-2006 Ben van Klinken and the CLucene Team
* 
* Distributable under the terms of either the Apache License (Version 2.0) or 
* the GNU Lesser General Public License, as specified in the COPYING file.
------------------------------------------------------------------------------*/
#ifndef _lucene_util_VoidMap_
#define _lucene_util_VoidMap_

#if defined(_LUCENE_PRAGMA_ONCE)
# pragma once
#endif


CL_NS_DEF(util)

/**
* A template to encapsulate various map type classes
* @internal
*/
template<typename _kt, typename _vt, 
	typename base,
	typename _KeyDeletor=CL_NS(util)::Deletor::Dummy,
	typename _ValueDeletor=CL_NS(util)::Deletor::Dummy>
class __CLMap: public base, LUCENE_BASE {
private:
	bool dk;
	bool dv;
public:
   DEFINE_MUTEX(THIS_LOCK)

	typedef typename base::iterator iterator;
	typedef typename base::const_iterator const_iterator;
	typedef CL_NS_STD(pair)<_kt, _vt> _pair;

	///Default constructor for the __CLMap
	__CLMap ():
		dk(true),
		dv(true)
	{
	}

	///Deconstructor for the __CLMap
	~__CLMap (){
		clear();
	}

	void setDeleteKey(bool val){ dk = val; }
	void setDeleteValue(bool val){ dv = val; }

	///Construct the VoidMap and set the deleteTypes to the specified values
	///\param deleteKey if true then the key variable is deleted when an object is deleted
	///\param keyDelType delete the key variable using the specified type
	///\param deleteValue if true then the value variable is deleted when an object is deleted
	///\param valueDelType delete the value variable using the specified type
	/*__CLMap ( const bool deleteKey, const bool deleteValue ):
		dk(deleteKey),
		dv(deleteValue)
	{
	}*/

	///checks to see if the specified key exists
	///\param k the key to check for
	///\returns true if the key exists
	bool exists(_kt k)const{
		const_iterator itr = base::find(k);
		bool ret = itr!=base::end();
		return ret;
	}

	///put the specified pair into the map. remove any old items first
	///\param k the key
	///\param v the value
	void put(_kt k,_vt v){
		//todo: check if this is always right!
		//must should look through code, for
		//cases where map is not unique!!!
		if ( dk || dv )
			remove(k);
			
		//todo: replacing the old item might be quicker...
		
		base::insert(_pair(k,v));
	}

	
	///using a non-const key, get a non-const value
	_vt get( _kt k) const {
		const_iterator itr = base::find(k);
		if ( itr==base::end() ) 
			return _vt();
		else 
			return itr->second;
	}
	///using a non-const key, get the actual key
	_kt getKey( _kt k) const {
		const_iterator itr = base::find(k);
		if ( itr==base::end() ) 
			return _kt();
		else 
			return itr->first;
	}

	void removeitr (iterator itr, const bool dontDeleteKey = false, const bool dontDeleteValue = false){
		//delete key&val first. This prevents potential loops (deleting object removes itself)
		_kt key = itr->first;
		_vt val = itr->second;
		base::erase(itr);
		
		//keys & vals need to be deleted after erase, because the hashvalue is still needed
		if ( dk && !dontDeleteKey ) 
			_KeyDeletor::doDelete(key);
		if ( dv && !dontDeleteValue ) 
			_ValueDeletor::doDelete(val);
	}
	///delete and optionally delete the specified key and associated value
	void remove(_kt key, const bool dontDeleteKey = false, const bool dontDeleteValue = false){
		iterator itr = base::find(key);
		if ( itr!=base::end() )
			removeitr(itr,dontDeleteKey,dontDeleteValue);
	}

	///clear all keys and values in the map
	void clear(){
		if ( dk || dv ){
			iterator itr = base::begin();
			while ( itr!=base::end() ){
				#ifdef _CL_HAVE_EXT_HASH_MAP
				removeitr(itr);
				itr = base::begin();

				#else
				if ( dk ) 
					_KeyDeletor::doDelete(itr->first);
				if ( dv ) 
					_ValueDeletor::doDelete(itr->second);
				++itr;
				
				#endif
			}
		}
		base::clear();
	}
};

// makes no guarantees as to the order of the map
// cannot contain duplicate keys; each key can map to at most one value
#define CLHashtable CLHashMap

#if defined(_CL_HAVE_GOOGLE_DENSE_HASH_MAP)
//do nothing
#elif defined(LUCENE_DISABLE_HASHING)

 //a CLSet with CLHashMap traits
template<typename _kt, typename _vt, 
	typename _Compare,
	typename _EqualDummy,
	typename _KeyDeletor=CL_NS(util)::Deletor::Dummy,
	typename _ValueDeletor=CL_NS(util)::Deletor::Dummy>
class CLHashMap:public __CLMap<_kt,_vt,
	CL_NS_STD(map)<_kt,_vt, _Compare>,
	_KeyDeletor,_ValueDeletor>
{
	typedef typename CL_NS_STD(map)<_kt,_vt,_Compare> _base;
	typedef __CLMap<_kt, _vt, CL_NS_STD(map)<_kt,_vt, _Compare>,
		_KeyDeletor,_ValueDeletor> _this;
public:
	CLHashMap ( const bool deleteKey=false, const bool deleteValue=false )
	{
		_this::setDeleteKey(deleteKey);
		_this::setDeleteValue(deleteValue);
	}
};
#elif defined(_CL_HAVE_EXT_HASH_MAP)
 //ext/hash_map syntax
//HashMap  class is roughly equivalent to Hashtable, except that it is unsynchronized
template<typename _kt, typename _vt,
	typename _Hasher,
	typename _Equals,
	typename _KeyDeletor=CL_NS(util)::Deletor::Dummy,
	typename _ValueDeletor=CL_NS(util)::Deletor::Dummy>
class CLHashMap:public __CLMap<_kt,_vt,
	CL_NS_HASHING(hash_map)<_kt,_vt, _Hasher,_Equals>,
	_KeyDeletor,_ValueDeletor>
{
	typedef __CLMap<_kt,_vt, CL_NS_HASHING(hash_map)<_kt,_vt, _Hasher,_Equals>,
		_KeyDeletor,_ValueDeletor> _this;
public:
	CLHashMap ( const bool deleteKey=false, const bool deleteValue=false )
	{
		_this::setDeleteKey(deleteKey);
		_this::setDeleteValue(deleteValue);
	}
};

#else
//HashMap  class is roughly equivalent to Hashtable, except that it is unsynchronized
template<typename _kt, typename _vt,
	typename _Hasher,
	typename _Equals,
	typename _KeyDeletor=CL_NS(util)::Deletor::Dummy,
	typename _ValueDeletor=CL_NS(util)::Deletor::Dummy>
class CLHashMap:public __CLMap<_kt,_vt,
	CL_NS_HASHING(hash_map)<_kt,_vt, _Hasher>,
	_KeyDeletor,_ValueDeletor>
{
	typedef __CLMap<_kt,_vt, CL_NS_HASHING(hash_map)<_kt,_vt, _Hasher>,
		_KeyDeletor,_ValueDeletor> _this;
public:
	CLHashMap ( const bool deleteKey=false, const bool deleteValue=false )
	{
		_this::setDeleteKey(deleteKey);
		_this::setDeleteValue(deleteValue);
	}
};
#endif

//A collection that contains no duplicates
//does not guarantee that the order will remain constant over time
template<typename _kt, typename _vt, 
	typename _Compare,
	typename _KeyDeletor=CL_NS(util)::Deletor::Dummy,
	typename _ValueDeletor=CL_NS(util)::Deletor::Dummy>
class CLSet:public __CLMap<_kt,_vt,
	CL_NS_STD(map)<_kt,_vt, _Compare>,
	_KeyDeletor,_ValueDeletor>
{
	typedef typename CL_NS_STD(map)<_kt,_vt,_Compare> _base;
	typedef __CLMap<_kt, _vt, CL_NS_STD(map)<_kt,_vt, _Compare>,
		_KeyDeletor,_ValueDeletor> _this;
public:
	CLSet ( const bool deleteKey=false, const bool deleteValue=false )
	{
		_this::setDeleteKey(deleteKey);
		_this::setDeleteValue(deleteValue);
	}
};


//A collection that can contains duplicates
template<typename _kt, typename _vt,
	typename _Compare,
	typename _KeyDeletor=CL_NS(util)::Deletor::Dummy,
	typename _ValueDeletor=CL_NS(util)::Deletor::Dummy>
class CLMultiMap:public __CLMap<_kt,_vt,
	CL_NS_STD(multimap)<_kt,_vt>,
	_KeyDeletor,_ValueDeletor>
{
	typedef typename CL_NS_STD(multimap)<_kt,_vt> _base;
	typedef __CLMap<_kt, _vt, CL_NS_STD(multimap)<_kt,_vt>,
		_KeyDeletor,_ValueDeletor> _this;
public:
	CLMultiMap ( const bool deleteKey=false, const bool deleteValue=false )
	{
		_this::setDeleteKey(deleteKey);
		_this::setDeleteValue(deleteValue);
	}
};


//*** need to create a class that allows duplicates - use <set>
//#define CLSet __CLMap
CL_NS_END

#ifdef _CL_HAVE_GOOGLE_DENSE_HASH_MAP
#include "GoogleSparseMap.h"
#endif

#endif
