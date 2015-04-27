
#include "SamiOrgSetting.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiOrgSetting::SamiOrgSetting() {
    init();
}

SamiOrgSetting::~SamiOrgSetting() {
    this->cleanup();
}

void
SamiOrgSetting::init() {
    p_id = null;
    pIs_default = null;
    pName = null;
    pEmail_theme_name = null;
    pCompany_address = null;
    pCompany_contact_email = null;
    pSite_url = null;
    pCompany_homepage_url = null;
    pPrivacy_policy_url = null;
    pTerms_and_conditions_url = null;
    
}

void
SamiOrgSetting::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pIs_default != null) {
        
        delete pIs_default;
        pIs_default = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pEmail_theme_name != null) {
        
        delete pEmail_theme_name;
        pEmail_theme_name = null;
    }
    if(pCompany_address != null) {
        
        delete pCompany_address;
        pCompany_address = null;
    }
    if(pCompany_contact_email != null) {
        
        delete pCompany_contact_email;
        pCompany_contact_email = null;
    }
    if(pSite_url != null) {
        
        delete pSite_url;
        pSite_url = null;
    }
    if(pCompany_homepage_url != null) {
        
        delete pCompany_homepage_url;
        pCompany_homepage_url = null;
    }
    if(pPrivacy_policy_url != null) {
        
        delete pPrivacy_policy_url;
        pPrivacy_policy_url = null;
    }
    if(pTerms_and_conditions_url != null) {
        
        delete pTerms_and_conditions_url;
        pTerms_and_conditions_url = null;
    }
    
}


SamiOrgSetting*
SamiOrgSetting::fromJson(String* json) {
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
SamiOrgSetting::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pIs_defaultKey = new JsonString(L"is_default");
        IJsonValue* pIs_defaultVal = null;
        pJsonObject->GetValue(pIs_defaultKey, pIs_defaultVal);
        if(pIs_defaultVal != null) {
            
            pIs_default = new Boolean(false);
            jsonToValue(pIs_default, pIs_defaultVal, L"Boolean", L"Boolean");
        }
        delete pIs_defaultKey;
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pEmail_theme_nameKey = new JsonString(L"email_theme_name");
        IJsonValue* pEmail_theme_nameVal = null;
        pJsonObject->GetValue(pEmail_theme_nameKey, pEmail_theme_nameVal);
        if(pEmail_theme_nameVal != null) {
            
            pEmail_theme_name = new String();
            jsonToValue(pEmail_theme_name, pEmail_theme_nameVal, L"String", L"String");
        }
        delete pEmail_theme_nameKey;
        JsonString* pCompany_addressKey = new JsonString(L"company_address");
        IJsonValue* pCompany_addressVal = null;
        pJsonObject->GetValue(pCompany_addressKey, pCompany_addressVal);
        if(pCompany_addressVal != null) {
            
            pCompany_address = new String();
            jsonToValue(pCompany_address, pCompany_addressVal, L"String", L"String");
        }
        delete pCompany_addressKey;
        JsonString* pCompany_contact_emailKey = new JsonString(L"company_contact_email");
        IJsonValue* pCompany_contact_emailVal = null;
        pJsonObject->GetValue(pCompany_contact_emailKey, pCompany_contact_emailVal);
        if(pCompany_contact_emailVal != null) {
            
            pCompany_contact_email = new String();
            jsonToValue(pCompany_contact_email, pCompany_contact_emailVal, L"String", L"String");
        }
        delete pCompany_contact_emailKey;
        JsonString* pSite_urlKey = new JsonString(L"site_url");
        IJsonValue* pSite_urlVal = null;
        pJsonObject->GetValue(pSite_urlKey, pSite_urlVal);
        if(pSite_urlVal != null) {
            
            pSite_url = new String();
            jsonToValue(pSite_url, pSite_urlVal, L"String", L"String");
        }
        delete pSite_urlKey;
        JsonString* pCompany_homepage_urlKey = new JsonString(L"company_homepage_url");
        IJsonValue* pCompany_homepage_urlVal = null;
        pJsonObject->GetValue(pCompany_homepage_urlKey, pCompany_homepage_urlVal);
        if(pCompany_homepage_urlVal != null) {
            
            pCompany_homepage_url = new String();
            jsonToValue(pCompany_homepage_url, pCompany_homepage_urlVal, L"String", L"String");
        }
        delete pCompany_homepage_urlKey;
        JsonString* pPrivacy_policy_urlKey = new JsonString(L"privacy_policy_url");
        IJsonValue* pPrivacy_policy_urlVal = null;
        pJsonObject->GetValue(pPrivacy_policy_urlKey, pPrivacy_policy_urlVal);
        if(pPrivacy_policy_urlVal != null) {
            
            pPrivacy_policy_url = new String();
            jsonToValue(pPrivacy_policy_url, pPrivacy_policy_urlVal, L"String", L"String");
        }
        delete pPrivacy_policy_urlKey;
        JsonString* pTerms_and_conditions_urlKey = new JsonString(L"terms_and_conditions_url");
        IJsonValue* pTerms_and_conditions_urlVal = null;
        pJsonObject->GetValue(pTerms_and_conditions_urlKey, pTerms_and_conditions_urlVal);
        if(pTerms_and_conditions_urlVal != null) {
            
            pTerms_and_conditions_url = new String();
            jsonToValue(pTerms_and_conditions_url, pTerms_and_conditions_urlVal, L"String", L"String");
        }
        delete pTerms_and_conditions_urlKey;
        
    }
}

SamiOrgSetting::SamiOrgSetting(String* json) {
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
SamiOrgSetting::asJson ()
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
SamiOrgSetting::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pIs_defaultKey = new JsonString(L"is_default");
    pJsonObject->Add(pIs_defaultKey, toJson(getPIsDefault(), "Boolean", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pEmail_theme_nameKey = new JsonString(L"email_theme_name");
    pJsonObject->Add(pEmail_theme_nameKey, toJson(getPEmailThemeName(), "String", ""));

    
    JsonString *pCompany_addressKey = new JsonString(L"company_address");
    pJsonObject->Add(pCompany_addressKey, toJson(getPCompanyAddress(), "String", ""));

    
    JsonString *pCompany_contact_emailKey = new JsonString(L"company_contact_email");
    pJsonObject->Add(pCompany_contact_emailKey, toJson(getPCompanyContactEmail(), "String", ""));

    
    JsonString *pSite_urlKey = new JsonString(L"site_url");
    pJsonObject->Add(pSite_urlKey, toJson(getPSiteUrl(), "String", ""));

    
    JsonString *pCompany_homepage_urlKey = new JsonString(L"company_homepage_url");
    pJsonObject->Add(pCompany_homepage_urlKey, toJson(getPCompanyHomepageUrl(), "String", ""));

    
    JsonString *pPrivacy_policy_urlKey = new JsonString(L"privacy_policy_url");
    pJsonObject->Add(pPrivacy_policy_urlKey, toJson(getPPrivacyPolicyUrl(), "String", ""));

    
    JsonString *pTerms_and_conditions_urlKey = new JsonString(L"terms_and_conditions_url");
    pJsonObject->Add(pTerms_and_conditions_urlKey, toJson(getPTermsAndConditionsUrl(), "String", ""));

    
    return pJsonObject;
}

String*
SamiOrgSetting::getPId() {
    return p_id;
}
void
SamiOrgSetting::setPId(String* p_id) {
    this->p_id = p_id;
}

Boolean*
SamiOrgSetting::getPIsDefault() {
    return pIs_default;
}
void
SamiOrgSetting::setPIsDefault(Boolean* pIs_default) {
    this->pIs_default = pIs_default;
}

String*
SamiOrgSetting::getPName() {
    return pName;
}
void
SamiOrgSetting::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiOrgSetting::getPEmailThemeName() {
    return pEmail_theme_name;
}
void
SamiOrgSetting::setPEmailThemeName(String* pEmail_theme_name) {
    this->pEmail_theme_name = pEmail_theme_name;
}

String*
SamiOrgSetting::getPCompanyAddress() {
    return pCompany_address;
}
void
SamiOrgSetting::setPCompanyAddress(String* pCompany_address) {
    this->pCompany_address = pCompany_address;
}

String*
SamiOrgSetting::getPCompanyContactEmail() {
    return pCompany_contact_email;
}
void
SamiOrgSetting::setPCompanyContactEmail(String* pCompany_contact_email) {
    this->pCompany_contact_email = pCompany_contact_email;
}

String*
SamiOrgSetting::getPSiteUrl() {
    return pSite_url;
}
void
SamiOrgSetting::setPSiteUrl(String* pSite_url) {
    this->pSite_url = pSite_url;
}

String*
SamiOrgSetting::getPCompanyHomepageUrl() {
    return pCompany_homepage_url;
}
void
SamiOrgSetting::setPCompanyHomepageUrl(String* pCompany_homepage_url) {
    this->pCompany_homepage_url = pCompany_homepage_url;
}

String*
SamiOrgSetting::getPPrivacyPolicyUrl() {
    return pPrivacy_policy_url;
}
void
SamiOrgSetting::setPPrivacyPolicyUrl(String* pPrivacy_policy_url) {
    this->pPrivacy_policy_url = pPrivacy_policy_url;
}

String*
SamiOrgSetting::getPTermsAndConditionsUrl() {
    return pTerms_and_conditions_url;
}
void
SamiOrgSetting::setPTermsAndConditionsUrl(String* pTerms_and_conditions_url) {
    this->pTerms_and_conditions_url = pTerms_and_conditions_url;
}



} /* namespace Swagger */

