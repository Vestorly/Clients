
#include "SamiArticle.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiArticle::SamiArticle() {
    init();
}

SamiArticle::~SamiArticle() {
    this->cleanup();
}

void
SamiArticle::init() {
    p_id = null;
    pUrl = null;
    pTitle = null;
    pOpen_calais_topics = null;
    pOpen_calais_keywords = null;
    pCategories = null;
    pSummary = null;
    pUnparsed_html = null;
    pParsed_html = null;
    pContent = null;
    pVestorly_topics = null;
    pOverride_topic = null;
    pPublished_at = null;
    pOriginal_image_url = null;
    pSmall_image_url = null;
    pLarge_image_url = null;
    pImg = null;
    pWebpage_mobile_image_url = null;
    pWebpage_tablet_image_url = null;
    pRss_feed_url = null;
    pRss_feed_category = null;
    pRss_feed_logo_url = null;
    pNeeds_sanitize = null;
    pIs_responsive = null;
    pIs_proxy_needed = null;
    pIs_mobile_proxy_needed = null;
    pIs_working_url = null;
    
}

void
SamiArticle::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pUrl != null) {
        
        delete pUrl;
        pUrl = null;
    }
    if(pTitle != null) {
        
        delete pTitle;
        pTitle = null;
    }
    if(pOpen_calais_topics != null) {
        
        delete pOpen_calais_topics;
        pOpen_calais_topics = null;
    }
    if(pOpen_calais_keywords != null) {
        
        delete pOpen_calais_keywords;
        pOpen_calais_keywords = null;
    }
    if(pCategories != null) {
        
        delete pCategories;
        pCategories = null;
    }
    if(pSummary != null) {
        
        delete pSummary;
        pSummary = null;
    }
    if(pUnparsed_html != null) {
        
        delete pUnparsed_html;
        pUnparsed_html = null;
    }
    if(pParsed_html != null) {
        
        delete pParsed_html;
        pParsed_html = null;
    }
    if(pContent != null) {
        
        delete pContent;
        pContent = null;
    }
    if(pVestorly_topics != null) {
        
        delete pVestorly_topics;
        pVestorly_topics = null;
    }
    if(pOverride_topic != null) {
        
        delete pOverride_topic;
        pOverride_topic = null;
    }
    if(pPublished_at != null) {
        
        delete pPublished_at;
        pPublished_at = null;
    }
    if(pOriginal_image_url != null) {
        
        delete pOriginal_image_url;
        pOriginal_image_url = null;
    }
    if(pSmall_image_url != null) {
        
        delete pSmall_image_url;
        pSmall_image_url = null;
    }
    if(pLarge_image_url != null) {
        
        delete pLarge_image_url;
        pLarge_image_url = null;
    }
    if(pImg != null) {
        
        delete pImg;
        pImg = null;
    }
    if(pWebpage_mobile_image_url != null) {
        
        delete pWebpage_mobile_image_url;
        pWebpage_mobile_image_url = null;
    }
    if(pWebpage_tablet_image_url != null) {
        
        delete pWebpage_tablet_image_url;
        pWebpage_tablet_image_url = null;
    }
    if(pRss_feed_url != null) {
        
        delete pRss_feed_url;
        pRss_feed_url = null;
    }
    if(pRss_feed_category != null) {
        
        delete pRss_feed_category;
        pRss_feed_category = null;
    }
    if(pRss_feed_logo_url != null) {
        
        delete pRss_feed_logo_url;
        pRss_feed_logo_url = null;
    }
    if(pNeeds_sanitize != null) {
        
        delete pNeeds_sanitize;
        pNeeds_sanitize = null;
    }
    if(pIs_responsive != null) {
        
        delete pIs_responsive;
        pIs_responsive = null;
    }
    if(pIs_proxy_needed != null) {
        
        delete pIs_proxy_needed;
        pIs_proxy_needed = null;
    }
    if(pIs_mobile_proxy_needed != null) {
        
        delete pIs_mobile_proxy_needed;
        pIs_mobile_proxy_needed = null;
    }
    if(pIs_working_url != null) {
        
        delete pIs_working_url;
        pIs_working_url = null;
    }
    
}


SamiArticle*
SamiArticle::fromJson(String* json) {
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
SamiArticle::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pUrlKey = new JsonString(L"url");
        IJsonValue* pUrlVal = null;
        pJsonObject->GetValue(pUrlKey, pUrlVal);
        if(pUrlVal != null) {
            
            pUrl = new String();
            jsonToValue(pUrl, pUrlVal, L"String", L"String");
        }
        delete pUrlKey;
        JsonString* pTitleKey = new JsonString(L"title");
        IJsonValue* pTitleVal = null;
        pJsonObject->GetValue(pTitleKey, pTitleVal);
        if(pTitleVal != null) {
            
            pTitle = new String();
            jsonToValue(pTitle, pTitleVal, L"String", L"String");
        }
        delete pTitleKey;
        JsonString* pOpen_calais_topicsKey = new JsonString(L"open_calais_topics");
        IJsonValue* pOpen_calais_topicsVal = null;
        pJsonObject->GetValue(pOpen_calais_topicsKey, pOpen_calais_topicsVal);
        if(pOpen_calais_topicsVal != null) {
            
            pOpen_calais_topics = new String();
            jsonToValue(pOpen_calais_topics, pOpen_calais_topicsVal, L"String", L"String");
        }
        delete pOpen_calais_topicsKey;
        JsonString* pOpen_calais_keywordsKey = new JsonString(L"open_calais_keywords");
        IJsonValue* pOpen_calais_keywordsVal = null;
        pJsonObject->GetValue(pOpen_calais_keywordsKey, pOpen_calais_keywordsVal);
        if(pOpen_calais_keywordsVal != null) {
            
            pOpen_calais_keywords = new String();
            jsonToValue(pOpen_calais_keywords, pOpen_calais_keywordsVal, L"String", L"String");
        }
        delete pOpen_calais_keywordsKey;
        JsonString* pCategoriesKey = new JsonString(L"categories");
        IJsonValue* pCategoriesVal = null;
        pJsonObject->GetValue(pCategoriesKey, pCategoriesVal);
        if(pCategoriesVal != null) {
            
            pCategories = new String();
            jsonToValue(pCategories, pCategoriesVal, L"String", L"String");
        }
        delete pCategoriesKey;
        JsonString* pSummaryKey = new JsonString(L"summary");
        IJsonValue* pSummaryVal = null;
        pJsonObject->GetValue(pSummaryKey, pSummaryVal);
        if(pSummaryVal != null) {
            
            pSummary = new String();
            jsonToValue(pSummary, pSummaryVal, L"String", L"String");
        }
        delete pSummaryKey;
        JsonString* pUnparsed_htmlKey = new JsonString(L"unparsed_html");
        IJsonValue* pUnparsed_htmlVal = null;
        pJsonObject->GetValue(pUnparsed_htmlKey, pUnparsed_htmlVal);
        if(pUnparsed_htmlVal != null) {
            
            pUnparsed_html = new String();
            jsonToValue(pUnparsed_html, pUnparsed_htmlVal, L"String", L"String");
        }
        delete pUnparsed_htmlKey;
        JsonString* pParsed_htmlKey = new JsonString(L"parsed_html");
        IJsonValue* pParsed_htmlVal = null;
        pJsonObject->GetValue(pParsed_htmlKey, pParsed_htmlVal);
        if(pParsed_htmlVal != null) {
            
            pParsed_html = new String();
            jsonToValue(pParsed_html, pParsed_htmlVal, L"String", L"String");
        }
        delete pParsed_htmlKey;
        JsonString* pContentKey = new JsonString(L"content");
        IJsonValue* pContentVal = null;
        pJsonObject->GetValue(pContentKey, pContentVal);
        if(pContentVal != null) {
            
            pContent = new String();
            jsonToValue(pContent, pContentVal, L"String", L"String");
        }
        delete pContentKey;
        JsonString* pVestorly_topicsKey = new JsonString(L"vestorly_topics");
        IJsonValue* pVestorly_topicsVal = null;
        pJsonObject->GetValue(pVestorly_topicsKey, pVestorly_topicsVal);
        if(pVestorly_topicsVal != null) {
            
            pVestorly_topics = new String();
            jsonToValue(pVestorly_topics, pVestorly_topicsVal, L"String", L"String");
        }
        delete pVestorly_topicsKey;
        JsonString* pOverride_topicKey = new JsonString(L"override_topic");
        IJsonValue* pOverride_topicVal = null;
        pJsonObject->GetValue(pOverride_topicKey, pOverride_topicVal);
        if(pOverride_topicVal != null) {
            
            pOverride_topic = new String();
            jsonToValue(pOverride_topic, pOverride_topicVal, L"String", L"String");
        }
        delete pOverride_topicKey;
        JsonString* pPublished_atKey = new JsonString(L"published_at");
        IJsonValue* pPublished_atVal = null;
        pJsonObject->GetValue(pPublished_atKey, pPublished_atVal);
        if(pPublished_atVal != null) {
            
            pPublished_at = new SamiDatetime();
            jsonToValue(pPublished_at, pPublished_atVal, L"SamiDatetime", L"SamiDatetime");
        }
        delete pPublished_atKey;
        JsonString* pOriginal_image_urlKey = new JsonString(L"original_image_url");
        IJsonValue* pOriginal_image_urlVal = null;
        pJsonObject->GetValue(pOriginal_image_urlKey, pOriginal_image_urlVal);
        if(pOriginal_image_urlVal != null) {
            
            pOriginal_image_url = new String();
            jsonToValue(pOriginal_image_url, pOriginal_image_urlVal, L"String", L"String");
        }
        delete pOriginal_image_urlKey;
        JsonString* pSmall_image_urlKey = new JsonString(L"small_image_url");
        IJsonValue* pSmall_image_urlVal = null;
        pJsonObject->GetValue(pSmall_image_urlKey, pSmall_image_urlVal);
        if(pSmall_image_urlVal != null) {
            
            pSmall_image_url = new String();
            jsonToValue(pSmall_image_url, pSmall_image_urlVal, L"String", L"String");
        }
        delete pSmall_image_urlKey;
        JsonString* pLarge_image_urlKey = new JsonString(L"large_image_url");
        IJsonValue* pLarge_image_urlVal = null;
        pJsonObject->GetValue(pLarge_image_urlKey, pLarge_image_urlVal);
        if(pLarge_image_urlVal != null) {
            
            pLarge_image_url = new String();
            jsonToValue(pLarge_image_url, pLarge_image_urlVal, L"String", L"String");
        }
        delete pLarge_image_urlKey;
        JsonString* pImgKey = new JsonString(L"img");
        IJsonValue* pImgVal = null;
        pJsonObject->GetValue(pImgKey, pImgVal);
        if(pImgVal != null) {
            
            pImg = new String();
            jsonToValue(pImg, pImgVal, L"String", L"String");
        }
        delete pImgKey;
        JsonString* pWebpage_mobile_image_urlKey = new JsonString(L"webpage_mobile_image_url");
        IJsonValue* pWebpage_mobile_image_urlVal = null;
        pJsonObject->GetValue(pWebpage_mobile_image_urlKey, pWebpage_mobile_image_urlVal);
        if(pWebpage_mobile_image_urlVal != null) {
            
            pWebpage_mobile_image_url = new String();
            jsonToValue(pWebpage_mobile_image_url, pWebpage_mobile_image_urlVal, L"String", L"String");
        }
        delete pWebpage_mobile_image_urlKey;
        JsonString* pWebpage_tablet_image_urlKey = new JsonString(L"webpage_tablet_image_url");
        IJsonValue* pWebpage_tablet_image_urlVal = null;
        pJsonObject->GetValue(pWebpage_tablet_image_urlKey, pWebpage_tablet_image_urlVal);
        if(pWebpage_tablet_image_urlVal != null) {
            
            pWebpage_tablet_image_url = new String();
            jsonToValue(pWebpage_tablet_image_url, pWebpage_tablet_image_urlVal, L"String", L"String");
        }
        delete pWebpage_tablet_image_urlKey;
        JsonString* pRss_feed_urlKey = new JsonString(L"rss_feed_url");
        IJsonValue* pRss_feed_urlVal = null;
        pJsonObject->GetValue(pRss_feed_urlKey, pRss_feed_urlVal);
        if(pRss_feed_urlVal != null) {
            
            pRss_feed_url = new String();
            jsonToValue(pRss_feed_url, pRss_feed_urlVal, L"String", L"String");
        }
        delete pRss_feed_urlKey;
        JsonString* pRss_feed_categoryKey = new JsonString(L"rss_feed_category");
        IJsonValue* pRss_feed_categoryVal = null;
        pJsonObject->GetValue(pRss_feed_categoryKey, pRss_feed_categoryVal);
        if(pRss_feed_categoryVal != null) {
            
            pRss_feed_category = new String();
            jsonToValue(pRss_feed_category, pRss_feed_categoryVal, L"String", L"String");
        }
        delete pRss_feed_categoryKey;
        JsonString* pRss_feed_logo_urlKey = new JsonString(L"rss_feed_logo_url");
        IJsonValue* pRss_feed_logo_urlVal = null;
        pJsonObject->GetValue(pRss_feed_logo_urlKey, pRss_feed_logo_urlVal);
        if(pRss_feed_logo_urlVal != null) {
            
            pRss_feed_logo_url = new String();
            jsonToValue(pRss_feed_logo_url, pRss_feed_logo_urlVal, L"String", L"String");
        }
        delete pRss_feed_logo_urlKey;
        JsonString* pNeeds_sanitizeKey = new JsonString(L"needs_sanitize");
        IJsonValue* pNeeds_sanitizeVal = null;
        pJsonObject->GetValue(pNeeds_sanitizeKey, pNeeds_sanitizeVal);
        if(pNeeds_sanitizeVal != null) {
            
            pNeeds_sanitize = new Boolean(false);
            jsonToValue(pNeeds_sanitize, pNeeds_sanitizeVal, L"Boolean", L"Boolean");
        }
        delete pNeeds_sanitizeKey;
        JsonString* pIs_responsiveKey = new JsonString(L"is_responsive");
        IJsonValue* pIs_responsiveVal = null;
        pJsonObject->GetValue(pIs_responsiveKey, pIs_responsiveVal);
        if(pIs_responsiveVal != null) {
            
            pIs_responsive = new Boolean(false);
            jsonToValue(pIs_responsive, pIs_responsiveVal, L"Boolean", L"Boolean");
        }
        delete pIs_responsiveKey;
        JsonString* pIs_proxy_neededKey = new JsonString(L"is_proxy_needed");
        IJsonValue* pIs_proxy_neededVal = null;
        pJsonObject->GetValue(pIs_proxy_neededKey, pIs_proxy_neededVal);
        if(pIs_proxy_neededVal != null) {
            
            pIs_proxy_needed = new Boolean(false);
            jsonToValue(pIs_proxy_needed, pIs_proxy_neededVal, L"Boolean", L"Boolean");
        }
        delete pIs_proxy_neededKey;
        JsonString* pIs_mobile_proxy_neededKey = new JsonString(L"is_mobile_proxy_needed");
        IJsonValue* pIs_mobile_proxy_neededVal = null;
        pJsonObject->GetValue(pIs_mobile_proxy_neededKey, pIs_mobile_proxy_neededVal);
        if(pIs_mobile_proxy_neededVal != null) {
            
            pIs_mobile_proxy_needed = new Boolean(false);
            jsonToValue(pIs_mobile_proxy_needed, pIs_mobile_proxy_neededVal, L"Boolean", L"Boolean");
        }
        delete pIs_mobile_proxy_neededKey;
        JsonString* pIs_working_urlKey = new JsonString(L"is_working_url");
        IJsonValue* pIs_working_urlVal = null;
        pJsonObject->GetValue(pIs_working_urlKey, pIs_working_urlVal);
        if(pIs_working_urlVal != null) {
            
            pIs_working_url = new Boolean(false);
            jsonToValue(pIs_working_url, pIs_working_urlVal, L"Boolean", L"Boolean");
        }
        delete pIs_working_urlKey;
        
    }
}

SamiArticle::SamiArticle(String* json) {
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
SamiArticle::asJson ()
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
SamiArticle::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(get_id(), "String", ""));

    
    JsonString *pUrlKey = new JsonString(L"url");
    pJsonObject->Add(pUrlKey, toJson(getUrl(), "String", ""));

    
    JsonString *pTitleKey = new JsonString(L"title");
    pJsonObject->Add(pTitleKey, toJson(getTitle(), "String", ""));

    
    JsonString *pOpen_calais_topicsKey = new JsonString(L"open_calais_topics");
    pJsonObject->Add(pOpen_calais_topicsKey, toJson(getOpen_calais_topics(), "String", ""));

    
    JsonString *pOpen_calais_keywordsKey = new JsonString(L"open_calais_keywords");
    pJsonObject->Add(pOpen_calais_keywordsKey, toJson(getOpen_calais_keywords(), "String", ""));

    
    JsonString *pCategoriesKey = new JsonString(L"categories");
    pJsonObject->Add(pCategoriesKey, toJson(getCategories(), "String", ""));

    
    JsonString *pSummaryKey = new JsonString(L"summary");
    pJsonObject->Add(pSummaryKey, toJson(getSummary(), "String", ""));

    
    JsonString *pUnparsed_htmlKey = new JsonString(L"unparsed_html");
    pJsonObject->Add(pUnparsed_htmlKey, toJson(getUnparsed_html(), "String", ""));

    
    JsonString *pParsed_htmlKey = new JsonString(L"parsed_html");
    pJsonObject->Add(pParsed_htmlKey, toJson(getParsed_html(), "String", ""));

    
    JsonString *pContentKey = new JsonString(L"content");
    pJsonObject->Add(pContentKey, toJson(getContent(), "String", ""));

    
    JsonString *pVestorly_topicsKey = new JsonString(L"vestorly_topics");
    pJsonObject->Add(pVestorly_topicsKey, toJson(getVestorly_topics(), "String", ""));

    
    JsonString *pOverride_topicKey = new JsonString(L"override_topic");
    pJsonObject->Add(pOverride_topicKey, toJson(getOverride_topic(), "String", ""));

    
    JsonString *pPublished_atKey = new JsonString(L"published_at");
    pJsonObject->Add(pPublished_atKey, toJson(getPublished_at(), "SamiDatetime", ""));

    
    JsonString *pOriginal_image_urlKey = new JsonString(L"original_image_url");
    pJsonObject->Add(pOriginal_image_urlKey, toJson(getOriginal_image_url(), "String", ""));

    
    JsonString *pSmall_image_urlKey = new JsonString(L"small_image_url");
    pJsonObject->Add(pSmall_image_urlKey, toJson(getSmall_image_url(), "String", ""));

    
    JsonString *pLarge_image_urlKey = new JsonString(L"large_image_url");
    pJsonObject->Add(pLarge_image_urlKey, toJson(getLarge_image_url(), "String", ""));

    
    JsonString *pImgKey = new JsonString(L"img");
    pJsonObject->Add(pImgKey, toJson(getImg(), "String", ""));

    
    JsonString *pWebpage_mobile_image_urlKey = new JsonString(L"webpage_mobile_image_url");
    pJsonObject->Add(pWebpage_mobile_image_urlKey, toJson(getWebpage_mobile_image_url(), "String", ""));

    
    JsonString *pWebpage_tablet_image_urlKey = new JsonString(L"webpage_tablet_image_url");
    pJsonObject->Add(pWebpage_tablet_image_urlKey, toJson(getWebpage_tablet_image_url(), "String", ""));

    
    JsonString *pRss_feed_urlKey = new JsonString(L"rss_feed_url");
    pJsonObject->Add(pRss_feed_urlKey, toJson(getRss_feed_url(), "String", ""));

    
    JsonString *pRss_feed_categoryKey = new JsonString(L"rss_feed_category");
    pJsonObject->Add(pRss_feed_categoryKey, toJson(getRss_feed_category(), "String", ""));

    
    JsonString *pRss_feed_logo_urlKey = new JsonString(L"rss_feed_logo_url");
    pJsonObject->Add(pRss_feed_logo_urlKey, toJson(getRss_feed_logo_url(), "String", ""));

    
    JsonString *pNeeds_sanitizeKey = new JsonString(L"needs_sanitize");
    pJsonObject->Add(pNeeds_sanitizeKey, toJson(getNeeds_sanitize(), "Boolean", ""));

    
    JsonString *pIs_responsiveKey = new JsonString(L"is_responsive");
    pJsonObject->Add(pIs_responsiveKey, toJson(getIs_responsive(), "Boolean", ""));

    
    JsonString *pIs_proxy_neededKey = new JsonString(L"is_proxy_needed");
    pJsonObject->Add(pIs_proxy_neededKey, toJson(getIs_proxy_needed(), "Boolean", ""));

    
    JsonString *pIs_mobile_proxy_neededKey = new JsonString(L"is_mobile_proxy_needed");
    pJsonObject->Add(pIs_mobile_proxy_neededKey, toJson(getIs_mobile_proxy_needed(), "Boolean", ""));

    
    JsonString *pIs_working_urlKey = new JsonString(L"is_working_url");
    pJsonObject->Add(pIs_working_urlKey, toJson(getIs_working_url(), "Boolean", ""));

    
    return pJsonObject;
}

String*
SamiArticle::get_id() {
    return p_id;
}
void
SamiArticle::set_id(String* p_id) {
    this->p_id = p_id;
}

String*
SamiArticle::getUrl() {
    return pUrl;
}
void
SamiArticle::setUrl(String* pUrl) {
    this->pUrl = pUrl;
}

String*
SamiArticle::getTitle() {
    return pTitle;
}
void
SamiArticle::setTitle(String* pTitle) {
    this->pTitle = pTitle;
}

String*
SamiArticle::getOpen_calais_topics() {
    return pOpen_calais_topics;
}
void
SamiArticle::setOpen_calais_topics(String* pOpen_calais_topics) {
    this->pOpen_calais_topics = pOpen_calais_topics;
}

String*
SamiArticle::getOpen_calais_keywords() {
    return pOpen_calais_keywords;
}
void
SamiArticle::setOpen_calais_keywords(String* pOpen_calais_keywords) {
    this->pOpen_calais_keywords = pOpen_calais_keywords;
}

String*
SamiArticle::getCategories() {
    return pCategories;
}
void
SamiArticle::setCategories(String* pCategories) {
    this->pCategories = pCategories;
}

String*
SamiArticle::getSummary() {
    return pSummary;
}
void
SamiArticle::setSummary(String* pSummary) {
    this->pSummary = pSummary;
}

String*
SamiArticle::getUnparsed_html() {
    return pUnparsed_html;
}
void
SamiArticle::setUnparsed_html(String* pUnparsed_html) {
    this->pUnparsed_html = pUnparsed_html;
}

String*
SamiArticle::getParsed_html() {
    return pParsed_html;
}
void
SamiArticle::setParsed_html(String* pParsed_html) {
    this->pParsed_html = pParsed_html;
}

String*
SamiArticle::getContent() {
    return pContent;
}
void
SamiArticle::setContent(String* pContent) {
    this->pContent = pContent;
}

String*
SamiArticle::getVestorly_topics() {
    return pVestorly_topics;
}
void
SamiArticle::setVestorly_topics(String* pVestorly_topics) {
    this->pVestorly_topics = pVestorly_topics;
}

String*
SamiArticle::getOverride_topic() {
    return pOverride_topic;
}
void
SamiArticle::setOverride_topic(String* pOverride_topic) {
    this->pOverride_topic = pOverride_topic;
}

SamiDatetime*
SamiArticle::getPublished_at() {
    return pPublished_at;
}
void
SamiArticle::setPublished_at(SamiDatetime* pPublished_at) {
    this->pPublished_at = pPublished_at;
}

String*
SamiArticle::getOriginal_image_url() {
    return pOriginal_image_url;
}
void
SamiArticle::setOriginal_image_url(String* pOriginal_image_url) {
    this->pOriginal_image_url = pOriginal_image_url;
}

String*
SamiArticle::getSmall_image_url() {
    return pSmall_image_url;
}
void
SamiArticle::setSmall_image_url(String* pSmall_image_url) {
    this->pSmall_image_url = pSmall_image_url;
}

String*
SamiArticle::getLarge_image_url() {
    return pLarge_image_url;
}
void
SamiArticle::setLarge_image_url(String* pLarge_image_url) {
    this->pLarge_image_url = pLarge_image_url;
}

String*
SamiArticle::getImg() {
    return pImg;
}
void
SamiArticle::setImg(String* pImg) {
    this->pImg = pImg;
}

String*
SamiArticle::getWebpage_mobile_image_url() {
    return pWebpage_mobile_image_url;
}
void
SamiArticle::setWebpage_mobile_image_url(String* pWebpage_mobile_image_url) {
    this->pWebpage_mobile_image_url = pWebpage_mobile_image_url;
}

String*
SamiArticle::getWebpage_tablet_image_url() {
    return pWebpage_tablet_image_url;
}
void
SamiArticle::setWebpage_tablet_image_url(String* pWebpage_tablet_image_url) {
    this->pWebpage_tablet_image_url = pWebpage_tablet_image_url;
}

String*
SamiArticle::getRss_feed_url() {
    return pRss_feed_url;
}
void
SamiArticle::setRss_feed_url(String* pRss_feed_url) {
    this->pRss_feed_url = pRss_feed_url;
}

String*
SamiArticle::getRss_feed_category() {
    return pRss_feed_category;
}
void
SamiArticle::setRss_feed_category(String* pRss_feed_category) {
    this->pRss_feed_category = pRss_feed_category;
}

String*
SamiArticle::getRss_feed_logo_url() {
    return pRss_feed_logo_url;
}
void
SamiArticle::setRss_feed_logo_url(String* pRss_feed_logo_url) {
    this->pRss_feed_logo_url = pRss_feed_logo_url;
}

Boolean*
SamiArticle::getNeeds_sanitize() {
    return pNeeds_sanitize;
}
void
SamiArticle::setNeeds_sanitize(Boolean* pNeeds_sanitize) {
    this->pNeeds_sanitize = pNeeds_sanitize;
}

Boolean*
SamiArticle::getIs_responsive() {
    return pIs_responsive;
}
void
SamiArticle::setIs_responsive(Boolean* pIs_responsive) {
    this->pIs_responsive = pIs_responsive;
}

Boolean*
SamiArticle::getIs_proxy_needed() {
    return pIs_proxy_needed;
}
void
SamiArticle::setIs_proxy_needed(Boolean* pIs_proxy_needed) {
    this->pIs_proxy_needed = pIs_proxy_needed;
}

Boolean*
SamiArticle::getIs_mobile_proxy_needed() {
    return pIs_mobile_proxy_needed;
}
void
SamiArticle::setIs_mobile_proxy_needed(Boolean* pIs_mobile_proxy_needed) {
    this->pIs_mobile_proxy_needed = pIs_mobile_proxy_needed;
}

Boolean*
SamiArticle::getIs_working_url() {
    return pIs_working_url;
}
void
SamiArticle::setIs_working_url(Boolean* pIs_working_url) {
    this->pIs_working_url = pIs_working_url;
}



} /* namespace Swagger */

