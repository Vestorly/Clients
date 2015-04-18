
#include "SamiNewsletterSettings.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNewsletterSettings::SamiNewsletterSettings() {
    init();
}

SamiNewsletterSettings::~SamiNewsletterSettings() {
    this->cleanup();
}

void
SamiNewsletterSettings::init() {
    p_id = null;
    pEmail_status = null;
    pTwitter_status = null;
    pLinkedin_status = null;
    pEmail_hour = null;
    pTwitter_hour = null;
    pLinkedin_hour = null;
    pFacebook_hour = null;
    
}

void
SamiNewsletterSettings::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pEmail_status != null) {
        
        delete pEmail_status;
        pEmail_status = null;
    }
    if(pTwitter_status != null) {
        
        delete pTwitter_status;
        pTwitter_status = null;
    }
    if(pLinkedin_status != null) {
        
        delete pLinkedin_status;
        pLinkedin_status = null;
    }
    if(pEmail_hour != null) {
        
        delete pEmail_hour;
        pEmail_hour = null;
    }
    if(pTwitter_hour != null) {
        
        delete pTwitter_hour;
        pTwitter_hour = null;
    }
    if(pLinkedin_hour != null) {
        
        delete pLinkedin_hour;
        pLinkedin_hour = null;
    }
    if(pFacebook_hour != null) {
        
        delete pFacebook_hour;
        pFacebook_hour = null;
    }
    
}


SamiNewsletterSettings*
SamiNewsletterSettings::fromJson(String* json) {
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
SamiNewsletterSettings::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pEmail_statusKey = new JsonString(L"email_status");
        IJsonValue* pEmail_statusVal = null;
        pJsonObject->GetValue(pEmail_statusKey, pEmail_statusVal);
        if(pEmail_statusVal != null) {
            
            pEmail_status = new String();
            jsonToValue(pEmail_status, pEmail_statusVal, L"String", L"String");
        }
        delete pEmail_statusKey;
        JsonString* pTwitter_statusKey = new JsonString(L"twitter_status");
        IJsonValue* pTwitter_statusVal = null;
        pJsonObject->GetValue(pTwitter_statusKey, pTwitter_statusVal);
        if(pTwitter_statusVal != null) {
            
            pTwitter_status = new String();
            jsonToValue(pTwitter_status, pTwitter_statusVal, L"String", L"String");
        }
        delete pTwitter_statusKey;
        JsonString* pLinkedin_statusKey = new JsonString(L"linkedin_status");
        IJsonValue* pLinkedin_statusVal = null;
        pJsonObject->GetValue(pLinkedin_statusKey, pLinkedin_statusVal);
        if(pLinkedin_statusVal != null) {
            
            pLinkedin_status = new String();
            jsonToValue(pLinkedin_status, pLinkedin_statusVal, L"String", L"String");
        }
        delete pLinkedin_statusKey;
        JsonString* pEmail_hourKey = new JsonString(L"email_hour");
        IJsonValue* pEmail_hourVal = null;
        pJsonObject->GetValue(pEmail_hourKey, pEmail_hourVal);
        if(pEmail_hourVal != null) {
            
            pEmail_hour = new Integer();
            jsonToValue(pEmail_hour, pEmail_hourVal, L"Integer", L"Integer");
        }
        delete pEmail_hourKey;
        JsonString* pTwitter_hourKey = new JsonString(L"twitter_hour");
        IJsonValue* pTwitter_hourVal = null;
        pJsonObject->GetValue(pTwitter_hourKey, pTwitter_hourVal);
        if(pTwitter_hourVal != null) {
            
            pTwitter_hour = new Integer();
            jsonToValue(pTwitter_hour, pTwitter_hourVal, L"Integer", L"Integer");
        }
        delete pTwitter_hourKey;
        JsonString* pLinkedin_hourKey = new JsonString(L"linkedin_hour");
        IJsonValue* pLinkedin_hourVal = null;
        pJsonObject->GetValue(pLinkedin_hourKey, pLinkedin_hourVal);
        if(pLinkedin_hourVal != null) {
            
            pLinkedin_hour = new Integer();
            jsonToValue(pLinkedin_hour, pLinkedin_hourVal, L"Integer", L"Integer");
        }
        delete pLinkedin_hourKey;
        JsonString* pFacebook_hourKey = new JsonString(L"facebook_hour");
        IJsonValue* pFacebook_hourVal = null;
        pJsonObject->GetValue(pFacebook_hourKey, pFacebook_hourVal);
        if(pFacebook_hourVal != null) {
            
            pFacebook_hour = new Integer();
            jsonToValue(pFacebook_hour, pFacebook_hourVal, L"Integer", L"Integer");
        }
        delete pFacebook_hourKey;
        
    }
}

SamiNewsletterSettings::SamiNewsletterSettings(String* json) {
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
SamiNewsletterSettings::asJson ()
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
SamiNewsletterSettings::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pEmail_statusKey = new JsonString(L"email_status");
    pJsonObject->Add(pEmail_statusKey, toJson(getPEmailStatus(), "String", ""));

    
    JsonString *pTwitter_statusKey = new JsonString(L"twitter_status");
    pJsonObject->Add(pTwitter_statusKey, toJson(getPTwitterStatus(), "String", ""));

    
    JsonString *pLinkedin_statusKey = new JsonString(L"linkedin_status");
    pJsonObject->Add(pLinkedin_statusKey, toJson(getPLinkedinStatus(), "String", ""));

    
    JsonString *pEmail_hourKey = new JsonString(L"email_hour");
    pJsonObject->Add(pEmail_hourKey, toJson(getPEmailHour(), "Integer", ""));

    
    JsonString *pTwitter_hourKey = new JsonString(L"twitter_hour");
    pJsonObject->Add(pTwitter_hourKey, toJson(getPTwitterHour(), "Integer", ""));

    
    JsonString *pLinkedin_hourKey = new JsonString(L"linkedin_hour");
    pJsonObject->Add(pLinkedin_hourKey, toJson(getPLinkedinHour(), "Integer", ""));

    
    JsonString *pFacebook_hourKey = new JsonString(L"facebook_hour");
    pJsonObject->Add(pFacebook_hourKey, toJson(getPFacebookHour(), "Integer", ""));

    
    return pJsonObject;
}

String*
SamiNewsletterSettings::getPId() {
    return p_id;
}
void
SamiNewsletterSettings::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiNewsletterSettings::getPEmailStatus() {
    return pEmail_status;
}
void
SamiNewsletterSettings::setPEmailStatus(String* pEmail_status) {
    this->pEmail_status = pEmail_status;
}

String*
SamiNewsletterSettings::getPTwitterStatus() {
    return pTwitter_status;
}
void
SamiNewsletterSettings::setPTwitterStatus(String* pTwitter_status) {
    this->pTwitter_status = pTwitter_status;
}

String*
SamiNewsletterSettings::getPLinkedinStatus() {
    return pLinkedin_status;
}
void
SamiNewsletterSettings::setPLinkedinStatus(String* pLinkedin_status) {
    this->pLinkedin_status = pLinkedin_status;
}

Integer*
SamiNewsletterSettings::getPEmailHour() {
    return pEmail_hour;
}
void
SamiNewsletterSettings::setPEmailHour(Integer* pEmail_hour) {
    this->pEmail_hour = pEmail_hour;
}

Integer*
SamiNewsletterSettings::getPTwitterHour() {
    return pTwitter_hour;
}
void
SamiNewsletterSettings::setPTwitterHour(Integer* pTwitter_hour) {
    this->pTwitter_hour = pTwitter_hour;
}

Integer*
SamiNewsletterSettings::getPLinkedinHour() {
    return pLinkedin_hour;
}
void
SamiNewsletterSettings::setPLinkedinHour(Integer* pLinkedin_hour) {
    this->pLinkedin_hour = pLinkedin_hour;
}

Integer*
SamiNewsletterSettings::getPFacebookHour() {
    return pFacebook_hour;
}
void
SamiNewsletterSettings::setPFacebookHour(Integer* pFacebook_hour) {
    this->pFacebook_hour = pFacebook_hour;
}



} /* namespace Swagger */

