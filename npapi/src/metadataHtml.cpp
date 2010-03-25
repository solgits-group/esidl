/*
 * Copyright 2008-2010 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "esnpapi.h"
#include "proxyImpl.h"

#include <any.h>
#include <reflect.h>
#include <org/w3c/dom.h>

using namespace org::w3c::dom;

void initializeHtmlMetaData()
{
    registerMetaData(html::ApplicationCache::getMetaData(), Proxy_Impl<ProxyObject, html::ApplicationCache_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::BarProp::getMetaData(), Proxy_Impl<ProxyObject, html::BarProp_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::BeforeUnloadEvent::getMetaData(), Proxy_Impl<ProxyObject, html::BeforeUnloadEvent_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::CanvasGradient::getMetaData(), Proxy_Impl<ProxyObject, html::CanvasGradient_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::CanvasPattern::getMetaData(), Proxy_Impl<ProxyObject, html::CanvasPattern_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::CanvasPixelArray::getMetaData(), Proxy_Impl<ProxyObject, html::CanvasPixelArray_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::CanvasRenderingContext2D::getMetaData(), Proxy_Impl<ProxyObject, html::CanvasRenderingContext2D_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::DataTransfer::getMetaData(), Proxy_Impl<ProxyObject, html::DataTransfer_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::DOMSettableTokenList::getMetaData(), Proxy_Impl<ProxyObject, html::DOMSettableTokenList_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::DOMStringMap::getMetaData(), Proxy_Impl<ProxyObject, html::DOMStringMap_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::DOMTokenList::getMetaData(), Proxy_Impl<ProxyObject, html::DOMTokenList_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::DragEvent::getMetaData(), Proxy_Impl<ProxyObject, html::DragEvent_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::Function::getMetaData(), Proxy_Impl<ProxyObject, html::Function_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::History::getMetaData(), Proxy_Impl<ProxyObject, html::History_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::ImageData::getMetaData(), Proxy_Impl<ProxyObject, html::ImageData_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::Location::getMetaData(), Proxy_Impl<ProxyObject, html::Location_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::MediaError::getMetaData(), Proxy_Impl<ProxyObject, html::MediaError_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::MessageChannel::getMetaData(), Proxy_Impl<ProxyObject, html::MessageChannel_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::MessageEvent::getMetaData(), Proxy_Impl<ProxyObject, html::MessageEvent_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::MessagePort::getMetaData(), Proxy_Impl<ProxyObject, html::MessagePort_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::Navigator::getMetaData(), Proxy_Impl<ProxyObject, html::Navigator_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::PopStateEvent::getMetaData(), Proxy_Impl<ProxyObject, html::PopStateEvent_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::PropertyNodeList::getMetaData(), Proxy_Impl<ProxyObject, html::PropertyNodeList_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::RadioNodeList::getMetaData(), Proxy_Impl<ProxyObject, html::RadioNodeList_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::Screen::getMetaData(), Proxy_Impl<ProxyObject, html::Screen_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::Selection::getMetaData(), Proxy_Impl<ProxyObject, html::Selection_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::StyleMedia::getMetaData(), Proxy_Impl<ProxyObject, html::StyleMedia_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::TextMetrics::getMetaData(), Proxy_Impl<ProxyObject, html::TextMetrics_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::TimeRanges::getMetaData(), Proxy_Impl<ProxyObject, html::TimeRanges_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::UndoManagerEvent::getMetaData(), Proxy_Impl<ProxyObject, html::UndoManagerEvent_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::UndoManager::getMetaData(), Proxy_Impl<ProxyObject, html::UndoManager_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::ValidityState::getMetaData(), Proxy_Impl<ProxyObject, html::ValidityState_Bridge<Any, invoke> >::createInstance);
    registerMetaData(html::Window::getMetaData(), Proxy_Impl<ProxyObject, html::Window_Bridge<Any, invoke> >::createInstance);

    initializeHtmlMetaDataA_G();
    initializeHtmlMetaDataH_N();
    initializeHtmlMetaDataO_U();
    initializeHtmlMetaDataV_Z();

    // In HTML5, HTMLDocument is a mixin of Document, but historically it was a separate interface extended from Document.
    // Existing browsers uses HTMLDocument as a class name, and we need to register 'HTMLDocument' as a valid interface name for Document.
    registerMetaData(Document::getMetaData(),
                     Proxy_Impl<ProxyObject, Document_Bridge<Any, invoke> >::createInstance,
                     "HTMLDocument");

    // WebKit uses "DOMWindow" instead of "Window"
    registerMetaData(html::Window::getMetaData(),
                     Proxy_Impl<ProxyObject, html::Window_Bridge<Any, invoke> >::createInstance,
                     "DOMWindow");
}