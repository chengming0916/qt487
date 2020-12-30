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
#include "JSWebKitCSSTransformValue.h"

#include "WebKitCSSTransformValue.h"
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebKitCSSTransformValue);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebKitCSSTransformValueTableValues[3] =
{
    { "operationType", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueOperationType), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebKitCSSTransformValueTable = { 5, 3, JSWebKitCSSTransformValueTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebKitCSSTransformValueConstructorTableValues[22] =
{
    { "CSS_TRANSLATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_TRANSLATE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_TRANSLATEX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_TRANSLATEX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_TRANSLATEY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_TRANSLATEY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_ROTATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_ROTATE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SCALE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SCALE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SCALEX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SCALEX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SCALEY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SCALEY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SKEW", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SKEW), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SKEWX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SKEWX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SKEWY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SKEWY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_MATRIX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_MATRIX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_TRANSLATEZ", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_TRANSLATEZ), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_TRANSLATE3D", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_TRANSLATE3D), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_ROTATEX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_ROTATEX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_ROTATEY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_ROTATEY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_ROTATEZ", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_ROTATEZ), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_ROTATE3D", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_ROTATE3D), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SCALEZ", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SCALEZ), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SCALE3D", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SCALE3D), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_PERSPECTIVE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_PERSPECTIVE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_MATRIX3D", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_MATRIX3D), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebKitCSSTransformValueConstructorTable = { 68, 63, JSWebKitCSSTransformValueConstructorTableValues, 0 };
class JSWebKitCSSTransformValueConstructor : public DOMConstructorObject {
public:
    JSWebKitCSSTransformValueConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSWebKitCSSTransformValueConstructor::s_info = { "WebKitCSSTransformValueConstructor", &DOMConstructorObject::s_info, &JSWebKitCSSTransformValueConstructorTable, 0 };

JSWebKitCSSTransformValueConstructor::JSWebKitCSSTransformValueConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSWebKitCSSTransformValuePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSWebKitCSSTransformValueConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitCSSTransformValueConstructor, JSDOMWrapper>(exec, &JSWebKitCSSTransformValueConstructorTable, this, propertyName, slot);
}

bool JSWebKitCSSTransformValueConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebKitCSSTransformValueConstructor, JSDOMWrapper>(exec, &JSWebKitCSSTransformValueConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebKitCSSTransformValuePrototypeTableValues[22] =
{
    { "CSS_TRANSLATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_TRANSLATE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_TRANSLATEX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_TRANSLATEX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_TRANSLATEY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_TRANSLATEY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_ROTATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_ROTATE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SCALE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SCALE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SCALEX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SCALEX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SCALEY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SCALEY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SKEW", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SKEW), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SKEWX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SKEWX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SKEWY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SKEWY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_MATRIX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_MATRIX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_TRANSLATEZ", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_TRANSLATEZ), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_TRANSLATE3D", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_TRANSLATE3D), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_ROTATEX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_ROTATEX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_ROTATEY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_ROTATEY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_ROTATEZ", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_ROTATEZ), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_ROTATE3D", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_ROTATE3D), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SCALEZ", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SCALEZ), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_SCALE3D", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_SCALE3D), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_PERSPECTIVE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_PERSPECTIVE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_MATRIX3D", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSTransformValueCSS_MATRIX3D), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebKitCSSTransformValuePrototypeTable = { 68, 63, JSWebKitCSSTransformValuePrototypeTableValues, 0 };
const ClassInfo JSWebKitCSSTransformValuePrototype::s_info = { "WebKitCSSTransformValuePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSWebKitCSSTransformValuePrototypeTable, 0 };

JSObject* JSWebKitCSSTransformValuePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebKitCSSTransformValue>(exec, globalObject);
}

bool JSWebKitCSSTransformValuePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitCSSTransformValuePrototype, JSObject>(exec, &JSWebKitCSSTransformValuePrototypeTable, this, propertyName, slot);
}

bool JSWebKitCSSTransformValuePrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebKitCSSTransformValuePrototype, JSObject>(exec, &JSWebKitCSSTransformValuePrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSWebKitCSSTransformValue::s_info = { "WebKitCSSTransformValue", &JSCSSValueList::s_info, &JSWebKitCSSTransformValueTable, 0 };

JSWebKitCSSTransformValue::JSWebKitCSSTransformValue(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitCSSTransformValue> impl)
    : JSCSSValueList(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSWebKitCSSTransformValue::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSWebKitCSSTransformValuePrototype(exec->globalData(), globalObject, JSWebKitCSSTransformValuePrototype::createStructure(exec->globalData(), JSCSSValueListPrototype::self(exec, globalObject)));
}

bool JSWebKitCSSTransformValue::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSWebKitCSSTransformValueTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<WebKitCSSTransformValue*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSWebKitCSSTransformValue, Base>(exec, &JSWebKitCSSTransformValueTable, this, propertyName, slot);
}

bool JSWebKitCSSTransformValue::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    const HashEntry* entry = JSWebKitCSSTransformValueTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<WebKitCSSTransformValue*>(impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(this, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    return getStaticValueDescriptor<JSWebKitCSSTransformValue, Base>(exec, &JSWebKitCSSTransformValueTable, this, propertyName, descriptor);
}

bool JSWebKitCSSTransformValue::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<WebKitCSSTransformValue*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsWebKitCSSTransformValueOperationType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebKitCSSTransformValue* castedThis = static_cast<JSWebKitCSSTransformValue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSTransformValue* imp = static_cast<WebKitCSSTransformValue*>(castedThis->impl());
    JSValue result = jsNumber(imp->operationType());
    return result;
}


JSValue jsWebKitCSSTransformValueConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebKitCSSTransformValue* domObject = static_cast<JSWebKitCSSTransformValue*>(asObject(slotBase));
    return JSWebKitCSSTransformValue::getConstructor(exec, domObject->globalObject());
}

void JSWebKitCSSTransformValue::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    for (unsigned i = 0; i < static_cast<WebKitCSSTransformValue*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSWebKitCSSTransformValue::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebKitCSSTransformValueConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

JSValue jsWebKitCSSTransformValueCSS_TRANSLATE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsWebKitCSSTransformValueCSS_TRANSLATEX(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsWebKitCSSTransformValueCSS_TRANSLATEY(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsWebKitCSSTransformValueCSS_ROTATE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsWebKitCSSTransformValueCSS_SCALE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}

JSValue jsWebKitCSSTransformValueCSS_SCALEX(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(6));
}

JSValue jsWebKitCSSTransformValueCSS_SCALEY(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(7));
}

JSValue jsWebKitCSSTransformValueCSS_SKEW(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(8));
}

JSValue jsWebKitCSSTransformValueCSS_SKEWX(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(9));
}

JSValue jsWebKitCSSTransformValueCSS_SKEWY(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(10));
}

JSValue jsWebKitCSSTransformValueCSS_MATRIX(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(11));
}

JSValue jsWebKitCSSTransformValueCSS_TRANSLATEZ(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(12));
}

JSValue jsWebKitCSSTransformValueCSS_TRANSLATE3D(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(13));
}

JSValue jsWebKitCSSTransformValueCSS_ROTATEX(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(14));
}

JSValue jsWebKitCSSTransformValueCSS_ROTATEY(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(15));
}

JSValue jsWebKitCSSTransformValueCSS_ROTATEZ(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(16));
}

JSValue jsWebKitCSSTransformValueCSS_ROTATE3D(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(17));
}

JSValue jsWebKitCSSTransformValueCSS_SCALEZ(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(18));
}

JSValue jsWebKitCSSTransformValueCSS_SCALE3D(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(19));
}

JSValue jsWebKitCSSTransformValueCSS_PERSPECTIVE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(20));
}

JSValue jsWebKitCSSTransformValueCSS_MATRIX3D(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(21));
}


JSValue JSWebKitCSSTransformValue::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSWebKitCSSTransformValue* thisObj = static_cast<JSWebKitCSSTransformValue*>(asObject(slotBase));
    return toJS(exec, thisObj->globalObject(), static_cast<WebKitCSSTransformValue*>(thisObj->impl())->item(index));
}


}
