
#include "SamiEventInput.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiEventInput::SamiEventInput() {
    init();
}

SamiEventInput::~SamiEventInput() {
    this->cleanup();
}

void
SamiEventInput::init() {
    pReferrer = null;
    pOriginal_url = null;
    pOriginator_email = null;
    pSubject_email = null;
    pAdvisor_email = null;
    pOriginator_group_name = null;
    pNewsletter = null;
    
}

void
SamiEventInput::cleanup() {
    if(pReferrer != null) {
        
        delete pReferrer;
        pReferrer = null;
    }
    if(pOriginal_url != null) {
        
        delete pOriginal_url;
        pOriginal_url = null;
    }
    if(pOriginator_email != null) {
        
        delete pOriginator_email;
        pOriginator_email = null;
    }
    if(pSubject_email != null) {
        
        delete pSubject_email;
        pSubject_email = null;
    }
    if(pAdvisor_email != null) {
        
        delete pAdvisor_email;
        pAdvisor_email = null;
    }
    if(pOriginator_group_name != null) {
        
        delete pOriginator_group_name;
        pOriginator_group_name = null;
    }
    if(pNewsletter != null) {
        
        delete pNewsletter;
        pNewsletter = null;
    }
    
}


SamiEventInput*
SamiEventInput::fromJson(String* json) {
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
SamiEventInput::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pReferrerKey = new JsonString(L"referrer");
        IJsonValue* pReferrerVal = null;
        pJsonObject->GetValue(pReferrerKey, pReferrerVal);
        if(pReferrerVal != null) {
            
            pReferrer = new String();
            jsonToValue(pReferrer, pReferrerVal, L"String", L"String");
        }
        delete pReferrerKey;
        JsonString* pOriginal_urlKey = new JsonString(L"original_url");
        IJsonValue* pOriginal_urlVal = null;
        pJsonObject->GetValue(pOriginal_urlKey, pOriginal_urlVal);
        if(pOriginal_urlVal != null) {
            
            pOriginal_url = new String();
            jsonToValue(pOriginal_url, pOriginal_urlVal, L"String", L"String");
        }
        delete pOriginal_urlKey;
        JsonString* pOriginator_emailKey = new JsonString(L"originator_email");
        IJsonValue* pOriginator_emailVal = null;
        pJsonObject->GetValue(pOriginator_emailKey, pOriginator_emailVal);
        if(pOriginator_emailVal != null) {
            
            pOriginator_email = new String();
            jsonToValue(pOriginator_email, pOriginator_emailVal, L"String", L"String");
        }
        delete pOriginator_emailKey;
        JsonString* pSubject_emailKey = new JsonString(L"subject_email");
        IJsonValue* pSubject_emailVal = null;
        pJsonObject->GetValue(pSubject_emailKey, pSubject_emailVal);
        if(pSubject_emailVal != null) {
            
            pSubject_email = new String();
            jsonToValue(pSubject_email, pSubject_emailVal, L"String", L"String");
        }
        delete pSubject_emailKey;
        JsonString* pAdvisor_emailKey = new JsonString(L"advisor_email");
        IJsonValue* pAdvisor_emailVal = null;
        pJsonObject->GetValue(pAdvisor_emailKey, pAdvisor_emailVal);
        if(pAdvisor_emailVal != null) {
            
            pAdvisor_email = new String();
            jsonToValue(pAdvisor_email, pAdvisor_emailVal, L"String", L"String");
        }
        delete pAdvisor_emailKey;
        JsonString* pOriginator_group_nameKey = new JsonString(L"originator_group_name");
        IJsonValue* pOriginator_group_nameVal = null;
        pJsonObject->GetValue(pOriginator_group_nameKey, pOriginator_group_nameVal);
        if(pOriginator_group_nameVal != null) {
            
            pOriginator_group_name = new String();
            jsonToValue(pOriginator_group_name, pOriginator_group_nameVal, L"String", L"String");
        }
        delete pOriginator_group_nameKey;
        JsonString* pNewsletterKey = new JsonString(L"newsletter");
        IJsonValue* pNewsletterVal = null;
        pJsonObject->GetValue(pNewsletterKey, pNewsletterVal);
        if(pNewsletterVal != null) {
            
            pNewsletter = new String();
            jsonToValue(pNewsletter, pNewsletterVal, L"String", L"String");
        }
        delete pNewsletterKey;
        
    }
}

SamiEventInput::SamiEventInput(String* json) {
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
SamiEventInput::asJson ()
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
SamiEventInput::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pReferrerKey = new JsonString(L"referrer");
    pJsonObject->Add(pReferrerKey, toJson(getPReferrer(), "String", ""));

    
    JsonString *pOriginal_urlKey = new JsonString(L"original_url");
    pJsonObject->Add(pOriginal_urlKey, toJson(getPOriginalUrl(), "String", ""));

    
    JsonString *pOriginator_emailKey = new JsonString(L"originator_email");
    pJsonObject->Add(pOriginator_emailKey, toJson(getPOriginatorEmail(), "String", ""));

    
    JsonString *pSubject_emailKey = new JsonString(L"subject_email");
    pJsonObject->Add(pSubject_emailKey, toJson(getPSubjectEmail(), "String", ""));

    
    JsonString *pAdvisor_emailKey = new JsonString(L"advisor_email");
    pJsonObject->Add(pAdvisor_emailKey, toJson(getPAdvisorEmail(), "String", ""));

    
    JsonString *pOriginator_group_nameKey = new JsonString(L"originator_group_name");
    pJsonObject->Add(pOriginator_group_nameKey, toJson(getPOriginatorGroupName(), "String", ""));

    
    JsonString *pNewsletterKey = new JsonString(L"newsletter");
    pJsonObject->Add(pNewsletterKey, toJson(getPNewsletter(), "String", ""));

    
    return pJsonObject;
}

String*
SamiEventInput::getPReferrer() {
    return pReferrer;
}
void
SamiEventInput::setPReferrer(String* pReferrer) {
    this->pReferrer = pReferrer;
}

String*
SamiEventInput::getPOriginalUrl() {
    return pOriginal_url;
}
void
SamiEventInput::setPOriginalUrl(String* pOriginal_url) {
    this->pOriginal_url = pOriginal_url;
}

String*
SamiEventInput::getPOriginatorEmail() {
    return pOriginator_email;
}
void
SamiEventInput::setPOriginatorEmail(String* pOriginator_email) {
    this->pOriginator_email = pOriginator_email;
}

String*
SamiEventInput::getPSubjectEmail() {
    return pSubject_email;
}
void
SamiEventInput::setPSubjectEmail(String* pSubject_email) {
    this->pSubject_email = pSubject_email;
}

String*
SamiEventInput::getPAdvisorEmail() {
    return pAdvisor_email;
}
void
SamiEventInput::setPAdvisorEmail(String* pAdvisor_email) {
    this->pAdvisor_email = pAdvisor_email;
}

String*
SamiEventInput::getPOriginatorGroupName() {
    return pOriginator_group_name;
}
void
SamiEventInput::setPOriginatorGroupName(String* pOriginator_group_name) {
    this->pOriginator_group_name = pOriginator_group_name;
}

String*
SamiEventInput::getPNewsletter() {
    return pNewsletter;
}
void
SamiEventInput::setPNewsletter(String* pNewsletter) {
    this->pNewsletter = pNewsletter;
}



} /* namespace Swagger */

