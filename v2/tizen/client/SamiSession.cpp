
#include "SamiSession.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSession::SamiSession() {
    init();
}

SamiSession::~SamiSession() {
    this->cleanup();
}

void
SamiSession::init() {
    p_id = null;
    pVestorlyauth = null;
    pNew_user = null;
    pCurrent_user = null;
    pSettings = null;
    
}

void
SamiSession::cleanup() {
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
    if(pCurrent_user != null) {
        
        delete pCurrent_user;
        pCurrent_user = null;
    }
    if(pSettings != null) {
        
        delete pSettings;
        pSettings = null;
    }
    
}


SamiSession*
SamiSession::fromJson(String* json) {
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
SamiSession::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pCurrent_userKey = new JsonString(L"current_user");
        IJsonValue* pCurrent_userVal = null;
        pJsonObject->GetValue(pCurrent_userKey, pCurrent_userVal);
        if(pCurrent_userVal != null) {
            
            pCurrent_user = new SamiUser();
            jsonToValue(pCurrent_user, pCurrent_userVal, L"SamiUser", L"SamiUser");
        }
        delete pCurrent_userKey;
        JsonString* pSettingsKey = new JsonString(L"settings");
        IJsonValue* pSettingsVal = null;
        pJsonObject->GetValue(pSettingsKey, pSettingsVal);
        if(pSettingsVal != null) {
            
            pSettings = new SamiSettings();
            jsonToValue(pSettings, pSettingsVal, L"SamiSettings", L"SamiSettings");
        }
        delete pSettingsKey;
        
    }
}

SamiSession::SamiSession(String* json) {
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
SamiSession::asJson ()
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
SamiSession::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pVestorlyauthKey = new JsonString(L"vestorly-auth");
    pJsonObject->Add(pVestorlyauthKey, toJson(getPVestorlyauth(), "String", ""));

    
    JsonString *pNew_userKey = new JsonString(L"new_user");
    pJsonObject->Add(pNew_userKey, toJson(getPNewUser(), "Boolean", ""));

    
    JsonString *pCurrent_userKey = new JsonString(L"current_user");
    pJsonObject->Add(pCurrent_userKey, toJson(getPCurrentUser(), "SamiUser", ""));

    
    JsonString *pSettingsKey = new JsonString(L"settings");
    pJsonObject->Add(pSettingsKey, toJson(getPSettings(), "SamiSettings", ""));

    
    return pJsonObject;
}

String*
SamiSession::getPId() {
    return p_id;
}
void
SamiSession::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiSession::getPVestorlyauth() {
    return pVestorlyauth;
}
void
SamiSession::setPVestorlyauth(String* pVestorlyauth) {
    this->pVestorlyauth = pVestorlyauth;
}

Boolean*
SamiSession::getPNewUser() {
    return pNew_user;
}
void
SamiSession::setPNewUser(Boolean* pNew_user) {
    this->pNew_user = pNew_user;
}

SamiUser*
SamiSession::getPCurrentUser() {
    return pCurrent_user;
}
void
SamiSession::setPCurrentUser(SamiUser* pCurrent_user) {
    this->pCurrent_user = pCurrent_user;
}

SamiSettings*
SamiSession::getPSettings() {
    return pSettings;
}
void
SamiSession::setPSettings(SamiSettings* pSettings) {
    this->pSettings = pSettings;
}



} /* namespace Swagger */

