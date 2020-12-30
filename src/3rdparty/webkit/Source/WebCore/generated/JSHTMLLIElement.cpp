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
#include "JSHTMLLIElement.h"

#include "HTMLLIElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLLIElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLLIElementTableValues[4] =
{
    { "type", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLIElementType), (intptr_t)setJSHTMLLIElementType THUNK_GENERATOR(0) },
    { "value", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLIElementValue), (intptr_t)setJSHTMLLIElementValue THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLIElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLLIElementTable = { 9, 7, JSHTMLLIElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLLIElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLLIElementConstructorTable = { 1, 0, JSHTMLLIElementConstructorTableValues, 0 };
class JSHTMLLIElementConstructor : public DOMConstructorObject {
public:
    JSHTMLLIElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLLIElementConstructor::s_info = { "HTMLLIElementConstructor", &DOMConstructorObject::s_info, &JSHTMLLIElementConstructorTable, 0 };

JSHTMLLIElementConstructor::JSHTMLLIElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLLIElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLLIElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLLIElementConstructor, JSDOMWrapper>(exec, &JSHTMLLIElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLLIElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLLIElementConstructor, JSDOMWrapper>(exec, &JSHTMLLIElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLLIElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLLIElementPrototypeTable = { 1, 0, JSHTMLLIElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLLIElementPrototype::s_info = { "HTMLLIElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLLIElementPrototypeTable, 0 };

JSObject* JSHTMLLIElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLLIElement>(exec, globalObject);
}

const ClassInfo JSHTMLLIElement::s_info = { "HTMLLIElement", &JSHTMLElement::s_info, &JSHTMLLIElementTable, 0 };

JSHTMLLIElement::JSHTMLLIElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLLIElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLLIElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLLIElementPrototype(exec->globalData(), globalObject, JSHTMLLIElementPrototype::createStructure(exec->globalData(), JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLLIElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLLIElement, Base>(exec, &JSHTMLLIElementTable, this, propertyName, slot);
}

bool JSHTMLLIElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLLIElement, Base>(exec, &JSHTMLLIElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLLIElementType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLLIElement* castedThis = static_cast<JSHTMLLIElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLIElement* imp = static_cast<HTMLLIElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::typeAttr));
    return result;
}


JSValue jsHTMLLIElementValue(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLLIElement* castedThis = static_cast<JSHTMLLIElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLIElement* imp = static_cast<HTMLLIElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->getIntegralAttribute(WebCore::HTMLNames::valueAttr));
    return result;
}


JSValue jsHTMLLIElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLLIElement* domObject = static_cast<JSHTMLLIElement*>(asObject(slotBase));
    return JSHTMLLIElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLLIElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLLIElement, Base>(exec, propertyName, value, &JSHTMLLIElementTable, this, slot);
}

void setJSHTMLLIElementType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLLIElement* castedThis = static_cast<JSHTMLLIElement*>(thisObject);
    HTMLLIElement* imp = static_cast<HTMLLIElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::typeAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLLIElementValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLLIElement* castedThis = static_cast<JSHTMLLIElement*>(thisObject);
    HTMLLIElement* imp = static_cast<HTMLLIElement*>(castedThis->impl());
    imp->setIntegralAttribute(WebCore::HTMLNames::valueAttr, value.toInt32(exec));
}


JSValue JSHTMLLIElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLLIElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
