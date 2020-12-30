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
#include "JSWebKitCSSKeyframesRule.h"

#include "CSSRuleList.h"
#include "ExceptionCode.h"
#include "JSCSSRuleList.h"
#include "JSDOMBinding.h"
#include "JSWebKitCSSKeyframeRule.h"
#include "KURL.h"
#include "WebKitCSSKeyframeRule.h"
#include "WebKitCSSKeyframesRule.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebKitCSSKeyframesRule);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebKitCSSKeyframesRuleTableValues[4] =
{
    { "name", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSKeyframesRuleName), (intptr_t)setJSWebKitCSSKeyframesRuleName THUNK_GENERATOR(0) },
    { "cssRules", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSKeyframesRuleCssRules), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSKeyframesRuleConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebKitCSSKeyframesRuleTable = { 9, 7, JSWebKitCSSKeyframesRuleTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebKitCSSKeyframesRuleConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebKitCSSKeyframesRuleConstructorTable = { 1, 0, JSWebKitCSSKeyframesRuleConstructorTableValues, 0 };
class JSWebKitCSSKeyframesRuleConstructor : public DOMConstructorObject {
public:
    JSWebKitCSSKeyframesRuleConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSWebKitCSSKeyframesRuleConstructor::s_info = { "WebKitCSSKeyframesRuleConstructor", &DOMConstructorObject::s_info, &JSWebKitCSSKeyframesRuleConstructorTable, 0 };

JSWebKitCSSKeyframesRuleConstructor::JSWebKitCSSKeyframesRuleConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSWebKitCSSKeyframesRulePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSWebKitCSSKeyframesRuleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitCSSKeyframesRuleConstructor, JSDOMWrapper>(exec, &JSWebKitCSSKeyframesRuleConstructorTable, this, propertyName, slot);
}

bool JSWebKitCSSKeyframesRuleConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebKitCSSKeyframesRuleConstructor, JSDOMWrapper>(exec, &JSWebKitCSSKeyframesRuleConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebKitCSSKeyframesRulePrototypeTableValues[4] =
{
    { "insertRule", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWebKitCSSKeyframesRulePrototypeFunctionInsertRule), (intptr_t)1 THUNK_GENERATOR(0) },
    { "deleteRule", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWebKitCSSKeyframesRulePrototypeFunctionDeleteRule), (intptr_t)1 THUNK_GENERATOR(0) },
    { "findRule", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWebKitCSSKeyframesRulePrototypeFunctionFindRule), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebKitCSSKeyframesRulePrototypeTable = { 8, 7, JSWebKitCSSKeyframesRulePrototypeTableValues, 0 };
const ClassInfo JSWebKitCSSKeyframesRulePrototype::s_info = { "WebKitCSSKeyframesRulePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSWebKitCSSKeyframesRulePrototypeTable, 0 };

JSObject* JSWebKitCSSKeyframesRulePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebKitCSSKeyframesRule>(exec, globalObject);
}

bool JSWebKitCSSKeyframesRulePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSWebKitCSSKeyframesRulePrototypeTable, this, propertyName, slot);
}

bool JSWebKitCSSKeyframesRulePrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSWebKitCSSKeyframesRulePrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSWebKitCSSKeyframesRule::s_info = { "WebKitCSSKeyframesRule", &JSCSSRule::s_info, &JSWebKitCSSKeyframesRuleTable, 0 };

JSWebKitCSSKeyframesRule::JSWebKitCSSKeyframesRule(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitCSSKeyframesRule> impl)
    : JSCSSRule(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSWebKitCSSKeyframesRule::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSWebKitCSSKeyframesRulePrototype(exec->globalData(), globalObject, JSWebKitCSSKeyframesRulePrototype::createStructure(exec->globalData(), JSCSSRulePrototype::self(exec, globalObject)));
}

bool JSWebKitCSSKeyframesRule::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSWebKitCSSKeyframesRuleTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<WebKitCSSKeyframesRule*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSWebKitCSSKeyframesRule, Base>(exec, &JSWebKitCSSKeyframesRuleTable, this, propertyName, slot);
}

bool JSWebKitCSSKeyframesRule::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    const HashEntry* entry = JSWebKitCSSKeyframesRuleTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<WebKitCSSKeyframesRule*>(impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(this, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    return getStaticValueDescriptor<JSWebKitCSSKeyframesRule, Base>(exec, &JSWebKitCSSKeyframesRuleTable, this, propertyName, descriptor);
}

bool JSWebKitCSSKeyframesRule::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<WebKitCSSKeyframesRule*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsWebKitCSSKeyframesRuleName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebKitCSSKeyframesRule* castedThis = static_cast<JSWebKitCSSKeyframesRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->name());
    return result;
}


JSValue jsWebKitCSSKeyframesRuleCssRules(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebKitCSSKeyframesRule* castedThis = static_cast<JSWebKitCSSKeyframesRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->cssRules()));
    return result;
}


JSValue jsWebKitCSSKeyframesRuleConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebKitCSSKeyframesRule* domObject = static_cast<JSWebKitCSSKeyframesRule*>(asObject(slotBase));
    return JSWebKitCSSKeyframesRule::getConstructor(exec, domObject->globalObject());
}

void JSWebKitCSSKeyframesRule::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSWebKitCSSKeyframesRule, Base>(exec, propertyName, value, &JSWebKitCSSKeyframesRuleTable, this, slot);
}

void setJSWebKitCSSKeyframesRuleName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSWebKitCSSKeyframesRule* castedThis = static_cast<JSWebKitCSSKeyframesRule*>(thisObject);
    WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(castedThis->impl());
    imp->setName(valueToStringWithNullCheck(exec, value));
}


void JSWebKitCSSKeyframesRule::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    for (unsigned i = 0; i < static_cast<WebKitCSSKeyframesRule*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSWebKitCSSKeyframesRule::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebKitCSSKeyframesRuleConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsWebKitCSSKeyframesRulePrototypeFunctionInsertRule(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebKitCSSKeyframesRule::s_info))
        return throwVMTypeError(exec);
    JSWebKitCSSKeyframesRule* castedThis = static_cast<JSWebKitCSSKeyframesRule*>(asObject(thisValue));
    WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(castedThis->impl());
    const String& rule(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->insertRule(rule);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWebKitCSSKeyframesRulePrototypeFunctionDeleteRule(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebKitCSSKeyframesRule::s_info))
        return throwVMTypeError(exec);
    JSWebKitCSSKeyframesRule* castedThis = static_cast<JSWebKitCSSKeyframesRule*>(asObject(thisValue));
    WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(castedThis->impl());
    const String& key(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->deleteRule(key);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWebKitCSSKeyframesRulePrototypeFunctionFindRule(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebKitCSSKeyframesRule::s_info))
        return throwVMTypeError(exec);
    JSWebKitCSSKeyframesRule* castedThis = static_cast<JSWebKitCSSKeyframesRule*>(asObject(thisValue));
    WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(castedThis->impl());
    const String& key(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->findRule(key)));
    return JSValue::encode(result);
}


JSValue JSWebKitCSSKeyframesRule::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSWebKitCSSKeyframesRule* thisObj = static_cast<JSWebKitCSSKeyframesRule*>(asObject(slotBase));
    return toJS(exec, thisObj->globalObject(), static_cast<WebKitCSSKeyframesRule*>(thisObj->impl())->item(index));
}


}
