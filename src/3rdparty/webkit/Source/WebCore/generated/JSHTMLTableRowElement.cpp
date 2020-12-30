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
#include "JSHTMLTableRowElement.h"

#include "ExceptionCode.h"
#include "HTMLCollection.h"
#include "HTMLElement.h"
#include "HTMLNames.h"
#include "HTMLTableRowElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLCollection.h"
#include "JSHTMLElement.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLTableRowElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLTableRowElementTableValues[10] =
{
    { "rowIndex", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementRowIndex), (intptr_t)0 THUNK_GENERATOR(0) },
    { "sectionRowIndex", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementSectionRowIndex), (intptr_t)0 THUNK_GENERATOR(0) },
    { "cells", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementCells), (intptr_t)0 THUNK_GENERATOR(0) },
    { "align", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementAlign), (intptr_t)setJSHTMLTableRowElementAlign THUNK_GENERATOR(0) },
    { "bgColor", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementBgColor), (intptr_t)setJSHTMLTableRowElementBgColor THUNK_GENERATOR(0) },
    { "ch", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementCh), (intptr_t)setJSHTMLTableRowElementCh THUNK_GENERATOR(0) },
    { "chOff", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementChOff), (intptr_t)setJSHTMLTableRowElementChOff THUNK_GENERATOR(0) },
    { "vAlign", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementVAlign), (intptr_t)setJSHTMLTableRowElementVAlign THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLTableRowElementTable = { 33, 31, JSHTMLTableRowElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLTableRowElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLTableRowElementConstructorTable = { 1, 0, JSHTMLTableRowElementConstructorTableValues, 0 };
class JSHTMLTableRowElementConstructor : public DOMConstructorObject {
public:
    JSHTMLTableRowElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLTableRowElementConstructor::s_info = { "HTMLTableRowElementConstructor", &DOMConstructorObject::s_info, &JSHTMLTableRowElementConstructorTable, 0 };

JSHTMLTableRowElementConstructor::JSHTMLTableRowElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLTableRowElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLTableRowElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableRowElementConstructor, JSDOMWrapper>(exec, &JSHTMLTableRowElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLTableRowElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLTableRowElementConstructor, JSDOMWrapper>(exec, &JSHTMLTableRowElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLTableRowElementPrototypeTableValues[3] =
{
    { "insertCell", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLTableRowElementPrototypeFunctionInsertCell), (intptr_t)1 THUNK_GENERATOR(0) },
    { "deleteCell", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLTableRowElementPrototypeFunctionDeleteCell), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLTableRowElementPrototypeTable = { 4, 3, JSHTMLTableRowElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLTableRowElementPrototype::s_info = { "HTMLTableRowElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLTableRowElementPrototypeTable, 0 };

JSObject* JSHTMLTableRowElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLTableRowElement>(exec, globalObject);
}

bool JSHTMLTableRowElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLTableRowElementPrototypeTable, this, propertyName, slot);
}

bool JSHTMLTableRowElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLTableRowElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHTMLTableRowElement::s_info = { "HTMLTableRowElement", &JSHTMLElement::s_info, &JSHTMLTableRowElementTable, 0 };

JSHTMLTableRowElement::JSHTMLTableRowElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLTableRowElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLTableRowElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLTableRowElementPrototype(exec->globalData(), globalObject, JSHTMLTableRowElementPrototype::createStructure(exec->globalData(), JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLTableRowElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableRowElement, Base>(exec, &JSHTMLTableRowElementTable, this, propertyName, slot);
}

bool JSHTMLTableRowElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLTableRowElement, Base>(exec, &JSHTMLTableRowElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLTableRowElementRowIndex(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->rowIndex());
    return result;
}


JSValue jsHTMLTableRowElementSectionRowIndex(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->sectionRowIndex());
    return result;
}


JSValue jsHTMLTableRowElementCells(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->cells()));
    return result;
}


JSValue jsHTMLTableRowElementAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::alignAttr));
    return result;
}


JSValue jsHTMLTableRowElementBgColor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::bgcolorAttr));
    return result;
}


JSValue jsHTMLTableRowElementCh(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::charAttr));
    return result;
}


JSValue jsHTMLTableRowElementChOff(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::charoffAttr));
    return result;
}


JSValue jsHTMLTableRowElementVAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::valignAttr));
    return result;
}


JSValue jsHTMLTableRowElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableRowElement* domObject = static_cast<JSHTMLTableRowElement*>(asObject(slotBase));
    return JSHTMLTableRowElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLTableRowElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLTableRowElement, Base>(exec, propertyName, value, &JSHTMLTableRowElementTable, this, slot);
}

void setJSHTMLTableRowElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(thisObject);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::alignAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLTableRowElementBgColor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(thisObject);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::bgcolorAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLTableRowElementCh(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(thisObject);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::charAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLTableRowElementChOff(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(thisObject);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::charoffAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLTableRowElementVAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(thisObject);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::valignAttr, valueToStringWithNullCheck(exec, value));
}


JSValue JSHTMLTableRowElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLTableRowElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLTableRowElementPrototypeFunctionInsertCell(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLTableRowElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(thisValue));
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    int index(exec->argument(0).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->insertCell(index, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsHTMLTableRowElementPrototypeFunctionDeleteCell(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLTableRowElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(thisValue));
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    int index(exec->argument(0).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->deleteCell(index, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}


}
