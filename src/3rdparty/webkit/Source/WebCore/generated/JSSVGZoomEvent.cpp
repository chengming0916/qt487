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

#include "JSSVGZoomEvent.h"

#include "JSSVGPoint.h"
#include "JSSVGRect.h"
#include "SVGRect.h"
#include "SVGZoomEvent.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGZoomEvent);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGZoomEventTableValues[7] =
{
    { "zoomRectScreen", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGZoomEventZoomRectScreen), (intptr_t)0 THUNK_GENERATOR(0) },
    { "previousScale", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGZoomEventPreviousScale), (intptr_t)0 THUNK_GENERATOR(0) },
    { "previousTranslate", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGZoomEventPreviousTranslate), (intptr_t)0 THUNK_GENERATOR(0) },
    { "newScale", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGZoomEventNewScale), (intptr_t)0 THUNK_GENERATOR(0) },
    { "newTranslate", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGZoomEventNewTranslate), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGZoomEventConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGZoomEventTable = { 17, 15, JSSVGZoomEventTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGZoomEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGZoomEventConstructorTable = { 1, 0, JSSVGZoomEventConstructorTableValues, 0 };
class JSSVGZoomEventConstructor : public DOMConstructorObject {
public:
    JSSVGZoomEventConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGZoomEventConstructor::s_info = { "SVGZoomEventConstructor", &DOMConstructorObject::s_info, &JSSVGZoomEventConstructorTable, 0 };

JSSVGZoomEventConstructor::JSSVGZoomEventConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGZoomEventPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGZoomEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGZoomEventConstructor, JSDOMWrapper>(exec, &JSSVGZoomEventConstructorTable, this, propertyName, slot);
}

bool JSSVGZoomEventConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGZoomEventConstructor, JSDOMWrapper>(exec, &JSSVGZoomEventConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGZoomEventPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGZoomEventPrototypeTable = { 1, 0, JSSVGZoomEventPrototypeTableValues, 0 };
const ClassInfo JSSVGZoomEventPrototype::s_info = { "SVGZoomEventPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGZoomEventPrototypeTable, 0 };

JSObject* JSSVGZoomEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGZoomEvent>(exec, globalObject);
}

const ClassInfo JSSVGZoomEvent::s_info = { "SVGZoomEvent", &JSUIEvent::s_info, &JSSVGZoomEventTable, 0 };

JSSVGZoomEvent::JSSVGZoomEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGZoomEvent> impl)
    : JSUIEvent(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGZoomEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGZoomEventPrototype(exec->globalData(), globalObject, JSSVGZoomEventPrototype::createStructure(exec->globalData(), JSUIEventPrototype::self(exec, globalObject)));
}

bool JSSVGZoomEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGZoomEvent, Base>(exec, &JSSVGZoomEventTable, this, propertyName, slot);
}

bool JSSVGZoomEvent::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGZoomEvent, Base>(exec, &JSSVGZoomEventTable, this, propertyName, descriptor);
}

JSValue jsSVGZoomEventZoomRectScreen(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGZoomEvent* castedThis = static_cast<JSSVGZoomEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGZoomEvent* imp = static_cast<SVGZoomEvent*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(imp->zoomRectScreen())));
    return result;
}


JSValue jsSVGZoomEventPreviousScale(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGZoomEvent* castedThis = static_cast<JSSVGZoomEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGZoomEvent* imp = static_cast<SVGZoomEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->previousScale());
    return result;
}


JSValue jsSVGZoomEventPreviousTranslate(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGZoomEvent* castedThis = static_cast<JSSVGZoomEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGZoomEvent* imp = static_cast<SVGZoomEvent*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<FloatPoint>::create(imp->previousTranslate())));
    return result;
}


JSValue jsSVGZoomEventNewScale(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGZoomEvent* castedThis = static_cast<JSSVGZoomEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGZoomEvent* imp = static_cast<SVGZoomEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->newScale());
    return result;
}


JSValue jsSVGZoomEventNewTranslate(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGZoomEvent* castedThis = static_cast<JSSVGZoomEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGZoomEvent* imp = static_cast<SVGZoomEvent*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<FloatPoint>::create(imp->newTranslate())));
    return result;
}


JSValue jsSVGZoomEventConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGZoomEvent* domObject = static_cast<JSSVGZoomEvent*>(asObject(slotBase));
    return JSSVGZoomEvent::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGZoomEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGZoomEventConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
