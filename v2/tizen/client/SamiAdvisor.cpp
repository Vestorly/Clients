
#include "SamiAdvisor.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAdvisor::SamiAdvisor() {
    init();
}

SamiAdvisor::~SamiAdvisor() {
    this->cleanup();
}

void
SamiAdvisor::init() {
    pNew_user = null;
    
}

void
SamiAdvisor::cleanup() {
    if(pNew_user != null) {
        
        delete pNew_user;
        pNew_user = null;
    }
    
}


SamiAdvisor*
SamiAdvisor::fromJson(String* json) {
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
SamiAdvisor::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pNew_userKey = new JsonString(L"new_user");
        IJsonValue* pNew_userVal = null;
        pJsonObject->GetValue(pNew_userKey, pNew_userVal);
        if(pNew_userVal != null) {
            
            pNew_user = new Boolean(false);
            jsonToValue(pNew_user, pNew_userVal, L"Boolean", L"Boolean");
        }
        delete pNew_userKey;
        
    }
}

SamiAdvisor::SamiAdvisor(String* json) {
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
SamiAdvisor::asJson ()
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
SamiAdvisor::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pNew_userKey = new JsonString(L"new_user");
    pJsonObject->Add(pNew_userKey, toJson(getPNewUser(), "Boolean", ""));

    
    return pJsonObject;
}

Boolean*
SamiAdvisor::getPNewUser() {
    return pNew_user;
}
void
SamiAdvisor::setPNewUser(Boolean* pNew_user) {
    this->pNew_user = pNew_user;
}



} /* namespace Swagger */

