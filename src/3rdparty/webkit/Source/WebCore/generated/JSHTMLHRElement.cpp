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
#include "JSHTMLHRElement.h"

#include "HTMLHRElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLHRElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLHRElementTableValues[6] =
{
    { "align", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLHRElementAlign), (intptr_t)setJSHTMLHRElementAlign THUNK_GENERATOR(0) },
    { "noShade", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLHRElementNoShade), (intptr_t)setJSHTMLHRElementNoShade THUNK_GENERATOR(0) },
    { "size", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLHRElementSize), (intptr_t)setJSHTMLHRElementSize THUNK_GENERATOR(0) },
    { "width", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLHRElementWidth), (intptr_t)setJSHTMLHRElementWidth THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLHRElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLHRElementTable = { 17, 15, JSHTMLHRElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLHRElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLHRElementConstructorTable = { 1, 0, JSHTMLHRElementConstructorTableValues, 0 };
class JSHTMLHRElementConstructor : public DOMConstructorObject {
public:
    JSHTMLHRElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLHRElementConstructor::s_info = { "HTMLHRElementConstructor", &DOMConstructorObject::s_info, &JSHTMLHRElementConstructorTable, 0 };

JSHTMLHRElementConstructor::JSHTMLHRElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLHRElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLHRElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLHRElementConstructor, JSDOMWrapper>(exec, &JSHTMLHRElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLHRElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLHRElementConstructor, JSDOMWrapper>(exec, &JSHTMLHRElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLHRElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLHRElementPrototypeTable = { 1, 0, JSHTMLHRElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLHRElementPrototype::s_info = { "HTMLHRElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLHRElementPrototypeTable, 0 };

JSObject* JSHTMLHRElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLHRElement>(exec, globalObject);
}

const ClassInfo JSHTMLHRElement::s_info = { "HTMLHRElement", &JSHTMLElement::s_info, &JSHTMLHRElementTable, 0 };

JSHTMLHRElement::JSHTMLHRElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLHRElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLHRElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLHRElementPrototype(exec->globalData(), globalObject, JSHTMLHRElementPrototype::createStructure(exec->globalData(), JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLHRElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLHRElement, Base>(exec, &JSHTMLHRElementTable, this, propertyName, slot);
}

bool JSHTMLHRElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLHRElement, Base>(exec, &JSHTMLHRElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLHRElementAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLHRElement* castedThis = static_cast<JSHTMLHRElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLHRElement* imp = static_cast<HTMLHRElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::alignAttr));
    return result;
}


JSValue jsHTMLHRElementNoShade(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLHRElement* castedThis = static_cast<JSHTMLHRElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLHRElement* imp = static_cast<HTMLHRElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->hasAttribute(WebCore::HTMLNames::noshadeAttr));
    return result;
}


JSValue jsHTMLHRElementSize(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLHRElement* castedThis = static_cast<JSHTMLHRElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLHRElement* imp = static_cast<HTMLHRElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::sizeAttr));
    return result;
}


JSValue jsHTMLHRElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLHRElement* castedThis = static_cast<JSHTMLHRElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLHRElement* imp = static_cast<HTMLHRElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::widthAttr));
    return result;
}


JSValue jsHTMLHRElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLHRElement* domObject = static_cast<JSHTMLHRElement*>(asObject(slotBase));
    return JSHTMLHRElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLHRElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLHRElement, Base>(exec, propertyName, value, &JSHTMLHRElementTable, this, slot);
}

void setJSHTMLHRElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLHRElement* castedThis = static_cast<JSHTMLHRElement*>(thisObject);
    HTMLHRElement* imp = static_cast<HTMLHRElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::alignAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLHRElementNoShade(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLHRElement* castedThis = static_cast<JSHTMLHRElement*>(thisObject);
    HTMLHRElement* imp = static_cast<HTMLHRElement*>(castedThis->impl());
    imp->setBooleanAttribute(WebCore::HTMLNames::noshadeAttr, value.toBoolean(exec));
}


void setJSHTMLHRElementSize(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLHRElement* castedThis = static_cast<JSHTMLHRElement*>(thisObject);
    HTMLHRElement* imp = static_cast<HTMLHRElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::sizeAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLHRElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLHRElement* castedThis = static_cast<JSHTMLHRElement*>(thisObject);
    HTMLHRElement* imp = static_cast<HTMLHRElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::widthAttr, valueToStringWithNullCheck(exec, value));
}


JSValue JSHTMLHRElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLHRElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
