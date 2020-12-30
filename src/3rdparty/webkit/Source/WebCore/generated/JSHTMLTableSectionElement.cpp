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
#include "JSHTMLTableSectionElement.h"

#include "ExceptionCode.h"
#include "HTMLCollection.h"
#include "HTMLElement.h"
#include "HTMLNames.h"
#include "HTMLTableSectionElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLCollection.h"
#include "JSHTMLElement.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLTableSectionElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLTableSectionElementTableValues[7] =
{
    { "align", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableSectionElementAlign), (intptr_t)setJSHTMLTableSectionElementAlign THUNK_GENERATOR(0) },
    { "ch", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableSectionElementCh), (intptr_t)setJSHTMLTableSectionElementCh THUNK_GENERATOR(0) },
    { "chOff", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableSectionElementChOff), (intptr_t)setJSHTMLTableSectionElementChOff THUNK_GENERATOR(0) },
    { "vAlign", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableSectionElementVAlign), (intptr_t)setJSHTMLTableSectionElementVAlign THUNK_GENERATOR(0) },
    { "rows", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableSectionElementRows), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableSectionElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLTableSectionElementTable = { 16, 15, JSHTMLTableSectionElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLTableSectionElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLTableSectionElementConstructorTable = { 1, 0, JSHTMLTableSectionElementConstructorTableValues, 0 };
class JSHTMLTableSectionElementConstructor : public DOMConstructorObject {
public:
    JSHTMLTableSectionElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLTableSectionElementConstructor::s_info = { "HTMLTableSectionElementConstructor", &DOMConstructorObject::s_info, &JSHTMLTableSectionElementConstructorTable, 0 };

JSHTMLTableSectionElementConstructor::JSHTMLTableSectionElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLTableSectionElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLTableSectionElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableSectionElementConstructor, JSDOMWrapper>(exec, &JSHTMLTableSectionElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLTableSectionElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLTableSectionElementConstructor, JSDOMWrapper>(exec, &JSHTMLTableSectionElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLTableSectionElementPrototypeTableValues[3] =
{
    { "insertRow", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLTableSectionElementPrototypeFunctionInsertRow), (intptr_t)1 THUNK_GENERATOR(0) },
    { "deleteRow", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLTableSectionElementPrototypeFunctionDeleteRow), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLTableSectionElementPrototypeTable = { 5, 3, JSHTMLTableSectionElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLTableSectionElementPrototype::s_info = { "HTMLTableSectionElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLTableSectionElementPrototypeTable, 0 };

JSObject* JSHTMLTableSectionElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLTableSectionElement>(exec, globalObject);
}

bool JSHTMLTableSectionElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLTableSectionElementPrototypeTable, this, propertyName, slot);
}

bool JSHTMLTableSectionElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLTableSectionElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHTMLTableSectionElement::s_info = { "HTMLTableSectionElement", &JSHTMLElement::s_info, &JSHTMLTableSectionElementTable, 0 };

JSHTMLTableSectionElement::JSHTMLTableSectionElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLTableSectionElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLTableSectionElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLTableSectionElementPrototype(exec->globalData(), globalObject, JSHTMLTableSectionElementPrototype::createStructure(exec->globalData(), JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLTableSectionElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableSectionElement, Base>(exec, &JSHTMLTableSectionElementTable, this, propertyName, slot);
}

bool JSHTMLTableSectionElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLTableSectionElement, Base>(exec, &JSHTMLTableSectionElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLTableSectionElementAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableSectionElement* castedThis = static_cast<JSHTMLTableSectionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::alignAttr));
    return result;
}


JSValue jsHTMLTableSectionElementCh(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableSectionElement* castedThis = static_cast<JSHTMLTableSectionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::charAttr));
    return result;
}


JSValue jsHTMLTableSectionElementChOff(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableSectionElement* castedThis = static_cast<JSHTMLTableSectionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::charoffAttr));
    return result;
}


JSValue jsHTMLTableSectionElementVAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableSectionElement* castedThis = static_cast<JSHTMLTableSectionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::valignAttr));
    return result;
}


JSValue jsHTMLTableSectionElementRows(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableSectionElement* castedThis = static_cast<JSHTMLTableSectionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->rows()));
    return result;
}


JSValue jsHTMLTableSectionElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableSectionElement* domObject = static_cast<JSHTMLTableSectionElement*>(asObject(slotBase));
    return JSHTMLTableSectionElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLTableSectionElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLTableSectionElement, Base>(exec, propertyName, value, &JSHTMLTableSectionElementTable, this, slot);
}

void setJSHTMLTableSectionElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableSectionElement* castedThis = static_cast<JSHTMLTableSectionElement*>(thisObject);
    HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::alignAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLTableSectionElementCh(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableSectionElement* castedThis = static_cast<JSHTMLTableSectionElement*>(thisObject);
    HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::charAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLTableSectionElementChOff(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableSectionElement* castedThis = static_cast<JSHTMLTableSectionElement*>(thisObject);
    HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::charoffAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLTableSectionElementVAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableSectionElement* castedThis = static_cast<JSHTMLTableSectionElement*>(thisObject);
    HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::valignAttr, valueToStringWithNullCheck(exec, value));
}


JSValue JSHTMLTableSectionElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLTableSectionElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLTableSectionElementPrototypeFunctionInsertRow(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLTableSectionElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLTableSectionElement* castedThis = static_cast<JSHTMLTableSectionElement*>(asObject(thisValue));
    HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    int index(exec->argument(0).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->insertRow(index, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsHTMLTableSectionElementPrototypeFunctionDeleteRow(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLTableSectionElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLTableSectionElement* castedThis = static_cast<JSHTMLTableSectionElement*>(asObject(thisValue));
    HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    int index(exec->argument(0).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->deleteRow(index, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

HTMLTableSectionElement* toHTMLTableSectionElement(JSC::JSValue value)
{
    return value.inherits(&JSHTMLTableSectionElement::s_info) ? static_cast<JSHTMLTableSectionElement*>(asObject(value))->impl() : 0;
}

}
