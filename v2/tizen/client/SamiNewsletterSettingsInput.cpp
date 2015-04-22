
#include "SamiNewsletterSettingsInput.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNewsletterSettingsInput::SamiNewsletterSettingsInput() {
    init();
}

SamiNewsletterSettingsInput::~SamiNewsletterSettingsInput() {
    this->cleanup();
}

void
SamiNewsletterSettingsInput::init() {
    pEmail_status = null;
    pTwitter_status = null;
    pLinkedin_status = null;
    
}

void
SamiNewsletterSettingsInput::cleanup() {
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
    
}


SamiNewsletterSettingsInput*
SamiNewsletterSettingsInput::fromJson(String* json) {
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
SamiNewsletterSettingsInput::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
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
        
    }
}

SamiNewsletterSettingsInput::SamiNewsletterSettingsInput(String* json) {
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
SamiNewsletterSettingsInput::asJson ()
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
SamiNewsletterSettingsInput::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pEmail_statusKey = new JsonString(L"email_status");
    pJsonObject->Add(pEmail_statusKey, toJson(getPEmailStatus(), "String", ""));

    
    JsonString *pTwitter_statusKey = new JsonString(L"twitter_status");
    pJsonObject->Add(pTwitter_statusKey, toJson(getPTwitterStatus(), "String", ""));

    
    JsonString *pLinkedin_statusKey = new JsonString(L"linkedin_status");
    pJsonObject->Add(pLinkedin_statusKey, toJson(getPLinkedinStatus(), "String", ""));

    
    return pJsonObject;
}

String*
SamiNewsletterSettingsInput::getPEmailStatus() {
    return pEmail_status;
}
void
SamiNewsletterSettingsInput::setPEmailStatus(String* pEmail_status) {
    this->pEmail_status = pEmail_status;
}

String*
SamiNewsletterSettingsInput::getPTwitterStatus() {
    return pTwitter_status;
}
void
SamiNewsletterSettingsInput::setPTwitterStatus(String* pTwitter_status) {
    this->pTwitter_status = pTwitter_status;
}

String*
SamiNewsletterSettingsInput::getPLinkedinStatus() {
    return pLinkedin_status;
}
void
SamiNewsletterSettingsInput::setPLinkedinStatus(String* pLinkedin_status) {
    this->pLinkedin_status = pLinkedin_status;
}



} /* namespace Swagger */

