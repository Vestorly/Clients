
#include "SamiAdvisors.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAdvisors::SamiAdvisors() {
    init();
}

SamiAdvisors::~SamiAdvisors() {
    this->cleanup();
}

void
SamiAdvisors::init() {
    pAdvisors = null;
    
}

void
SamiAdvisors::cleanup() {
    if(pAdvisors != null) {
        pAdvisors->RemoveAll(true);
        delete pAdvisors;
        pAdvisors = null;
    }
    
}


SamiAdvisors*
SamiAdvisors::fromJson(String* json) {
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
SamiAdvisors::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAdvisorsKey = new JsonString(L"advisors");
        IJsonValue* pAdvisorsVal = null;
        pJsonObject->GetValue(pAdvisorsKey, pAdvisorsVal);
        if(pAdvisorsVal != null) {
            pAdvisors = new ArrayList();
            
            jsonToValue(pAdvisors, pAdvisorsVal, L"IList", L"SamiAdvisor");
        }
        delete pAdvisorsKey;
        
    }
}

SamiAdvisors::SamiAdvisors(String* json) {
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
SamiAdvisors::asJson ()
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
SamiAdvisors::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pAdvisorsKey = new JsonString(L"advisors");
    pJsonObject->Add(pAdvisorsKey, toJson(getPAdvisors(), "SamiAdvisor", "array"));

    
    return pJsonObject;
}

IList*
SamiAdvisors::getPAdvisors() {
    return pAdvisors;
}
void
SamiAdvisors::setPAdvisors(IList* pAdvisors) {
    this->pAdvisors = pAdvisors;
}



} /* namespace Swagger */

