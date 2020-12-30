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
#include "JSXMLHttpRequestUpload.h"

#include "Event.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "XMLHttpRequestUpload.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSXMLHttpRequestUpload);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXMLHttpRequestUploadTableValues[7] =
{
    { "onabort", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestUploadOnabort), (intptr_t)setJSXMLHttpRequestUploadOnabort THUNK_GENERATOR(0) },
    { "onerror", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestUploadOnerror), (intptr_t)setJSXMLHttpRequestUploadOnerror THUNK_GENERATOR(0) },
    { "onload", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestUploadOnload), (intptr_t)setJSXMLHttpRequestUploadOnload THUNK_GENERATOR(0) },
    { "onloadstart", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestUploadOnloadstart), (intptr_t)setJSXMLHttpRequestUploadOnloadstart THUNK_GENERATOR(0) },
    { "onprogress", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestUploadOnprogress), (intptr_t)setJSXMLHttpRequestUploadOnprogress THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestUploadConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXMLHttpRequestUploadTable = { 16, 15, JSXMLHttpRequestUploadTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXMLHttpRequestUploadConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXMLHttpRequestUploadConstructorTable = { 1, 0, JSXMLHttpRequestUploadConstructorTableValues, 0 };
class JSXMLHttpRequestUploadConstructor : public DOMConstructorObject {
public:
    JSXMLHttpRequestUploadConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSXMLHttpRequestUploadConstructor::s_info = { "XMLHttpRequestUploadConstructor", &DOMConstructorObject::s_info, &JSXMLHttpRequestUploadConstructorTable, 0 };

JSXMLHttpRequestUploadConstructor::JSXMLHttpRequestUploadConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSXMLHttpRequestUploadPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSXMLHttpRequestUploadConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLHttpRequestUploadConstructor, JSDOMWrapper>(exec, &JSXMLHttpRequestUploadConstructorTable, this, propertyName, slot);
}

bool JSXMLHttpRequestUploadConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSXMLHttpRequestUploadConstructor, JSDOMWrapper>(exec, &JSXMLHttpRequestUploadConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXMLHttpRequestUploadPrototypeTableValues[4] =
{
    { "addEventListener", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsXMLHttpRequestUploadPrototypeFunctionAddEventListener), (intptr_t)3 THUNK_GENERATOR(0) },
    { "removeEventListener", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsXMLHttpRequestUploadPrototypeFunctionRemoveEventListener), (intptr_t)3 THUNK_GENERATOR(0) },
    { "dispatchEvent", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsXMLHttpRequestUploadPrototypeFunctionDispatchEvent), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXMLHttpRequestUploadPrototypeTable = { 8, 7, JSXMLHttpRequestUploadPrototypeTableValues, 0 };
static const HashTable* getJSXMLHttpRequestUploadPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSXMLHttpRequestUploadPrototypeTable);
}

const ClassInfo JSXMLHttpRequestUploadPrototype::s_info = { "XMLHttpRequestUploadPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSXMLHttpRequestUploadPrototypeTable };

JSObject* JSXMLHttpRequestUploadPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXMLHttpRequestUpload>(exec, globalObject);
}

bool JSXMLHttpRequestUploadPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, getJSXMLHttpRequestUploadPrototypeTable(exec), this, propertyName, slot);
}

bool JSXMLHttpRequestUploadPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, getJSXMLHttpRequestUploadPrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSXMLHttpRequestUploadTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSXMLHttpRequestUploadTable);
}

const ClassInfo JSXMLHttpRequestUpload::s_info = { "XMLHttpRequestUpload", &JSDOMWrapper::s_info, 0, getJSXMLHttpRequestUploadTable };

JSXMLHttpRequestUpload::JSXMLHttpRequestUpload(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<XMLHttpRequestUpload> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

void JSXMLHttpRequestUpload::visitChildren(SlotVisitor& visitor)
{
    Base::visitChildren(visitor);
    impl()->visitJSEventListeners(visitor);
}

JSObject* JSXMLHttpRequestUpload::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSXMLHttpRequestUploadPrototype(exec->globalData(), globalObject, JSXMLHttpRequestUploadPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSXMLHttpRequestUpload::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLHttpRequestUpload, Base>(exec, getJSXMLHttpRequestUploadTable(exec), this, propertyName, slot);
}

bool JSXMLHttpRequestUpload::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSXMLHttpRequestUpload, Base>(exec, getJSXMLHttpRequestUploadTable(exec), this, propertyName, descriptor);
}

JSValue jsXMLHttpRequestUploadOnabort(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXMLHttpRequestUpload* castedThis = static_cast<JSXMLHttpRequestUpload*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequestUpload* imp = static_cast<XMLHttpRequestUpload*>(castedThis->impl());
    if (EventListener* listener = imp->onabort()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(imp->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsXMLHttpRequestUploadOnerror(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXMLHttpRequestUpload* castedThis = static_cast<JSXMLHttpRequestUpload*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequestUpload* imp = static_cast<XMLHttpRequestUpload*>(castedThis->impl());
    if (EventListener* listener = imp->onerror()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(imp->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsXMLHttpRequestUploadOnload(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXMLHttpRequestUpload* castedThis = static_cast<JSXMLHttpRequestUpload*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequestUpload* imp = static_cast<XMLHttpRequestUpload*>(castedThis->impl());
    if (EventListener* listener = imp->onload()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(imp->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsXMLHttpRequestUploadOnloadstart(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXMLHttpRequestUpload* castedThis = static_cast<JSXMLHttpRequestUpload*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequestUpload* imp = static_cast<XMLHttpRequestUpload*>(castedThis->impl());
    if (EventListener* listener = imp->onloadstart()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(imp->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsXMLHttpRequestUploadOnprogress(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXMLHttpRequestUpload* castedThis = static_cast<JSXMLHttpRequestUpload*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequestUpload* imp = static_cast<XMLHttpRequestUpload*>(castedThis->impl());
    if (EventListener* listener = imp->onprogress()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(imp->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsXMLHttpRequestUploadConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXMLHttpRequestUpload* domObject = static_cast<JSXMLHttpRequestUpload*>(asObject(slotBase));
    return JSXMLHttpRequestUpload::getConstructor(exec, domObject->globalObject());
}

void JSXMLHttpRequestUpload::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSXMLHttpRequestUpload, Base>(exec, propertyName, value, getJSXMLHttpRequestUploadTable(exec), this, slot);
}

void setJSXMLHttpRequestUploadOnabort(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSXMLHttpRequestUpload* castedThis = static_cast<JSXMLHttpRequestUpload*>(thisObject);
    XMLHttpRequestUpload* imp = static_cast<XMLHttpRequestUpload*>(castedThis->impl());
    imp->setOnabort(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSXMLHttpRequestUploadOnerror(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSXMLHttpRequestUpload* castedThis = static_cast<JSXMLHttpRequestUpload*>(thisObject);
    XMLHttpRequestUpload* imp = static_cast<XMLHttpRequestUpload*>(castedThis->impl());
    imp->setOnerror(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSXMLHttpRequestUploadOnload(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSXMLHttpRequestUpload* castedThis = static_cast<JSXMLHttpRequestUpload*>(thisObject);
    XMLHttpRequestUpload* imp = static_cast<XMLHttpRequestUpload*>(castedThis->impl());
    imp->setOnload(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSXMLHttpRequestUploadOnloadstart(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSXMLHttpRequestUpload* castedThis = static_cast<JSXMLHttpRequestUpload*>(thisObject);
    XMLHttpRequestUpload* imp = static_cast<XMLHttpRequestUpload*>(castedThis->impl());
    imp->setOnloadstart(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSXMLHttpRequestUploadOnprogress(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSXMLHttpRequestUpload* castedThis = static_cast<JSXMLHttpRequestUpload*>(thisObject);
    XMLHttpRequestUpload* imp = static_cast<XMLHttpRequestUpload*>(castedThis->impl());
    imp->setOnprogress(createJSAttributeEventListener(exec, value, thisObject));
}


JSValue JSXMLHttpRequestUpload::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSXMLHttpRequestUploadConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestUploadPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXMLHttpRequestUpload::s_info))
        return throwVMTypeError(exec);
    JSXMLHttpRequestUpload* castedThis = static_cast<JSXMLHttpRequestUpload*>(asObject(thisValue));
    XMLHttpRequestUpload* imp = static_cast<XMLHttpRequestUpload*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    imp->addEventListener(ustringToAtomicString(exec->argument(0).toString(exec)), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestUploadPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXMLHttpRequestUpload::s_info))
        return throwVMTypeError(exec);
    JSXMLHttpRequestUpload* castedThis = static_cast<JSXMLHttpRequestUpload*>(asObject(thisValue));
    XMLHttpRequestUpload* imp = static_cast<XMLHttpRequestUpload*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    imp->removeEventListener(ustringToAtomicString(exec->argument(0).toString(exec)), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestUploadPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXMLHttpRequestUpload::s_info))
        return throwVMTypeError(exec);
    JSXMLHttpRequestUpload* castedThis = static_cast<JSXMLHttpRequestUpload*>(asObject(thisValue));
    XMLHttpRequestUpload* imp = static_cast<XMLHttpRequestUpload*>(castedThis->impl());
    ExceptionCode ec = 0;
    Event* evt(toEvent(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->dispatchEvent(evt, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

static inline bool isObservable(JSXMLHttpRequestUpload* jsXMLHttpRequestUpload)
{
    if (jsXMLHttpRequestUpload->hasCustomProperties())
        return true;
    if (jsXMLHttpRequestUpload->impl()->hasEventListeners())
        return true;
    return false;
}

bool JSXMLHttpRequestUploadOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSXMLHttpRequestUpload* jsXMLHttpRequestUpload = static_cast<JSXMLHttpRequestUpload*>(handle.get().asCell());
    if (!isObservable(jsXMLHttpRequestUpload))
        return false;
    XMLHttpRequestUpload* root = jsXMLHttpRequestUpload->impl();
    return visitor.containsOpaqueRoot(root);
}

void JSXMLHttpRequestUploadOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSXMLHttpRequestUpload* jsXMLHttpRequestUpload = static_cast<JSXMLHttpRequestUpload*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsXMLHttpRequestUpload->impl(), jsXMLHttpRequestUpload);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, XMLHttpRequestUpload* impl)
{
    return wrap<JSXMLHttpRequestUpload>(exec, globalObject, impl);
}

XMLHttpRequestUpload* toXMLHttpRequestUpload(JSC::JSValue value)
{
    return value.inherits(&JSXMLHttpRequestUpload::s_info) ? static_cast<JSXMLHttpRequestUpload*>(asObject(value))->impl() : 0;
}

}
