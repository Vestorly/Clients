
#include "SamiAdvsior.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAdvsior::SamiAdvsior() {
    init();
}

SamiAdvsior::~SamiAdvsior() {
    this->cleanup();
}

void
SamiAdvsior::init() {
    p_id = null;
    pVestorlyauth = null;
    pNew_user = null;
    
}

void
SamiAdvsior::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pVestorlyauth != null) {
        
        delete pVestorlyauth;
        pVestorlyauth = null;
    }
    if(pNew_user != null) {
        
        delete pNew_user;
        pNew_user = null;
    }
    
}


SamiAdvsior*
SamiAdvsior::fromJson(String* json) {
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
SamiAdvsior::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* p_idKey = new JsonString(L"_id");
        IJsonValue* p_idVal = null;
        pJsonObject->GetValue(p_idKey, p_idVal);
        if(p_idVal != null) {
            
            p_id = new String();
            jsonToValue(p_id, p_idVal, L"String", L"String");
        }
        delete p_idKey;
        JsonString* pVestorlyauthKey = new JsonString(L"vestorly-auth");
        IJsonValue* pVestorlyauthVal = null;
        pJsonObject->GetValue(pVestorlyauthKey, pVestorlyauthVal);
        if(pVestorlyauthVal != null) {
            
            pVestorlyauth = new String();
            jsonToValue(pVestorlyauth, pVestorlyauthVal, L"String", L"String");
        }
        delete pVestorlyauthKey;
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

SamiAdvsior::SamiAdvsior(String* json) {
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
SamiAdvsior::asJson ()
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
SamiAdvsior::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pVestorlyauthKey = new JsonString(L"vestorly-auth");
    pJsonObject->Add(pVestorlyauthKey, toJson(getPVestorlyauth(), "String", ""));

    
    JsonString *pNew_userKey = new JsonString(L"new_user");
    pJsonObject->Add(pNew_userKey, toJson(getPNewUser(), "Boolean", ""));

    
    return pJsonObject;
}

String*
SamiAdvsior::getPId() {
    return p_id;
}
void
SamiAdvsior::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiAdvsior::getPVestorlyauth() {
    return pVestorlyauth;
}
void
SamiAdvsior::setPVestorlyauth(String* pVestorlyauth) {
    this->pVestorlyauth = pVestorlyauth;
}

Boolean*
SamiAdvsior::getPNewUser() {
    return pNew_user;
}
void
SamiAdvsior::setPNewUser(Boolean* pNew_user) {
    this->pNew_user = pNew_user;
}



} /* namespace Swagger */

