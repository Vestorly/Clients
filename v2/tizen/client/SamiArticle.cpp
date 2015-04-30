
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
    pCreated_at = null;
    pTitle = null;
    pOpen_calais_topics = null;
    pOpen_calais_keywords = null;
    pVestorly_topics = null;
    pCategories = null;
    pSummary = null;
    pUnparsed_html = null;
    pLogo_url = null;
    pImage_url = null;
    pUrl = null;
    pExternal_url = null;
    pTags = null;
    
}

void
SamiArticle::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pCreated_at != null) {
        
        delete pCreated_at;
        pCreated_at = null;
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
    if(pVestorly_topics != null) {
        
        delete pVestorly_topics;
        pVestorly_topics = null;
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
    if(pLogo_url != null) {
        
        delete pLogo_url;
        pLogo_url = null;
    }
    if(pImage_url != null) {
        
        delete pImage_url;
        pImage_url = null;
    }
    if(pUrl != null) {
        
        delete pUrl;
        pUrl = null;
    }
    if(pExternal_url != null) {
        
        delete pExternal_url;
        pExternal_url = null;
    }
    if(pTags != null) {
        
        delete pTags;
        pTags = null;
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
        JsonString* pCreated_atKey = new JsonString(L"created_at");
        IJsonValue* pCreated_atVal = null;
        pJsonObject->GetValue(pCreated_atKey, pCreated_atVal);
        if(pCreated_atVal != null) {
            
            pCreated_at = new String();
            jsonToValue(pCreated_at, pCreated_atVal, L"String", L"String");
        }
        delete pCreated_atKey;
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
        JsonString* pVestorly_topicsKey = new JsonString(L"vestorly_topics");
        IJsonValue* pVestorly_topicsVal = null;
        pJsonObject->GetValue(pVestorly_topicsKey, pVestorly_topicsVal);
        if(pVestorly_topicsVal != null) {
            
            pVestorly_topics = new String();
            jsonToValue(pVestorly_topics, pVestorly_topicsVal, L"String", L"String");
        }
        delete pVestorly_topicsKey;
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
        JsonString* pLogo_urlKey = new JsonString(L"logo_url");
        IJsonValue* pLogo_urlVal = null;
        pJsonObject->GetValue(pLogo_urlKey, pLogo_urlVal);
        if(pLogo_urlVal != null) {
            
            pLogo_url = new String();
            jsonToValue(pLogo_url, pLogo_urlVal, L"String", L"String");
        }
        delete pLogo_urlKey;
        JsonString* pImage_urlKey = new JsonString(L"image_url");
        IJsonValue* pImage_urlVal = null;
        pJsonObject->GetValue(pImage_urlKey, pImage_urlVal);
        if(pImage_urlVal != null) {
            
            pImage_url = new String();
            jsonToValue(pImage_url, pImage_urlVal, L"String", L"String");
        }
        delete pImage_urlKey;
        JsonString* pUrlKey = new JsonString(L"url");
        IJsonValue* pUrlVal = null;
        pJsonObject->GetValue(pUrlKey, pUrlVal);
        if(pUrlVal != null) {
            
            pUrl = new String();
            jsonToValue(pUrl, pUrlVal, L"String", L"String");
        }
        delete pUrlKey;
        JsonString* pExternal_urlKey = new JsonString(L"external_url");
        IJsonValue* pExternal_urlVal = null;
        pJsonObject->GetValue(pExternal_urlKey, pExternal_urlVal);
        if(pExternal_urlVal != null) {
            
            pExternal_url = new String();
            jsonToValue(pExternal_url, pExternal_urlVal, L"String", L"String");
        }
        delete pExternal_urlKey;
        JsonString* pTagsKey = new JsonString(L"tags");
        IJsonValue* pTagsVal = null;
        pJsonObject->GetValue(pTagsKey, pTagsVal);
        if(pTagsVal != null) {
            
            pTags = new String();
            jsonToValue(pTags, pTagsVal, L"String", L"String");
        }
        delete pTagsKey;
        
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
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "String", ""));

    
    JsonString *pTitleKey = new JsonString(L"title");
    pJsonObject->Add(pTitleKey, toJson(getPTitle(), "String", ""));

    
    JsonString *pOpen_calais_topicsKey = new JsonString(L"open_calais_topics");
    pJsonObject->Add(pOpen_calais_topicsKey, toJson(getPOpenCalaisTopics(), "String", ""));

    
    JsonString *pOpen_calais_keywordsKey = new JsonString(L"open_calais_keywords");
    pJsonObject->Add(pOpen_calais_keywordsKey, toJson(getPOpenCalaisKeywords(), "String", ""));

    
    JsonString *pVestorly_topicsKey = new JsonString(L"vestorly_topics");
    pJsonObject->Add(pVestorly_topicsKey, toJson(getPVestorlyTopics(), "String", ""));

    
    JsonString *pCategoriesKey = new JsonString(L"categories");
    pJsonObject->Add(pCategoriesKey, toJson(getPCategories(), "String", ""));

    
    JsonString *pSummaryKey = new JsonString(L"summary");
    pJsonObject->Add(pSummaryKey, toJson(getPSummary(), "String", ""));

    
    JsonString *pUnparsed_htmlKey = new JsonString(L"unparsed_html");
    pJsonObject->Add(pUnparsed_htmlKey, toJson(getPUnparsedHtml(), "String", ""));

    
    JsonString *pLogo_urlKey = new JsonString(L"logo_url");
    pJsonObject->Add(pLogo_urlKey, toJson(getPLogoUrl(), "String", ""));

    
    JsonString *pImage_urlKey = new JsonString(L"image_url");
    pJsonObject->Add(pImage_urlKey, toJson(getPImageUrl(), "String", ""));

    
    JsonString *pUrlKey = new JsonString(L"url");
    pJsonObject->Add(pUrlKey, toJson(getPUrl(), "String", ""));

    
    JsonString *pExternal_urlKey = new JsonString(L"external_url");
    pJsonObject->Add(pExternal_urlKey, toJson(getPExternalUrl(), "String", ""));

    
    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "String", ""));

    
    return pJsonObject;
}

String*
SamiArticle::getPId() {
    return p_id;
}
void
SamiArticle::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiArticle::getPCreatedAt() {
    return pCreated_at;
}
void
SamiArticle::setPCreatedAt(String* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

String*
SamiArticle::getPTitle() {
    return pTitle;
}
void
SamiArticle::setPTitle(String* pTitle) {
    this->pTitle = pTitle;
}

String*
SamiArticle::getPOpenCalaisTopics() {
    return pOpen_calais_topics;
}
void
SamiArticle::setPOpenCalaisTopics(String* pOpen_calais_topics) {
    this->pOpen_calais_topics = pOpen_calais_topics;
}

String*
SamiArticle::getPOpenCalaisKeywords() {
    return pOpen_calais_keywords;
}
void
SamiArticle::setPOpenCalaisKeywords(String* pOpen_calais_keywords) {
    this->pOpen_calais_keywords = pOpen_calais_keywords;
}

String*
SamiArticle::getPVestorlyTopics() {
    return pVestorly_topics;
}
void
SamiArticle::setPVestorlyTopics(String* pVestorly_topics) {
    this->pVestorly_topics = pVestorly_topics;
}

String*
SamiArticle::getPCategories() {
    return pCategories;
}
void
SamiArticle::setPCategories(String* pCategories) {
    this->pCategories = pCategories;
}

String*
SamiArticle::getPSummary() {
    return pSummary;
}
void
SamiArticle::setPSummary(String* pSummary) {
    this->pSummary = pSummary;
}

String*
SamiArticle::getPUnparsedHtml() {
    return pUnparsed_html;
}
void
SamiArticle::setPUnparsedHtml(String* pUnparsed_html) {
    this->pUnparsed_html = pUnparsed_html;
}

String*
SamiArticle::getPLogoUrl() {
    return pLogo_url;
}
void
SamiArticle::setPLogoUrl(String* pLogo_url) {
    this->pLogo_url = pLogo_url;
}

String*
SamiArticle::getPImageUrl() {
    return pImage_url;
}
void
SamiArticle::setPImageUrl(String* pImage_url) {
    this->pImage_url = pImage_url;
}

String*
SamiArticle::getPUrl() {
    return pUrl;
}
void
SamiArticle::setPUrl(String* pUrl) {
    this->pUrl = pUrl;
}

String*
SamiArticle::getPExternalUrl() {
    return pExternal_url;
}
void
SamiArticle::setPExternalUrl(String* pExternal_url) {
    this->pExternal_url = pExternal_url;
}

String*
SamiArticle::getPTags() {
    return pTags;
}
void
SamiArticle::setPTags(String* pTags) {
    this->pTags = pTags;
}



} /* namespace Swagger */

