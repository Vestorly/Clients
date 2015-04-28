
#include "SamiEventresponse.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiEventresponse::SamiEventresponse() {
    init();
}

SamiEventresponse::~SamiEventresponse() {
    this->cleanup();
}

void
SamiEventresponse::init() {
    pEvent = null;
    
}

void
SamiEventresponse::cleanup() {
    if(pEvent != null) {
        
        delete pEvent;
        pEvent = null;
    }
    
}


SamiEventresponse*
SamiEventresponse::fromJson(String* json) {
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
SamiEventresponse::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pEventKey = new JsonString(L"event");
        IJsonValue* pEventVal = null;
        pJsonObject->GetValue(pEventKey, pEventVal);
        if(pEventVal != null) {
            
            pEvent = new SamiEvent();
            jsonToValue(pEvent, pEventVal, L"SamiEvent", L"SamiEvent");
        }
        delete pEventKey;
        
    }
}

SamiEventresponse::SamiEventresponse(String* json) {
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
SamiEventresponse::asJson ()
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
SamiEventresponse::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pEventKey = new JsonString(L"event");
    pJsonObject->Add(pEventKey, toJson(getPEvent(), "SamiEvent", ""));

    
    return pJsonObject;
}

SamiEvent*
SamiEventresponse::getPEvent() {
    return pEvent;
}
void
SamiEventresponse::setPEvent(SamiEvent* pEvent) {
    this->pEvent = pEvent;
}



} /* namespace Swagger */

