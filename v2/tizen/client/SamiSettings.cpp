
#include "SamiSettings.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSettings::SamiSettings() {
    init();
}

SamiSettings::~SamiSettings() {
    this->cleanup();
}

void
SamiSettings::init() {
    p_id = null;
    pCompany = null;
    pPicture_url = null;
    pWebsite = null;
    pDisclosure = null;
    pAdv_brochure = null;
    pSlug = null;
    pName = null;
    pOrgsetting = null;
    pFeature = null;
    pPersonalsetting = null;
    
}

void
SamiSettings::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pCompany != null) {
        
        delete pCompany;
        pCompany = null;
    }
    if(pPicture_url != null) {
        
        delete pPicture_url;
        pPicture_url = null;
    }
    if(pWebsite != null) {
        
        delete pWebsite;
        pWebsite = null;
    }
    if(pDisclosure != null) {
        
        delete pDisclosure;
        pDisclosure = null;
    }
    if(pAdv_brochure != null) {
        
        delete pAdv_brochure;
        pAdv_brochure = null;
    }
    if(pSlug != null) {
        
        delete pSlug;
        pSlug = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pOrgsetting != null) {
        
        delete pOrgsetting;
        pOrgsetting = null;
    }
    if(pFeature != null) {
        
        delete pFeature;
        pFeature = null;
    }
    if(pPersonalsetting != null) {
        
        delete pPersonalsetting;
        pPersonalsetting = null;
    }
    
}


SamiSettings*
SamiSettings::fromJson(String* json) {
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
SamiSettings::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pCompanyKey = new JsonString(L"company");
        IJsonValue* pCompanyVal = null;
        pJsonObject->GetValue(pCompanyKey, pCompanyVal);
        if(pCompanyVal != null) {
            
            pCompany = new String();
            jsonToValue(pCompany, pCompanyVal, L"String", L"String");
        }
        delete pCompanyKey;
        JsonString* pPicture_urlKey = new JsonString(L"picture_url");
        IJsonValue* pPicture_urlVal = null;
        pJsonObject->GetValue(pPicture_urlKey, pPicture_urlVal);
        if(pPicture_urlVal != null) {
            
            pPicture_url = new String();
            jsonToValue(pPicture_url, pPicture_urlVal, L"String", L"String");
        }
        delete pPicture_urlKey;
        JsonString* pWebsiteKey = new JsonString(L"website");
        IJsonValue* pWebsiteVal = null;
        pJsonObject->GetValue(pWebsiteKey, pWebsiteVal);
        if(pWebsiteVal != null) {
            
            pWebsite = new String();
            jsonToValue(pWebsite, pWebsiteVal, L"String", L"String");
        }
        delete pWebsiteKey;
        JsonString* pDisclosureKey = new JsonString(L"disclosure");
        IJsonValue* pDisclosureVal = null;
        pJsonObject->GetValue(pDisclosureKey, pDisclosureVal);
        if(pDisclosureVal != null) {
            
            pDisclosure = new String();
            jsonToValue(pDisclosure, pDisclosureVal, L"String", L"String");
        }
        delete pDisclosureKey;
        JsonString* pAdv_brochureKey = new JsonString(L"adv_brochure");
        IJsonValue* pAdv_brochureVal = null;
        pJsonObject->GetValue(pAdv_brochureKey, pAdv_brochureVal);
        if(pAdv_brochureVal != null) {
            
            pAdv_brochure = new String();
            jsonToValue(pAdv_brochure, pAdv_brochureVal, L"String", L"String");
        }
        delete pAdv_brochureKey;
        JsonString* pSlugKey = new JsonString(L"slug");
        IJsonValue* pSlugVal = null;
        pJsonObject->GetValue(pSlugKey, pSlugVal);
        if(pSlugVal != null) {
            
            pSlug = new String();
            jsonToValue(pSlug, pSlugVal, L"String", L"String");
        }
        delete pSlugKey;
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pOrgsettingKey = new JsonString(L"orgsetting");
        IJsonValue* pOrgsettingVal = null;
        pJsonObject->GetValue(pOrgsettingKey, pOrgsettingVal);
        if(pOrgsettingVal != null) {
            
            pOrgsetting = new SamiOrgSetting();
            jsonToValue(pOrgsetting, pOrgsettingVal, L"SamiOrgSetting", L"SamiOrgSetting");
        }
        delete pOrgsettingKey;
        JsonString* pFeatureKey = new JsonString(L"feature");
        IJsonValue* pFeatureVal = null;
        pJsonObject->GetValue(pFeatureKey, pFeatureVal);
        if(pFeatureVal != null) {
            
            pFeature = new SamiFeatures();
            jsonToValue(pFeature, pFeatureVal, L"SamiFeatures", L"SamiFeatures");
        }
        delete pFeatureKey;
        JsonString* pPersonalsettingKey = new JsonString(L"personalsetting");
        IJsonValue* pPersonalsettingVal = null;
        pJsonObject->GetValue(pPersonalsettingKey, pPersonalsettingVal);
        if(pPersonalsettingVal != null) {
            
            pPersonalsetting = new SamiPersonalSettings();
            jsonToValue(pPersonalsetting, pPersonalsettingVal, L"SamiPersonalSettings", L"SamiPersonalSettings");
        }
        delete pPersonalsettingKey;
        
    }
}

SamiSettings::SamiSettings(String* json) {
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
SamiSettings::asJson ()
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
SamiSettings::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pCompanyKey = new JsonString(L"company");
    pJsonObject->Add(pCompanyKey, toJson(getPCompany(), "String", ""));

    
    JsonString *pPicture_urlKey = new JsonString(L"picture_url");
    pJsonObject->Add(pPicture_urlKey, toJson(getPPictureUrl(), "String", ""));

    
    JsonString *pWebsiteKey = new JsonString(L"website");
    pJsonObject->Add(pWebsiteKey, toJson(getPWebsite(), "String", ""));

    
    JsonString *pDisclosureKey = new JsonString(L"disclosure");
    pJsonObject->Add(pDisclosureKey, toJson(getPDisclosure(), "String", ""));

    
    JsonString *pAdv_brochureKey = new JsonString(L"adv_brochure");
    pJsonObject->Add(pAdv_brochureKey, toJson(getPAdvBrochure(), "String", ""));

    
    JsonString *pSlugKey = new JsonString(L"slug");
    pJsonObject->Add(pSlugKey, toJson(getPSlug(), "String", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pOrgsettingKey = new JsonString(L"orgsetting");
    pJsonObject->Add(pOrgsettingKey, toJson(getPOrgsetting(), "SamiOrgSetting", ""));

    
    JsonString *pFeatureKey = new JsonString(L"feature");
    pJsonObject->Add(pFeatureKey, toJson(getPFeature(), "SamiFeatures", ""));

    
    JsonString *pPersonalsettingKey = new JsonString(L"personalsetting");
    pJsonObject->Add(pPersonalsettingKey, toJson(getPPersonalsetting(), "SamiPersonalSettings", ""));

    
    return pJsonObject;
}

String*
SamiSettings::getPId() {
    return p_id;
}
void
SamiSettings::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiSettings::getPCompany() {
    return pCompany;
}
void
SamiSettings::setPCompany(String* pCompany) {
    this->pCompany = pCompany;
}

String*
SamiSettings::getPPictureUrl() {
    return pPicture_url;
}
void
SamiSettings::setPPictureUrl(String* pPicture_url) {
    this->pPicture_url = pPicture_url;
}

String*
SamiSettings::getPWebsite() {
    return pWebsite;
}
void
SamiSettings::setPWebsite(String* pWebsite) {
    this->pWebsite = pWebsite;
}

String*
SamiSettings::getPDisclosure() {
    return pDisclosure;
}
void
SamiSettings::setPDisclosure(String* pDisclosure) {
    this->pDisclosure = pDisclosure;
}

String*
SamiSettings::getPAdvBrochure() {
    return pAdv_brochure;
}
void
SamiSettings::setPAdvBrochure(String* pAdv_brochure) {
    this->pAdv_brochure = pAdv_brochure;
}

String*
SamiSettings::getPSlug() {
    return pSlug;
}
void
SamiSettings::setPSlug(String* pSlug) {
    this->pSlug = pSlug;
}

String*
SamiSettings::getPName() {
    return pName;
}
void
SamiSettings::setPName(String* pName) {
    this->pName = pName;
}

SamiOrgSetting*
SamiSettings::getPOrgsetting() {
    return pOrgsetting;
}
void
SamiSettings::setPOrgsetting(SamiOrgSetting* pOrgsetting) {
    this->pOrgsetting = pOrgsetting;
}

SamiFeatures*
SamiSettings::getPFeature() {
    return pFeature;
}
void
SamiSettings::setPFeature(SamiFeatures* pFeature) {
    this->pFeature = pFeature;
}

SamiPersonalSettings*
SamiSettings::getPPersonalsetting() {
    return pPersonalsetting;
}
void
SamiSettings::setPPersonalsetting(SamiPersonalSettings* pPersonalsetting) {
    this->pPersonalsetting = pPersonalsetting;
}



} /* namespace Swagger */

