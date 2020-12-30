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

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "JSSVGComponentTransferFunctionElement.h"

#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedNumberList.h"
#include "SVGComponentTransferFunctionElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGComponentTransferFunctionElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGComponentTransferFunctionElementTableValues[9] =
{
    { "type", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementType), (intptr_t)0 THUNK_GENERATOR(0) },
    { "tableValues", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementTableValues), (intptr_t)0 THUNK_GENERATOR(0) },
    { "slope", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSlope), (intptr_t)0 THUNK_GENERATOR(0) },
    { "intercept", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementIntercept), (intptr_t)0 THUNK_GENERATOR(0) },
    { "amplitude", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementAmplitude), (intptr_t)0 THUNK_GENERATOR(0) },
    { "exponent", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementExponent), (intptr_t)0 THUNK_GENERATOR(0) },
    { "offset", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementOffset), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGComponentTransferFunctionElementTable = { 19, 15, JSSVGComponentTransferFunctionElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGComponentTransferFunctionElementConstructorTableValues[7] =
{
    { "SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_IDENTITY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FECOMPONENTTRANSFER_TYPE_TABLE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_TABLE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_DISCRETE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FECOMPONENTTRANSFER_TYPE_LINEAR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_LINEAR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FECOMPONENTTRANSFER_TYPE_GAMMA", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_GAMMA), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGComponentTransferFunctionElementConstructorTable = { 17, 15, JSSVGComponentTransferFunctionElementConstructorTableValues, 0 };
class JSSVGComponentTransferFunctionElementConstructor : public DOMConstructorObject {
public:
    JSSVGComponentTransferFunctionElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGComponentTransferFunctionElementConstructor::s_info = { "SVGComponentTransferFunctionElementConstructor", &DOMConstructorObject::s_info, &JSSVGComponentTransferFunctionElementConstructorTable, 0 };

JSSVGComponentTransferFunctionElementConstructor::JSSVGComponentTransferFunctionElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGComponentTransferFunctionElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGComponentTransferFunctionElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGComponentTransferFunctionElementConstructor, JSDOMWrapper>(exec, &JSSVGComponentTransferFunctionElementConstructorTable, this, propertyName, slot);
}

bool JSSVGComponentTransferFunctionElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGComponentTransferFunctionElementConstructor, JSDOMWrapper>(exec, &JSSVGComponentTransferFunctionElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGComponentTransferFunctionElementPrototypeTableValues[7] =
{
    { "SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_IDENTITY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FECOMPONENTTRANSFER_TYPE_TABLE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_TABLE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_DISCRETE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FECOMPONENTTRANSFER_TYPE_LINEAR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_LINEAR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FECOMPONENTTRANSFER_TYPE_GAMMA", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_GAMMA), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGComponentTransferFunctionElementPrototypeTable = { 17, 15, JSSVGComponentTransferFunctionElementPrototypeTableValues, 0 };
const ClassInfo JSSVGComponentTransferFunctionElementPrototype::s_info = { "SVGComponentTransferFunctionElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGComponentTransferFunctionElementPrototypeTable, 0 };

JSObject* JSSVGComponentTransferFunctionElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGComponentTransferFunctionElement>(exec, globalObject);
}

bool JSSVGComponentTransferFunctionElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGComponentTransferFunctionElementPrototype, JSObject>(exec, &JSSVGComponentTransferFunctionElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGComponentTransferFunctionElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGComponentTransferFunctionElementPrototype, JSObject>(exec, &JSSVGComponentTransferFunctionElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGComponentTransferFunctionElement::s_info = { "SVGComponentTransferFunctionElement", &JSSVGElement::s_info, &JSSVGComponentTransferFunctionElementTable, 0 };

JSSVGComponentTransferFunctionElement::JSSVGComponentTransferFunctionElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGComponentTransferFunctionElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGComponentTransferFunctionElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGComponentTransferFunctionElementPrototype(exec->globalData(), globalObject, JSSVGComponentTransferFunctionElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGComponentTransferFunctionElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGComponentTransferFunctionElement, Base>(exec, &JSSVGComponentTransferFunctionElementTable, this, propertyName, slot);
}

bool JSSVGComponentTransferFunctionElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGComponentTransferFunctionElement, Base>(exec, &JSSVGComponentTransferFunctionElementTable, this, propertyName, descriptor);
}

JSValue jsSVGComponentTransferFunctionElementType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGComponentTransferFunctionElement* castedThis = static_cast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGComponentTransferFunctionElement* imp = static_cast<SVGComponentTransferFunctionElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->typeAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGComponentTransferFunctionElementTableValues(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGComponentTransferFunctionElement* castedThis = static_cast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGComponentTransferFunctionElement* imp = static_cast<SVGComponentTransferFunctionElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumberList> obj = imp->tableValuesAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGComponentTransferFunctionElementSlope(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGComponentTransferFunctionElement* castedThis = static_cast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGComponentTransferFunctionElement* imp = static_cast<SVGComponentTransferFunctionElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->slopeAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGComponentTransferFunctionElementIntercept(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGComponentTransferFunctionElement* castedThis = static_cast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGComponentTransferFunctionElement* imp = static_cast<SVGComponentTransferFunctionElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->interceptAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGComponentTransferFunctionElementAmplitude(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGComponentTransferFunctionElement* castedThis = static_cast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGComponentTransferFunctionElement* imp = static_cast<SVGComponentTransferFunctionElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->amplitudeAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGComponentTransferFunctionElementExponent(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGComponentTransferFunctionElement* castedThis = static_cast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGComponentTransferFunctionElement* imp = static_cast<SVGComponentTransferFunctionElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->exponentAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGComponentTransferFunctionElementOffset(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGComponentTransferFunctionElement* castedThis = static_cast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGComponentTransferFunctionElement* imp = static_cast<SVGComponentTransferFunctionElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->offsetAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGComponentTransferFunctionElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGComponentTransferFunctionElement* domObject = static_cast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    return JSSVGComponentTransferFunctionElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGComponentTransferFunctionElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGComponentTransferFunctionElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_IDENTITY(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_TABLE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_DISCRETE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_LINEAR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_GAMMA(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
