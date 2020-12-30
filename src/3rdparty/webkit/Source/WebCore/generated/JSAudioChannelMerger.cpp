/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(WEB_AUDIO)

#include "JSAudioChannelMerger.h"

#include "AudioChannelMerger.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSAudioChannelMerger);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioChannelMergerTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioChannelMergerConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioChannelMergerTable = { 2, 1, JSAudioChannelMergerTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioChannelMergerConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioChannelMergerConstructorTable = { 1, 0, JSAudioChannelMergerConstructorTableValues, 0 };
class JSAudioChannelMergerConstructor : public DOMConstructorObject {
public:
    JSAudioChannelMergerConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSAudioChannelMergerConstructor::s_info = { "AudioChannelMergerConstructor", &DOMConstructorObject::s_info, &JSAudioChannelMergerConstructorTable, 0 };

JSAudioChannelMergerConstructor::JSAudioChannelMergerConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSAudioChannelMergerPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSAudioChannelMergerConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSAudioChannelMergerConstructor, JSDOMWrapper>(exec, &JSAudioChannelMergerConstructorTable, this, propertyName, slot);
}

bool JSAudioChannelMergerConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSAudioChannelMergerConstructor, JSDOMWrapper>(exec, &JSAudioChannelMergerConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioChannelMergerPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioChannelMergerPrototypeTable = { 1, 0, JSAudioChannelMergerPrototypeTableValues, 0 };
const ClassInfo JSAudioChannelMergerPrototype::s_info = { "AudioChannelMergerPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSAudioChannelMergerPrototypeTable, 0 };

JSObject* JSAudioChannelMergerPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSAudioChannelMerger>(exec, globalObject);
}

const ClassInfo JSAudioChannelMerger::s_info = { "AudioChannelMerger", &JSAudioNode::s_info, &JSAudioChannelMergerTable, 0 };

JSAudioChannelMerger::JSAudioChannelMerger(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioChannelMerger> impl)
    : JSAudioNode(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSAudioChannelMerger::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSAudioChannelMergerPrototype(exec->globalData(), globalObject, JSAudioChannelMergerPrototype::createStructure(exec->globalData(), JSAudioNodePrototype::self(exec, globalObject)));
}

bool JSAudioChannelMerger::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSAudioChannelMerger, Base>(exec, &JSAudioChannelMergerTable, this, propertyName, slot);
}

bool JSAudioChannelMerger::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSAudioChannelMerger, Base>(exec, &JSAudioChannelMergerTable, this, propertyName, descriptor);
}

JSValue jsAudioChannelMergerConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioChannelMerger* domObject = static_cast<JSAudioChannelMerger*>(asObject(slotBase));
    return JSAudioChannelMerger::getConstructor(exec, domObject->globalObject());
}

JSValue JSAudioChannelMerger::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSAudioChannelMergerConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(WEB_AUDIO)
