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

/*
 * Portions of this code are Copyright (C) 2014 Yahoo! Inc. Licensed 
 * under the LGPL license.
 * 
 * Author: Nera Liu <neraliu@yahoo-inc.com>
 *
 */
#include "config.h"
#include "JSHTMLElement.h"

#include "DOMTokenList.h"
#include "Element.h"
#include "ExceptionCode.h"
#include "HTMLCollection.h"
#include "HTMLElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include "JSDOMTokenList.h"
#include "JSElement.h"
#include "JSHTMLCollection.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

#ifdef JSC_TAINTED
#include "TaintedCounter.h"
#include "TaintedTrace.h"
#include "TaintedUtils.h"
#include <sstream>
#endif

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLElementTableValues[19] =
{
    { "id", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementId), (intptr_t)setJSHTMLElementId THUNK_GENERATOR(0) },
    { "title", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementTitle), (intptr_t)setJSHTMLElementTitle THUNK_GENERATOR(0) },
    { "lang", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementLang), (intptr_t)setJSHTMLElementLang THUNK_GENERATOR(0) },
    { "dir", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementDir), (intptr_t)setJSHTMLElementDir THUNK_GENERATOR(0) },
    { "className", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementClassName), (intptr_t)setJSHTMLElementClassName THUNK_GENERATOR(0) },
    { "classList", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementClassList), (intptr_t)0 THUNK_GENERATOR(0) },
    { "tabIndex", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementTabIndex), (intptr_t)setJSHTMLElementTabIndex THUNK_GENERATOR(0) },
    { "draggable", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementDraggable), (intptr_t)setJSHTMLElementDraggable THUNK_GENERATOR(0) },
    { "hidden", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementHidden), (intptr_t)setJSHTMLElementHidden THUNK_GENERATOR(0) },
    { "innerHTML", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementInnerHTML), (intptr_t)setJSHTMLElementInnerHTML THUNK_GENERATOR(0) },
    { "innerText", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementInnerText), (intptr_t)setJSHTMLElementInnerText THUNK_GENERATOR(0) },
    { "outerHTML", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementOuterHTML), (intptr_t)setJSHTMLElementOuterHTML THUNK_GENERATOR(0) },
    { "outerText", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementOuterText), (intptr_t)setJSHTMLElementOuterText THUNK_GENERATOR(0) },
    { "children", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementChildren), (intptr_t)0 THUNK_GENERATOR(0) },
    { "contentEditable", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementContentEditable), (intptr_t)setJSHTMLElementContentEditable THUNK_GENERATOR(0) },
    { "isContentEditable", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementIsContentEditable), (intptr_t)0 THUNK_GENERATOR(0) },
    { "spellcheck", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementSpellcheck), (intptr_t)setJSHTMLElementSpellcheck THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLElementTable = { 67, 63, JSHTMLElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLElementConstructorTable = { 1, 0, JSHTMLElementConstructorTableValues, 0 };
class JSHTMLElementConstructor : public DOMConstructorObject {
public:
    JSHTMLElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLElementConstructor::s_info = { "HTMLElementConstructor", &DOMConstructorObject::s_info, &JSHTMLElementConstructorTable, 0 };

JSHTMLElementConstructor::JSHTMLElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLElementConstructor, JSDOMWrapper>(exec, &JSHTMLElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLElementConstructor, JSDOMWrapper>(exec, &JSHTMLElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLElementPrototypeTableValues[4] =
{
    { "insertAdjacentElement", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLElementPrototypeFunctionInsertAdjacentElement), (intptr_t)2 THUNK_GENERATOR(0) },
    { "insertAdjacentHTML", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLElementPrototypeFunctionInsertAdjacentHTML), (intptr_t)2 THUNK_GENERATOR(0) },
    { "insertAdjacentText", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLElementPrototypeFunctionInsertAdjacentText), (intptr_t)2 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLElementPrototypeTable = { 8, 7, JSHTMLElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLElementPrototype::s_info = { "HTMLElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLElementPrototypeTable, 0 };

JSObject* JSHTMLElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLElement>(exec, globalObject);
}

bool JSHTMLElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLElementPrototypeTable, this, propertyName, slot);
}

bool JSHTMLElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHTMLElement::s_info = { "HTMLElement", &JSElement::s_info, &JSHTMLElementTable, 0 };

JSHTMLElement::JSHTMLElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> impl)
    : JSElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLElementPrototype(exec->globalData(), globalObject, JSHTMLElementPrototype::createStructure(exec->globalData(), JSElementPrototype::self(exec, globalObject)));
}

bool JSHTMLElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLElement, Base>(exec, &JSHTMLElementTable, this, propertyName, slot);
}

bool JSHTMLElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLElement, Base>(exec, &JSHTMLElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLElementId(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::idAttr));
    return result;
}


JSValue jsHTMLElementTitle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::titleAttr));
    return result;
}


JSValue jsHTMLElementLang(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::langAttr));
    return result;
}


JSValue jsHTMLElementDir(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::dirAttr));
    return result;
}


JSValue jsHTMLElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::classAttr));
    return result;
}


JSValue jsHTMLElementClassList(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->classList()));
    return result;
}


JSValue jsHTMLElementTabIndex(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->tabIndex());
    return result;
}


JSValue jsHTMLElementDraggable(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->draggable());
    return result;
}


JSValue jsHTMLElementHidden(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->hasAttribute(WebCore::HTMLNames::hiddenAttr));
    return result;
}


JSValue jsHTMLElementInnerHTML(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->innerHTML());
#ifdef JSC_TAINTED
    if (imp->tainted()) {
        unsigned int tainted = imp->tainted();
        result.setTainted(imp->tainted());

        TaintedStructure trace_struct;
        trace_struct.taintedno = tainted;
        trace_struct.internalfunc = "jsHTMLElementInnerHTML";
        trace_struct.jsfunc = "htmlelement.innerHTML";
        trace_struct.action = "propagate";
	trace_struct.value = TaintedUtils::UString2string(result.toString(exec));

        TaintedTrace* trace = TaintedTrace::getInstance();
        trace->addTaintedTrace(trace_struct);
    }
#endif
    return result;
}


JSValue jsHTMLElementInnerText(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->innerText());
#ifdef JSC_TAINTED
    if (imp->tainted()) {
        unsigned int tainted = imp->tainted();
        result.setTainted(imp->tainted());

        TaintedStructure trace_struct;
        trace_struct.taintedno = tainted;
        trace_struct.internalfunc = "jsHTMLElementInnerText";
        trace_struct.jsfunc = "htmlelement.innerText";
        trace_struct.action = "propagate";
	trace_struct.value = TaintedUtils::UString2string(result.toString(exec));

        TaintedTrace* trace = TaintedTrace::getInstance();
        trace->addTaintedTrace(trace_struct);
    }
#endif
    return result;
}


JSValue jsHTMLElementOuterHTML(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->outerHTML());
#ifdef JSC_TAINTED
    if (imp->tainted()) {
        unsigned int tainted = imp->tainted();
        result.setTainted(imp->tainted());

        TaintedStructure trace_struct;
        trace_struct.taintedno = tainted;
        trace_struct.internalfunc = "jsHTMLElementOuterHTML";
        trace_struct.jsfunc = "htmlelement.outerHTML";
        trace_struct.action = "propagate";
	trace_struct.value = TaintedUtils::UString2string(result.toString(exec));

        TaintedTrace* trace = TaintedTrace::getInstance();
        trace->addTaintedTrace(trace_struct);
    }
#endif
    return result;
}


JSValue jsHTMLElementOuterText(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->outerText());
#ifdef JSC_TAINTED
    if (imp->tainted()) {
        unsigned int tainted = imp->tainted();
        result.setTainted(imp->tainted());

        TaintedStructure trace_struct;
        trace_struct.taintedno = tainted;
        trace_struct.internalfunc = "jsHTMLElementOuterText";
        trace_struct.jsfunc = "htmlelement.outerText";
        trace_struct.action = "propagate";
	trace_struct.value = TaintedUtils::UString2string(result.toString(exec));

        TaintedTrace* trace = TaintedTrace::getInstance();
        trace->addTaintedTrace(trace_struct);
    }
#endif
    return result;
}


JSValue jsHTMLElementChildren(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->children()));
    return result;
}


JSValue jsHTMLElementContentEditable(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->contentEditable());
    return result;
}


JSValue jsHTMLElementIsContentEditable(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->isContentEditable());
    return result;
}


JSValue jsHTMLElementSpellcheck(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->spellcheck());
    return result;
}


JSValue jsHTMLElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLElement* domObject = static_cast<JSHTMLElement*>(asObject(slotBase));
    return JSHTMLElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLElement, Base>(exec, propertyName, value, &JSHTMLElementTable, this, slot);
}

void setJSHTMLElementId(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(thisObject);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::idAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLElementTitle(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(thisObject);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::titleAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLElementLang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(thisObject);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::langAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLElementDir(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(thisObject);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::dirAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLElementClassName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(thisObject);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::classAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLElementTabIndex(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(thisObject);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    imp->setTabIndex(value.toInt32(exec));
}


void setJSHTMLElementDraggable(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(thisObject);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    imp->setDraggable(value.toBoolean(exec));
}


void setJSHTMLElementHidden(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(thisObject);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    imp->setBooleanAttribute(WebCore::HTMLNames::hiddenAttr, value.toBoolean(exec));
}

/*
|-------------------|	  |----------------|	       |------------------------------|
| string passing in | --> | is it tainted? | --> Y --> | taint the element / document | (bad approach, need to reset the document taint)
|___________________|	  |________________|	       |______________________________| 
					   |
					   |	       |-------------------|
					   | --> Y --> | taint the element | (best approach)
						       |-------------------|
the ideal implementation is to set the element as tainted only (no need to set the doucment as tainted), and then the js can detect the element is tainted or not.
however, i found that js level detection does not work for the element now, so i tainted the document for reporting.
this method has the side effect, if the element is untatined, then we need to clear the tainted flag of the document.
*/
void setJSHTMLElementInnerHTML(ExecState* exec, JSObject* thisObject, JSValue value)
{
#ifdef JSC_TAINTED
    /*
    unsigned int tainted = 0;
    if (value.isString() && value.isTainted()) {
	tainted = value.isTainted();
    }
    if (value.inherits(&StringObject::s_info) && asStringObject(value)->isTainted()) {
	tainted = asStringObject(value)->isTainted();
    }
    if (value.isObject()) {
        UString s = value.toString(exec);
        if (s.isTainted()) {
		tainted = s.isTainted();
	}
    }
    */

    unsigned int tainted = TaintedUtils::isTainted(exec, value);
#endif
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(thisObject);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setInnerHTML(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
#ifdef JSC_TAINTED
    unsigned int imp_tainted = imp->tainted();

    if (tainted) {
// cerr 
/*
	char cid[50];
	JSValue id = jsString(exec, imp->getAttribute(WebCore::HTMLNames::idAttr));
	UString sid = id.toString(exec);
	snprintf(cid, 50, "%s", sid.utf8(true).data());
	cerr << "setJSHTMLElementInnerHTML:SETTING:" << cid << ":" << tainted << ":" << imp_tainted << endl;
*/
// cerr

	//
	// i dont know why this tainted flag cannot be queried from js level
	// seems like the HTML element is persistent, but it is not the right HTML element, so need to loop through and find out
	//
    	imp->setTainted(tainted);
	imp->document()->setTainted(tainted);

	TaintedStructure trace_struct;
	trace_struct.taintedno = tainted;
	trace_struct.internalfunc = "setJSHTMLElementInnerHTML";
	trace_struct.jsfunc = "HTMLElement.innerHTML";
	trace_struct.action = "sink";
	trace_struct.value = TaintedUtils::UString2string(value.toString(exec));

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);

    // 
    // this condition really difficult to understand. 
    // wanna to reset the innerHTML of this element if it is tainted and passing in string is not tainted.
    // there is a problem in this code, it is silly to do it, as if the imp->setTainted() is supposed to be work, then there is no need to do in this way.
    //
    } else if (imp_tainted == imp->document()->tainted() 
	&& imp_tainted != 0
	&& !tainted) {

// cerr
/*
	char cid[50];
	JSValue id = jsString(exec, imp->getAttribute(WebCore::HTMLNames::idAttr));
	UString sid = id.toString(exec);
	snprintf(cid, 50, "%s", sid.utf8(true).data());
	cerr << "setJSHTMLElementInnerHTML:RESETTING:" << cid << endl;
*/
// cerr

	TaintedStructure trace_struct;
	trace_struct.taintedno = imp_tainted;
	trace_struct.internalfunc = "setJSHTMLElementInnerHTML";
	trace_struct.jsfunc = "HTMLElement.innerHTML";
	trace_struct.action = "reset";
	trace_struct.value = TaintedUtils::UString2string(value.toString(exec));

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);

    	imp->setTainted(0);
    }
#endif
}


void setJSHTMLElementInnerText(ExecState* exec, JSObject* thisObject, JSValue value)
{
#ifdef JSC_TAINTED
    /*
    unsigned int tainted = 0;
    if (value.isString() && value.isTainted()) {
	tainted = value.isTainted();
    }
    if (value.inherits(&StringObject::s_info) && asStringObject(value)->isTainted()) {
	tainted = asStringObject(value)->isTainted();
    }
    if (value.isObject()) {
        UString s = value.toString(exec);
        if (s.isTainted()) {
		tainted = s.isTainted();
	}
    }
    */

    unsigned int tainted = TaintedUtils::isTainted(exec, value);
#endif
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(thisObject);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setInnerText(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
#ifdef JSC_TAINTED
    unsigned int imp_tainted = imp->tainted();

    if (tainted) {
    	imp->setTainted(tainted);
	imp->document()->setTainted(tainted);

	TaintedStructure trace_struct;
	trace_struct.taintedno = tainted;
	trace_struct.internalfunc = "setJSHTMLElementInnerText";
	trace_struct.jsfunc = "HTMLElement.innerText";
	trace_struct.action = "sink";
	trace_struct.value = TaintedUtils::UString2string(value.toString(exec));

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);

    } else if (imp_tainted == imp->document()->tainted() 
	&& imp_tainted != 0
	&& !tainted) {

	TaintedStructure trace_struct;
	trace_struct.taintedno = imp_tainted;
	trace_struct.internalfunc = "setJSHTMLElementInnerText";
	trace_struct.jsfunc = "HTMLElement.innerText";
	trace_struct.action = "reset";
	trace_struct.value = TaintedUtils::UString2string(value.toString(exec));

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);

    	imp->setTainted(0);
    }
#endif
}


void setJSHTMLElementOuterHTML(ExecState* exec, JSObject* thisObject, JSValue value)
{
#ifdef JSC_TAINTED
    /*
    unsigned int tainted = 0;
    if (value.isString() && value.isTainted()) {
	tainted = value.isTainted();
    }
    if (value.inherits(&StringObject::s_info) && asStringObject(value)->isTainted()) {
	tainted = asStringObject(value)->isTainted();
    }
    if (value.isObject()) {
        UString s = value.toString(exec);
        if (s.isTainted()) {
		tainted = s.isTainted();
	}
    }
    */

    unsigned int tainted = TaintedUtils::isTainted(exec, value);
#endif
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(thisObject);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setOuterHTML(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
#ifdef JSC_TAINTED
    unsigned int imp_tainted = imp->tainted();

    if (tainted) {
    	imp->setTainted(tainted);
	imp->document()->setTainted(tainted);

	TaintedStructure trace_struct;
	trace_struct.taintedno = tainted;
	trace_struct.internalfunc = "setJSHTMLElementOuterHTML";
	trace_struct.jsfunc = "HTMLElement.outerHTML";
	trace_struct.action = "sink";
	trace_struct.value = TaintedUtils::UString2string(value.toString(exec));

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);

    } else if (imp_tainted == imp->document()->tainted() 
	&& imp_tainted != 0
	&& !tainted) {

	TaintedStructure trace_struct;
	trace_struct.taintedno = imp_tainted;
	trace_struct.internalfunc = "setJSHTMLElementOuterHTML";
	trace_struct.jsfunc = "HTMLElement.outerHTML";
	trace_struct.action = "reset";
	trace_struct.value = TaintedUtils::UString2string(value.toString(exec));

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);

    	imp->setTainted(0);
    }
#endif
}


void setJSHTMLElementOuterText(ExecState* exec, JSObject* thisObject, JSValue value)
{
#ifdef JSC_TAINTED
    /*
    unsigned int tainted = 0;
    if (value.isString() && value.isTainted()) {
	tainted = value.isTainted();
    }
    if (value.inherits(&StringObject::s_info) && asStringObject(value)->isTainted()) {
	tainted = asStringObject(value)->isTainted();
    }
    if (value.isObject()) {
        UString s = value.toString(exec);
        if (s.isTainted()) {
		tainted = s.isTainted();
	}
    }
    */

    unsigned int tainted = TaintedUtils::isTainted(exec, value);
#endif
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(thisObject);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setOuterText(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
#ifdef JSC_TAINTED
    unsigned int imp_tainted = imp->tainted();

    if (tainted) {
    	imp->setTainted(tainted);
	imp->document()->setTainted(tainted);

	TaintedStructure trace_struct;
	trace_struct.taintedno = tainted;
	trace_struct.internalfunc = "setJSHTMLElementOuterText";
	trace_struct.jsfunc = "HTMLElement.outerText";
	trace_struct.action = "sink";
	trace_struct.value = TaintedUtils::UString2string(value.toString(exec));

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);

    } else if (imp_tainted == imp->document()->tainted() 
	&& imp_tainted != 0
	&& !tainted) {

	TaintedStructure trace_struct;
	trace_struct.taintedno = tainted;
	trace_struct.internalfunc = "setJSHTMLElementOuterText";
	trace_struct.jsfunc = "HTMLElement.outerText";
	trace_struct.action = "reset";
	trace_struct.value = TaintedUtils::UString2string(value.toString(exec));

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);

    	imp->setTainted(0);
    }
#endif
}


void setJSHTMLElementContentEditable(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(thisObject);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setContentEditable(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}


void setJSHTMLElementSpellcheck(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(thisObject);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    imp->setSpellcheck(value.toBoolean(exec));
}


JSValue JSHTMLElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLElementPrototypeFunctionInsertAdjacentElement(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(thisValue));
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& where(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    Element* element(toElement(exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->insertAdjacentElement(where, element, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsHTMLElementPrototypeFunctionInsertAdjacentHTML(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(thisValue));
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& where(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& html(ustringToString(exec->argument(1).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->insertAdjacentHTML(where, html, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHTMLElementPrototypeFunctionInsertAdjacentText(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLElement* castedThis = static_cast<JSHTMLElement*>(asObject(thisValue));
    HTMLElement* imp = static_cast<HTMLElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& where(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& text(ustringToString(exec->argument(1).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->insertAdjacentText(where, text, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

HTMLElement* toHTMLElement(JSC::JSValue value)
{
    return value.inherits(&JSHTMLElement::s_info) ? static_cast<JSHTMLElement*>(asObject(value))->impl() : 0;
}

}
