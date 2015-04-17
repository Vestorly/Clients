
#include "SamiSource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSource::SamiSource() {
    init();
}

SamiSource::~SamiSource() {
    this->cleanup();
}

void
SamiSource::init() {
    p_id = null;
    pName = null;
    pUrl = null;
    pLogo_url = null;
    pEnabled = null;
    pCustom_rss_feed = null;
    pRss_publisher = null;
    
}

void
SamiSource::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pUrl != null) {
        
        delete pUrl;
        pUrl = null;
    }
    if(pLogo_url != null) {
        
        delete pLogo_url;
        pLogo_url = null;
    }
    if(pEnabled != null) {
        
        delete pEnabled;
        pEnabled = null;
    }
    if(pCustom_rss_feed != null) {
        
        delete pCustom_rss_feed;
        pCustom_rss_feed = null;
    }
    if(pRss_publisher != null) {
        
        delete pRss_publisher;
        pRss_publisher = null;
    }
    
}


SamiSource*
SamiSource::fromJson(String* json) {
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
SamiSource::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pUrlKey = new JsonString(L"url");
        IJsonValue* pUrlVal = null;
        pJsonObject->GetValue(pUrlKey, pUrlVal);
        if(pUrlVal != null) {
            
            pUrl = new String();
            jsonToValue(pUrl, pUrlVal, L"String", L"String");
        }
        delete pUrlKey;
        JsonString* pLogo_urlKey = new JsonString(L"logo_url");
        IJsonValue* pLogo_urlVal = null;
        pJsonObject->GetValue(pLogo_urlKey, pLogo_urlVal);
        if(pLogo_urlVal != null) {
            
            pLogo_url = new String();
            jsonToValue(pLogo_url, pLogo_urlVal, L"String", L"String");
        }
        delete pLogo_urlKey;
        JsonString* pEnabledKey = new JsonString(L"enabled");
        IJsonValue* pEnabledVal = null;
        pJsonObject->GetValue(pEnabledKey, pEnabledVal);
        if(pEnabledVal != null) {
            
            pEnabled = new Boolean(false);
            jsonToValue(pEnabled, pEnabledVal, L"Boolean", L"Boolean");
        }
        delete pEnabledKey;
        JsonString* pCustom_rss_feedKey = new JsonString(L"custom_rss_feed");
        IJsonValue* pCustom_rss_feedVal = null;
        pJsonObject->GetValue(pCustom_rss_feedKey, pCustom_rss_feedVal);
        if(pCustom_rss_feedVal != null) {
            
            pCustom_rss_feed = new Boolean(false);
            jsonToValue(pCustom_rss_feed, pCustom_rss_feedVal, L"Boolean", L"Boolean");
        }
        delete pCustom_rss_feedKey;
        JsonString* pRss_publisherKey = new JsonString(L"rss_publisher");
        IJsonValue* pRss_publisherVal = null;
        pJsonObject->GetValue(pRss_publisherKey, pRss_publisherVal);
        if(pRss_publisherVal != null) {
            
            pRss_publisher = new String();
            jsonToValue(pRss_publisher, pRss_publisherVal, L"String", L"String");
        }
        delete pRss_publisherKey;
        
    }
}

SamiSource::SamiSource(String* json) {
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
SamiSource::asJson ()
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
SamiSource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pUrlKey = new JsonString(L"url");
    pJsonObject->Add(pUrlKey, toJson(getPUrl(), "String", ""));

    
    JsonString *pLogo_urlKey = new JsonString(L"logo_url");
    pJsonObject->Add(pLogo_urlKey, toJson(getPLogoUrl(), "String", ""));

    
    JsonString *pEnabledKey = new JsonString(L"enabled");
    pJsonObject->Add(pEnabledKey, toJson(getPEnabled(), "Boolean", ""));

    
    JsonString *pCustom_rss_feedKey = new JsonString(L"custom_rss_feed");
    pJsonObject->Add(pCustom_rss_feedKey, toJson(getPCustomRssFeed(), "Boolean", ""));

    
    JsonString *pRss_publisherKey = new JsonString(L"rss_publisher");
    pJsonObject->Add(pRss_publisherKey, toJson(getPRssPublisher(), "String", ""));

    
    return pJsonObject;
}

String*
SamiSource::getPId() {
    return p_id;
}
void
SamiSource::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiSource::getPName() {
    return pName;
}
void
SamiSource::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiSource::getPUrl() {
    return pUrl;
}
void
SamiSource::setPUrl(String* pUrl) {
    this->pUrl = pUrl;
}

String*
SamiSource::getPLogoUrl() {
    return pLogo_url;
}
void
SamiSource::setPLogoUrl(String* pLogo_url) {
    this->pLogo_url = pLogo_url;
}

Boolean*
SamiSource::getPEnabled() {
    return pEnabled;
}
void
SamiSource::setPEnabled(Boolean* pEnabled) {
    this->pEnabled = pEnabled;
}

Boolean*
SamiSource::getPCustomRssFeed() {
    return pCustom_rss_feed;
}
void
SamiSource::setPCustomRssFeed(Boolean* pCustom_rss_feed) {
    this->pCustom_rss_feed = pCustom_rss_feed;
}

String*
SamiSource::getPRssPublisher() {
    return pRss_publisher;
}
void
SamiSource::setPRssPublisher(String* pRss_publisher) {
    this->pRss_publisher = pRss_publisher;
}



} /* namespace Swagger */

