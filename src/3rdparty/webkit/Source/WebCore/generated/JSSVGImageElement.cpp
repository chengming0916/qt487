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

#if ENABLE(SVG)

#include "JSSVGImageElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGImageElement.h"
#include "SVGMatrix.h"
#include "SVGRect.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGImageElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGImageElementTableValues[19] =
{
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementWidth), (intptr_t)0 THUNK_GENERATOR(0) },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementHeight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "preserveAspectRatio", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementPreserveAspectRatio), (intptr_t)0 THUNK_GENERATOR(0) },
    { "href", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementHref), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredFeatures", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementRequiredFeatures), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredExtensions", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementRequiredExtensions), (intptr_t)0 THUNK_GENERATOR(0) },
    { "systemLanguage", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementSystemLanguage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "xmllang", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementXmllang), (intptr_t)setJSSVGImageElementXmllang THUNK_GENERATOR(0) },
    { "xmlspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementXmlspace), (intptr_t)setJSSVGImageElementXmlspace THUNK_GENERATOR(0) },
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementExternalResourcesRequired), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "transform", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementTransform), (intptr_t)0 THUNK_GENERATOR(0) },
    { "nearestViewportElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementNearestViewportElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "farthestViewportElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementFarthestViewportElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGImageElementTable = { 68, 63, JSSVGImageElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGImageElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGImageElementConstructorTable = { 1, 0, JSSVGImageElementConstructorTableValues, 0 };
class JSSVGImageElementConstructor : public DOMConstructorObject {
public:
    JSSVGImageElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGImageElementConstructor::s_info = { "SVGImageElementConstructor", &DOMConstructorObject::s_info, &JSSVGImageElementConstructorTable, 0 };

JSSVGImageElementConstructor::JSSVGImageElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGImageElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGImageElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGImageElementConstructor, JSDOMWrapper>(exec, &JSSVGImageElementConstructorTable, this, propertyName, slot);
}

bool JSSVGImageElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGImageElementConstructor, JSDOMWrapper>(exec, &JSSVGImageElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGImageElementPrototypeTableValues[7] =
{
    { "hasExtension", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGImageElementPrototypeFunctionHasExtension), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGImageElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getBBox", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGImageElementPrototypeFunctionGetBBox), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getCTM", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGImageElementPrototypeFunctionGetCTM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getScreenCTM", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGImageElementPrototypeFunctionGetScreenCTM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getTransformToElement", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGImageElementPrototypeFunctionGetTransformToElement), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGImageElementPrototypeTable = { 17, 15, JSSVGImageElementPrototypeTableValues, 0 };
const ClassInfo JSSVGImageElementPrototype::s_info = { "SVGImageElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGImageElementPrototypeTable, 0 };

JSObject* JSSVGImageElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGImageElement>(exec, globalObject);
}

bool JSSVGImageElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGImageElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGImageElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGImageElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGImageElement::s_info = { "SVGImageElement", &JSSVGElement::s_info, &JSSVGImageElementTable, 0 };

JSSVGImageElement::JSSVGImageElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGImageElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGImageElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGImageElementPrototype(exec->globalData(), globalObject, JSSVGImageElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGImageElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGImageElement, Base>(exec, &JSSVGImageElementTable, this, propertyName, slot);
}

bool JSSVGImageElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGImageElement, Base>(exec, &JSSVGImageElementTable, this, propertyName, descriptor);
}

JSValue jsSVGImageElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGImageElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGImageElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGImageElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGImageElementPreserveAspectRatio(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedPreserveAspectRatio> obj = imp->preserveAspectRatioAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGImageElementHref(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGImageElementRequiredFeatures(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGImageElement, IsDerivedFromSVGElement<SVGImageElement>::value>::ownerElement(imp), imp->requiredFeatures())));
    return result;
}


JSValue jsSVGImageElementRequiredExtensions(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGImageElement, IsDerivedFromSVGElement<SVGImageElement>::value>::ownerElement(imp), imp->requiredExtensions())));
    return result;
}


JSValue jsSVGImageElementSystemLanguage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGImageElement, IsDerivedFromSVGElement<SVGImageElement>::value>::ownerElement(imp), imp->systemLanguage())));
    return result;
}


JSValue jsSVGImageElementXmllang(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmllang());
    return result;
}


JSValue jsSVGImageElementXmlspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmlspace());
    return result;
}


JSValue jsSVGImageElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGImageElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGImageElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}


JSValue jsSVGImageElementTransform(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGImageElementNearestViewportElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->nearestViewportElement()));
    return result;
}


JSValue jsSVGImageElementFarthestViewportElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->farthestViewportElement()));
    return result;
}


JSValue jsSVGImageElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGImageElement* domObject = static_cast<JSSVGImageElement*>(asObject(slotBase));
    return JSSVGImageElement::getConstructor(exec, domObject->globalObject());
}

void JSSVGImageElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGImageElement, Base>(exec, propertyName, value, &JSSVGImageElementTable, this, slot);
}

void setJSSVGImageElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(thisObject);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    imp->setXmllang(ustringToString(value.toString(exec)));
}


void setJSSVGImageElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(thisObject);
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    imp->setXmlspace(ustringToString(value.toString(exec)));
}


JSValue JSSVGImageElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGImageElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGImageElementPrototypeFunctionHasExtension(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGImageElement::s_info))
        return throwVMTypeError(exec);
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(thisValue));
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    const String& extension(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGImageElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGImageElement::s_info))
        return throwVMTypeError(exec);
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(thisValue));
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGImageElementPrototypeFunctionGetBBox(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGImageElement::s_info))
        return throwVMTypeError(exec);
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(thisValue));
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(imp->getBBox())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGImageElementPrototypeFunctionGetCTM(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGImageElement::s_info))
        return throwVMTypeError(exec);
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(thisValue));
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getCTM())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGImageElementPrototypeFunctionGetScreenCTM(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGImageElement::s_info))
        return throwVMTypeError(exec);
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(thisValue));
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getScreenCTM())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGImageElementPrototypeFunctionGetTransformToElement(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGImageElement::s_info))
        return throwVMTypeError(exec);
    JSSVGImageElement* castedThis = static_cast<JSSVGImageElement*>(asObject(thisValue));
    SVGImageElement* imp = static_cast<SVGImageElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    SVGElement* element(toSVGElement(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getTransformToElement(element, ec))));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


}

#endif // ENABLE(SVG)
