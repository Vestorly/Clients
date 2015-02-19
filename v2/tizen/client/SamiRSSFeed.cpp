
#include "SamiRSSFeed.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRSSFeed::SamiRSSFeed() {
    init();
}

SamiRSSFeed::~SamiRSSFeed() {
    this->cleanup();
}

void
SamiRSSFeed::init() {
    p_id = null;
    pName = null;
    pCategory = null;
    pUrl = null;
    pLogo_url = null;
    pNeeds_sanitize = null;
    
}

void
SamiRSSFeed::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pCategory != null) {
        
        delete pCategory;
        pCategory = null;
    }
    if(pUrl != null) {
        
        delete pUrl;
        pUrl = null;
    }
    if(pLogo_url != null) {
        
        delete pLogo_url;
        pLogo_url = null;
    }
    if(pNeeds_sanitize != null) {
        
        delete pNeeds_sanitize;
        pNeeds_sanitize = null;
    }
    
}


SamiRSSFeed*
SamiRSSFeed::fromJson(String* json) {
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
SamiRSSFeed::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pCategoryKey = new JsonString(L"category");
        IJsonValue* pCategoryVal = null;
        pJsonObject->GetValue(pCategoryKey, pCategoryVal);
        if(pCategoryVal != null) {
            
            pCategory = new String();
            jsonToValue(pCategory, pCategoryVal, L"String", L"String");
        }
        delete pCategoryKey;
        JsonString* pUrlKey = new JsonString(L"url");
        IJsonValue* pUrlVal = null;
        pJsonObject->GetValue(pUrlKey, pUrlVal);
        if(pUrlVal != null) {
            
            pUrl = new SamiUrl();
            jsonToValue(pUrl, pUrlVal, L"SamiUrl", L"SamiUrl");
        }
        delete pUrlKey;
        JsonString* pLogo_urlKey = new JsonString(L"logo_url");
        IJsonValue* pLogo_urlVal = null;
        pJsonObject->GetValue(pLogo_urlKey, pLogo_urlVal);
        if(pLogo_urlVal != null) {
            
            pLogo_url = new SamiUrl();
            jsonToValue(pLogo_url, pLogo_urlVal, L"SamiUrl", L"SamiUrl");
        }
        delete pLogo_urlKey;
        JsonString* pNeeds_sanitizeKey = new JsonString(L"needs_sanitize");
        IJsonValue* pNeeds_sanitizeVal = null;
        pJsonObject->GetValue(pNeeds_sanitizeKey, pNeeds_sanitizeVal);
        if(pNeeds_sanitizeVal != null) {
            
            pNeeds_sanitize = new String();
            jsonToValue(pNeeds_sanitize, pNeeds_sanitizeVal, L"String", L"String");
        }
        delete pNeeds_sanitizeKey;
        
    }
}

SamiRSSFeed::SamiRSSFeed(String* json) {
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
SamiRSSFeed::asJson ()
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
SamiRSSFeed::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(get_id(), "String", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getName(), "String", ""));

    
    JsonString *pCategoryKey = new JsonString(L"category");
    pJsonObject->Add(pCategoryKey, toJson(getCategory(), "String", ""));

    
    JsonString *pUrlKey = new JsonString(L"url");
    pJsonObject->Add(pUrlKey, toJson(getUrl(), "SamiUrl", ""));

    
    JsonString *pLogo_urlKey = new JsonString(L"logo_url");
    pJsonObject->Add(pLogo_urlKey, toJson(getLogo_url(), "SamiUrl", ""));

    
    JsonString *pNeeds_sanitizeKey = new JsonString(L"needs_sanitize");
    pJsonObject->Add(pNeeds_sanitizeKey, toJson(getNeeds_sanitize(), "String", ""));

    
    return pJsonObject;
}

String*
SamiRSSFeed::get_id() {
    return p_id;
}
void
SamiRSSFeed::set_id(String* p_id) {
    this->p_id = p_id;
}

String*
SamiRSSFeed::getName() {
    return pName;
}
void
SamiRSSFeed::setName(String* pName) {
    this->pName = pName;
}

String*
SamiRSSFeed::getCategory() {
    return pCategory;
}
void
SamiRSSFeed::setCategory(String* pCategory) {
    this->pCategory = pCategory;
}

SamiUrl*
SamiRSSFeed::getUrl() {
    return pUrl;
}
void
SamiRSSFeed::setUrl(SamiUrl* pUrl) {
    this->pUrl = pUrl;
}

SamiUrl*
SamiRSSFeed::getLogo_url() {
    return pLogo_url;
}
void
SamiRSSFeed::setLogo_url(SamiUrl* pLogo_url) {
    this->pLogo_url = pLogo_url;
}

String*
SamiRSSFeed::getNeeds_sanitize() {
    return pNeeds_sanitize;
}
void
SamiRSSFeed::setNeeds_sanitize(String* pNeeds_sanitize) {
    this->pNeeds_sanitize = pNeeds_sanitize;
}



} /* namespace Swagger */

