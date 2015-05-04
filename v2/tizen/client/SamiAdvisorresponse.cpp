
#include "SamiAdvisorresponse.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAdvisorresponse::SamiAdvisorresponse() {
    init();
}

SamiAdvisorresponse::~SamiAdvisorresponse() {
    this->cleanup();
}

void
SamiAdvisorresponse::init() {
    pAdvisor = null;
    
}

void
SamiAdvisorresponse::cleanup() {
    if(pAdvisor != null) {
        
        delete pAdvisor;
        pAdvisor = null;
    }
    
}


SamiAdvisorresponse*
SamiAdvisorresponse::fromJson(String* json) {
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
SamiAdvisorresponse::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAdvisorKey = new JsonString(L"advisor");
        IJsonValue* pAdvisorVal = null;
        pJsonObject->GetValue(pAdvisorKey, pAdvisorVal);
        if(pAdvisorVal != null) {
            
            pAdvisor = new SamiAdvisor();
            jsonToValue(pAdvisor, pAdvisorVal, L"SamiAdvisor", L"SamiAdvisor");
        }
        delete pAdvisorKey;
        
    }
}

SamiAdvisorresponse::SamiAdvisorresponse(String* json) {
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
SamiAdvisorresponse::asJson ()
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
SamiAdvisorresponse::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pAdvisorKey = new JsonString(L"advisor");
    pJsonObject->Add(pAdvisorKey, toJson(getPAdvisor(), "SamiAdvisor", ""));

    
    return pJsonObject;
}

SamiAdvisor*
SamiAdvisorresponse::getPAdvisor() {
    return pAdvisor;
}
void
SamiAdvisorresponse::setPAdvisor(SamiAdvisor* pAdvisor) {
    this->pAdvisor = pAdvisor;
}



} /* namespace Swagger */

