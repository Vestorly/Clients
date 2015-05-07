
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
    pBody = null;
    pIs_responsive = null;
    pIs_proxy_needed = null;
    pIs_mobile_proxy_needed = null;
    pNeeds_sanitize = null;
    pProxy_url = null;
    pTopic = null;
    pSuitability_score = null;
    pSummary = null;
    pImage_path = null;
    pImage_url = null;
    pImage_height = null;
    pImage_width = null;
    pLogo_url = null;
    pSquare_logo_url = null;
    pUrl = null;
    pExternal_url = null;
    pExternal_url_source = null;
    pExternal_url_type = null;
    
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
    if(pBody != null) {
        
        delete pBody;
        pBody = null;
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
    if(pNeeds_sanitize != null) {
        
        delete pNeeds_sanitize;
        pNeeds_sanitize = null;
    }
    if(pProxy_url != null) {
        
        delete pProxy_url;
        pProxy_url = null;
    }
    if(pTopic != null) {
        
        delete pTopic;
        pTopic = null;
    }
    if(pSuitability_score != null) {
        
        delete pSuitability_score;
        pSuitability_score = null;
    }
    if(pSummary != null) {
        
        delete pSummary;
        pSummary = null;
    }
    if(pImage_path != null) {
        
        delete pImage_path;
        pImage_path = null;
    }
    if(pImage_url != null) {
        
        delete pImage_url;
        pImage_url = null;
    }
    if(pImage_height != null) {
        
        delete pImage_height;
        pImage_height = null;
    }
    if(pImage_width != null) {
        
        delete pImage_width;
        pImage_width = null;
    }
    if(pLogo_url != null) {
        
        delete pLogo_url;
        pLogo_url = null;
    }
    if(pSquare_logo_url != null) {
        
        delete pSquare_logo_url;
        pSquare_logo_url = null;
    }
    if(pUrl != null) {
        
        delete pUrl;
        pUrl = null;
    }
    if(pExternal_url != null) {
        
        delete pExternal_url;
        pExternal_url = null;
    }
    if(pExternal_url_source != null) {
        
        delete pExternal_url_source;
        pExternal_url_source = null;
    }
    if(pExternal_url_type != null) {
        
        delete pExternal_url_type;
        pExternal_url_type = null;
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
        JsonString* pBodyKey = new JsonString(L"body");
        IJsonValue* pBodyVal = null;
        pJsonObject->GetValue(pBodyKey, pBodyVal);
        if(pBodyVal != null) {
            
            pBody = new String();
            jsonToValue(pBody, pBodyVal, L"String", L"String");
        }
        delete pBodyKey;
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
        JsonString* pNeeds_sanitizeKey = new JsonString(L"needs_sanitize");
        IJsonValue* pNeeds_sanitizeVal = null;
        pJsonObject->GetValue(pNeeds_sanitizeKey, pNeeds_sanitizeVal);
        if(pNeeds_sanitizeVal != null) {
            
            pNeeds_sanitize = new Boolean(false);
            jsonToValue(pNeeds_sanitize, pNeeds_sanitizeVal, L"Boolean", L"Boolean");
        }
        delete pNeeds_sanitizeKey;
        JsonString* pProxy_urlKey = new JsonString(L"proxy_url");
        IJsonValue* pProxy_urlVal = null;
        pJsonObject->GetValue(pProxy_urlKey, pProxy_urlVal);
        if(pProxy_urlVal != null) {
            
            pProxy_url = new String();
            jsonToValue(pProxy_url, pProxy_urlVal, L"String", L"String");
        }
        delete pProxy_urlKey;
        JsonString* pTopicKey = new JsonString(L"topic");
        IJsonValue* pTopicVal = null;
        pJsonObject->GetValue(pTopicKey, pTopicVal);
        if(pTopicVal != null) {
            
            pTopic = new String();
            jsonToValue(pTopic, pTopicVal, L"String", L"String");
        }
        delete pTopicKey;
        JsonString* pSuitability_scoreKey = new JsonString(L"suitability_score");
        IJsonValue* pSuitability_scoreVal = null;
        pJsonObject->GetValue(pSuitability_scoreKey, pSuitability_scoreVal);
        if(pSuitability_scoreVal != null) {
            
            pSuitability_score = new String();
            jsonToValue(pSuitability_score, pSuitability_scoreVal, L"String", L"String");
        }
        delete pSuitability_scoreKey;
        JsonString* pSummaryKey = new JsonString(L"summary");
        IJsonValue* pSummaryVal = null;
        pJsonObject->GetValue(pSummaryKey, pSummaryVal);
        if(pSummaryVal != null) {
            
            pSummary = new String();
            jsonToValue(pSummary, pSummaryVal, L"String", L"String");
        }
        delete pSummaryKey;
        JsonString* pImage_pathKey = new JsonString(L"image_path");
        IJsonValue* pImage_pathVal = null;
        pJsonObject->GetValue(pImage_pathKey, pImage_pathVal);
        if(pImage_pathVal != null) {
            
            pImage_path = new String();
            jsonToValue(pImage_path, pImage_pathVal, L"String", L"String");
        }
        delete pImage_pathKey;
        JsonString* pImage_urlKey = new JsonString(L"image_url");
        IJsonValue* pImage_urlVal = null;
        pJsonObject->GetValue(pImage_urlKey, pImage_urlVal);
        if(pImage_urlVal != null) {
            
            pImage_url = new String();
            jsonToValue(pImage_url, pImage_urlVal, L"String", L"String");
        }
        delete pImage_urlKey;
        JsonString* pImage_heightKey = new JsonString(L"image_height");
        IJsonValue* pImage_heightVal = null;
        pJsonObject->GetValue(pImage_heightKey, pImage_heightVal);
        if(pImage_heightVal != null) {
            
            pImage_height = new Integer();
            jsonToValue(pImage_height, pImage_heightVal, L"Integer", L"Integer");
        }
        delete pImage_heightKey;
        JsonString* pImage_widthKey = new JsonString(L"image_width");
        IJsonValue* pImage_widthVal = null;
        pJsonObject->GetValue(pImage_widthKey, pImage_widthVal);
        if(pImage_widthVal != null) {
            
            pImage_width = new Integer();
            jsonToValue(pImage_width, pImage_widthVal, L"Integer", L"Integer");
        }
        delete pImage_widthKey;
        JsonString* pLogo_urlKey = new JsonString(L"logo_url");
        IJsonValue* pLogo_urlVal = null;
        pJsonObject->GetValue(pLogo_urlKey, pLogo_urlVal);
        if(pLogo_urlVal != null) {
            
            pLogo_url = new String();
            jsonToValue(pLogo_url, pLogo_urlVal, L"String", L"String");
        }
        delete pLogo_urlKey;
        JsonString* pSquare_logo_urlKey = new JsonString(L"square_logo_url");
        IJsonValue* pSquare_logo_urlVal = null;
        pJsonObject->GetValue(pSquare_logo_urlKey, pSquare_logo_urlVal);
        if(pSquare_logo_urlVal != null) {
            
            pSquare_logo_url = new String();
            jsonToValue(pSquare_logo_url, pSquare_logo_urlVal, L"String", L"String");
        }
        delete pSquare_logo_urlKey;
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
        JsonString* pExternal_url_sourceKey = new JsonString(L"external_url_source");
        IJsonValue* pExternal_url_sourceVal = null;
        pJsonObject->GetValue(pExternal_url_sourceKey, pExternal_url_sourceVal);
        if(pExternal_url_sourceVal != null) {
            
            pExternal_url_source = new String();
            jsonToValue(pExternal_url_source, pExternal_url_sourceVal, L"String", L"String");
        }
        delete pExternal_url_sourceKey;
        JsonString* pExternal_url_typeKey = new JsonString(L"external_url_type");
        IJsonValue* pExternal_url_typeVal = null;
        pJsonObject->GetValue(pExternal_url_typeKey, pExternal_url_typeVal);
        if(pExternal_url_typeVal != null) {
            
            pExternal_url_type = new String();
            jsonToValue(pExternal_url_type, pExternal_url_typeVal, L"String", L"String");
        }
        delete pExternal_url_typeKey;
        
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

    
    JsonString *pBodyKey = new JsonString(L"body");
    pJsonObject->Add(pBodyKey, toJson(getPBody(), "String", ""));

    
    JsonString *pIs_responsiveKey = new JsonString(L"is_responsive");
    pJsonObject->Add(pIs_responsiveKey, toJson(getPIsResponsive(), "Boolean", ""));

    
    JsonString *pIs_proxy_neededKey = new JsonString(L"is_proxy_needed");
    pJsonObject->Add(pIs_proxy_neededKey, toJson(getPIsProxyNeeded(), "Boolean", ""));

    
    JsonString *pIs_mobile_proxy_neededKey = new JsonString(L"is_mobile_proxy_needed");
    pJsonObject->Add(pIs_mobile_proxy_neededKey, toJson(getPIsMobileProxyNeeded(), "Boolean", ""));

    
    JsonString *pNeeds_sanitizeKey = new JsonString(L"needs_sanitize");
    pJsonObject->Add(pNeeds_sanitizeKey, toJson(getPNeedsSanitize(), "Boolean", ""));

    
    JsonString *pProxy_urlKey = new JsonString(L"proxy_url");
    pJsonObject->Add(pProxy_urlKey, toJson(getPProxyUrl(), "String", ""));

    
    JsonString *pTopicKey = new JsonString(L"topic");
    pJsonObject->Add(pTopicKey, toJson(getPTopic(), "String", ""));

    
    JsonString *pSuitability_scoreKey = new JsonString(L"suitability_score");
    pJsonObject->Add(pSuitability_scoreKey, toJson(getPSuitabilityScore(), "String", ""));

    
    JsonString *pSummaryKey = new JsonString(L"summary");
    pJsonObject->Add(pSummaryKey, toJson(getPSummary(), "String", ""));

    
    JsonString *pImage_pathKey = new JsonString(L"image_path");
    pJsonObject->Add(pImage_pathKey, toJson(getPImagePath(), "String", ""));

    
    JsonString *pImage_urlKey = new JsonString(L"image_url");
    pJsonObject->Add(pImage_urlKey, toJson(getPImageUrl(), "String", ""));

    
    JsonString *pImage_heightKey = new JsonString(L"image_height");
    pJsonObject->Add(pImage_heightKey, toJson(getPImageHeight(), "Integer", ""));

    
    JsonString *pImage_widthKey = new JsonString(L"image_width");
    pJsonObject->Add(pImage_widthKey, toJson(getPImageWidth(), "Integer", ""));

    
    JsonString *pLogo_urlKey = new JsonString(L"logo_url");
    pJsonObject->Add(pLogo_urlKey, toJson(getPLogoUrl(), "String", ""));

    
    JsonString *pSquare_logo_urlKey = new JsonString(L"square_logo_url");
    pJsonObject->Add(pSquare_logo_urlKey, toJson(getPSquareLogoUrl(), "String", ""));

    
    JsonString *pUrlKey = new JsonString(L"url");
    pJsonObject->Add(pUrlKey, toJson(getPUrl(), "String", ""));

    
    JsonString *pExternal_urlKey = new JsonString(L"external_url");
    pJsonObject->Add(pExternal_urlKey, toJson(getPExternalUrl(), "String", ""));

    
    JsonString *pExternal_url_sourceKey = new JsonString(L"external_url_source");
    pJsonObject->Add(pExternal_url_sourceKey, toJson(getPExternalUrlSource(), "String", ""));

    
    JsonString *pExternal_url_typeKey = new JsonString(L"external_url_type");
    pJsonObject->Add(pExternal_url_typeKey, toJson(getPExternalUrlType(), "String", ""));

    
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
SamiArticle::getPBody() {
    return pBody;
}
void
SamiArticle::setPBody(String* pBody) {
    this->pBody = pBody;
}

Boolean*
SamiArticle::getPIsResponsive() {
    return pIs_responsive;
}
void
SamiArticle::setPIsResponsive(Boolean* pIs_responsive) {
    this->pIs_responsive = pIs_responsive;
}

Boolean*
SamiArticle::getPIsProxyNeeded() {
    return pIs_proxy_needed;
}
void
SamiArticle::setPIsProxyNeeded(Boolean* pIs_proxy_needed) {
    this->pIs_proxy_needed = pIs_proxy_needed;
}

Boolean*
SamiArticle::getPIsMobileProxyNeeded() {
    return pIs_mobile_proxy_needed;
}
void
SamiArticle::setPIsMobileProxyNeeded(Boolean* pIs_mobile_proxy_needed) {
    this->pIs_mobile_proxy_needed = pIs_mobile_proxy_needed;
}

Boolean*
SamiArticle::getPNeedsSanitize() {
    return pNeeds_sanitize;
}
void
SamiArticle::setPNeedsSanitize(Boolean* pNeeds_sanitize) {
    this->pNeeds_sanitize = pNeeds_sanitize;
}

String*
SamiArticle::getPProxyUrl() {
    return pProxy_url;
}
void
SamiArticle::setPProxyUrl(String* pProxy_url) {
    this->pProxy_url = pProxy_url;
}

String*
SamiArticle::getPTopic() {
    return pTopic;
}
void
SamiArticle::setPTopic(String* pTopic) {
    this->pTopic = pTopic;
}

String*
SamiArticle::getPSuitabilityScore() {
    return pSuitability_score;
}
void
SamiArticle::setPSuitabilityScore(String* pSuitability_score) {
    this->pSuitability_score = pSuitability_score;
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
SamiArticle::getPImagePath() {
    return pImage_path;
}
void
SamiArticle::setPImagePath(String* pImage_path) {
    this->pImage_path = pImage_path;
}

String*
SamiArticle::getPImageUrl() {
    return pImage_url;
}
void
SamiArticle::setPImageUrl(String* pImage_url) {
    this->pImage_url = pImage_url;
}

Integer*
SamiArticle::getPImageHeight() {
    return pImage_height;
}
void
SamiArticle::setPImageHeight(Integer* pImage_height) {
    this->pImage_height = pImage_height;
}

Integer*
SamiArticle::getPImageWidth() {
    return pImage_width;
}
void
SamiArticle::setPImageWidth(Integer* pImage_width) {
    this->pImage_width = pImage_width;
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
SamiArticle::getPSquareLogoUrl() {
    return pSquare_logo_url;
}
void
SamiArticle::setPSquareLogoUrl(String* pSquare_logo_url) {
    this->pSquare_logo_url = pSquare_logo_url;
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
SamiArticle::getPExternalUrlSource() {
    return pExternal_url_source;
}
void
SamiArticle::setPExternalUrlSource(String* pExternal_url_source) {
    this->pExternal_url_source = pExternal_url_source;
}

String*
SamiArticle::getPExternalUrlType() {
    return pExternal_url_type;
}
void
SamiArticle::setPExternalUrlType(String* pExternal_url_type) {
    this->pExternal_url_type = pExternal_url_type;
}



} /* namespace Swagger */

