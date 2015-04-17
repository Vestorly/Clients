
#include "SamiEvents.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiEvents::SamiEvents() {
    init();
}

SamiEvents::~SamiEvents() {
    this->cleanup();
}

void
SamiEvents::init() {
    pEvents = null;
    
}

void
SamiEvents::cleanup() {
    if(pEvents != null) {
        pEvents->RemoveAll(true);
        delete pEvents;
        pEvents = null;
    }
    
}


SamiEvents*
SamiEvents::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiEvents::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pEventsKey = new JsonString(L"events");
        IJsonValue* pEventsVal = null;
        pJsonObject->GetValue(pEventsKey, pEventsVal);
        if(pEventsVal != null) {
            pEvents = new ArrayList();
            
            jsonToValue(pEvents, pEventsVal, L"IList", L"SamiEvent");
        }
        delete pEventsKey;
        
    }
}

SamiEvents::SamiEvents(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiEvents::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiEvents::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pEventsKey = new JsonString(L"events");
    pJsonObject->Add(pEventsKey, toJson(getPEvents(), "SamiEvent", "array"));

    
    return pJsonObject;
}

IList*
SamiEvents::getPEvents() {
    return pEvents;
}
void
SamiEvents::setPEvents(IList* pEvents) {
    this->pEvents = pEvents;
}



} /* namespace Swagger */

