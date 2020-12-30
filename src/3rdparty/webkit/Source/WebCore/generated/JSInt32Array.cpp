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
#include "JSInt32Array.h"

#include "ExceptionCode.h"
#include "Int32Array.h"
#include "JSDOMBinding.h"
#include "JSInt32Array.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSInt32Array);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSInt32ArrayTableValues[3] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt32ArrayLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt32ArrayConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSInt32ArrayTable = { 5, 3, JSInt32ArrayTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSInt32ArrayConstructorTableValues[2] =
{
    { "BYTES_PER_ELEMENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt32ArrayBYTES_PER_ELEMENT), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSInt32ArrayConstructorTable = { 2, 1, JSInt32ArrayConstructorTableValues, 0 };
const ClassInfo JSInt32ArrayConstructor::s_info = { "Int32ArrayConstructor", &DOMConstructorObject::s_info, &JSInt32ArrayConstructorTable, 0 };

JSInt32ArrayConstructor::JSInt32ArrayConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSInt32ArrayPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSInt32ArrayConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSInt32ArrayConstructor, JSDOMWrapper>(exec, &JSInt32ArrayConstructorTable, this, propertyName, slot);
}

bool JSInt32ArrayConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSInt32ArrayConstructor, JSDOMWrapper>(exec, &JSInt32ArrayConstructorTable, this, propertyName, descriptor);
}

ConstructType JSInt32ArrayConstructor::getConstructData(ConstructData& constructData)
{
    constructData.native.function = constructJSInt32Array;
    return ConstructTypeHost;
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSInt32ArrayPrototypeTableValues[4] =
{
    { "BYTES_PER_ELEMENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt32ArrayBYTES_PER_ELEMENT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "subarray", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInt32ArrayPrototypeFunctionSubarray), (intptr_t)2 THUNK_GENERATOR(0) },
    { "set", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInt32ArrayPrototypeFunctionSet), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSInt32ArrayPrototypeTable = { 8, 7, JSInt32ArrayPrototypeTableValues, 0 };
static const HashTable* getJSInt32ArrayPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSInt32ArrayPrototypeTable);
}

const ClassInfo JSInt32ArrayPrototype::s_info = { "Int32ArrayPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSInt32ArrayPrototypeTable };

JSObject* JSInt32ArrayPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSInt32Array>(exec, globalObject);
}

bool JSInt32ArrayPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSInt32ArrayPrototype, JSObject>(exec, getJSInt32ArrayPrototypeTable(exec), this, propertyName, slot);
}

bool JSInt32ArrayPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSInt32ArrayPrototype, JSObject>(exec, getJSInt32ArrayPrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSInt32ArrayTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSInt32ArrayTable);
}

const ClassInfo JSInt32Array::s_info = { "Int32Array", &JSArrayBufferView::s_info, 0, getJSInt32ArrayTable };

JSInt32Array::JSInt32Array(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Int32Array> impl)
    : JSArrayBufferView(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSInt32Array::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSInt32ArrayPrototype(exec->globalData(), globalObject, JSInt32ArrayPrototype::createStructure(exec->globalData(), JSArrayBufferViewPrototype::self(exec, globalObject)));
}

bool JSInt32Array::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<Int32Array*>(impl())->length()) {
        slot.setValue(getByIndex(exec, index));
        return true;
    }
    return getStaticValueSlot<JSInt32Array, Base>(exec, getJSInt32ArrayTable(exec), this, propertyName, slot);
}

bool JSInt32Array::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<Int32Array*>(impl())->length()) {
        descriptor.setDescriptor(getByIndex(exec, index), DontDelete);
        return true;
    }
    return getStaticValueDescriptor<JSInt32Array, Base>(exec, getJSInt32ArrayTable(exec), this, propertyName, descriptor);
}

bool JSInt32Array::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<Int32Array*>(impl())->length()) {
        slot.setValue(getByIndex(exec, propertyName));
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsInt32ArrayLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSInt32Array* castedThis = static_cast<JSInt32Array*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Int32Array* imp = static_cast<Int32Array*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}


JSValue jsInt32ArrayConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSInt32Array* domObject = static_cast<JSInt32Array*>(asObject(slotBase));
    return JSInt32Array::getConstructor(exec, domObject->globalObject());
}

void JSInt32Array::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok) {
        indexSetter(exec, index, value);
        return;
    }
    Base::put(exec, propertyName, value, slot);
}

void JSInt32Array::put(ExecState* exec, unsigned propertyName, JSValue value)
{
    indexSetter(exec, propertyName, value);
    return;
}

void JSInt32Array::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    for (unsigned i = 0; i < static_cast<Int32Array*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSInt32Array::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSInt32ArrayConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsInt32ArrayPrototypeFunctionSubarray(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInt32Array::s_info))
        return throwVMTypeError(exec);
    JSInt32Array* castedThis = static_cast<JSInt32Array*>(asObject(thisValue));
    Int32Array* imp = static_cast<Int32Array*>(castedThis->impl());
    int start(exec->argument(0).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    int argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->subarray(start)));
        return JSValue::encode(result);
    }

    int end(exec->argument(1).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->subarray(start, end)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsInt32ArrayPrototypeFunctionSet(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInt32Array::s_info))
        return throwVMTypeError(exec);
    JSInt32Array* castedThis = static_cast<JSInt32Array*>(asObject(thisValue));
    return JSValue::encode(castedThis->set(exec));
}

// Constant getters

JSValue jsInt32ArrayBYTES_PER_ELEMENT(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}


JSValue JSInt32Array::getByIndex(ExecState*, unsigned index)
{
    return jsNumber(static_cast<Int32Array*>(impl())->item(index));
}

Int32Array* toInt32Array(JSC::JSValue value)
{
    return value.inherits(&JSInt32Array::s_info) ? static_cast<JSInt32Array*>(asObject(value))->impl() : 0;
}

}
