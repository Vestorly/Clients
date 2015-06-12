
#include "SamiPostInput.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPostInput::SamiPostInput() {
    init();
}

SamiPostInput::~SamiPostInput() {
    this->cleanup();
}

void
SamiPostInput::init() {
    pCreated_at = null;
    pUpdated_at = null;
    pExternal_url = null;
    pExternal_url_source = null;
    pExternal_url_type = null;
    pImage_path = null;
    pImage_url = null;
    pImage_height = null;
    pImage_width = null;
    pLogo_url = null;
    pSquare_logo_url = null;
    pNeeds_sanitize = null;
    pSummary = null;
    pTopic = null;
    pApproval_status = null;
    pApproval_transactions = null;
    pGroup_ids = null;
    pSlug = null;
    pArticle_id = null;
    pComment = null;
    pNewsletter_ids = null;
    pIs_featured = null;
    pAdvisor_id = null;
    pIs_published = null;
    pIs_responsive = null;
    pIs_proxy_needed = null;
    pIs_mobile_proxy_needed = null;
    pProxy_url = null;
    pVideo = null;
    pPdf_attachment_url = null;
    pPost_date = null;
    pDisplay_date = null;
    pSuitability_score = null;
    pVideo_id = null;
    pDisplay_tag = null;
    pDisplay_summary = null;
    pVestorly_url = null;
    pTitle = null;
    
}

void
SamiPostInput::cleanup() {
    if(pCreated_at != null) {
        
        delete pCreated_at;
        pCreated_at = null;
    }
    if(pUpdated_at != null) {
        
        delete pUpdated_at;
        pUpdated_at = null;
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
    if(pNeeds_sanitize != null) {
        
        delete pNeeds_sanitize;
        pNeeds_sanitize = null;
    }
    if(pSummary != null) {
        
        delete pSummary;
        pSummary = null;
    }
    if(pTopic != null) {
        
        delete pTopic;
        pTopic = null;
    }
    if(pApproval_status != null) {
        
        delete pApproval_status;
        pApproval_status = null;
    }
    if(pApproval_transactions != null) {
        pApproval_transactions->RemoveAll(true);
        delete pApproval_transactions;
        pApproval_transactions = null;
    }
    if(pGroup_ids != null) {
        pGroup_ids->RemoveAll(true);
        delete pGroup_ids;
        pGroup_ids = null;
    }
    if(pSlug != null) {
        
        delete pSlug;
        pSlug = null;
    }
    if(pArticle_id != null) {
        
        delete pArticle_id;
        pArticle_id = null;
    }
    if(pComment != null) {
        
        delete pComment;
        pComment = null;
    }
    if(pNewsletter_ids != null) {
        pNewsletter_ids->RemoveAll(true);
        delete pNewsletter_ids;
        pNewsletter_ids = null;
    }
    if(pIs_featured != null) {
        
        delete pIs_featured;
        pIs_featured = null;
    }
    if(pAdvisor_id != null) {
        
        delete pAdvisor_id;
        pAdvisor_id = null;
    }
    if(pIs_published != null) {
        
        delete pIs_published;
        pIs_published = null;
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
    if(pProxy_url != null) {
        
        delete pProxy_url;
        pProxy_url = null;
    }
    if(pVideo != null) {
        
        delete pVideo;
        pVideo = null;
    }
    if(pPdf_attachment_url != null) {
        
        delete pPdf_attachment_url;
        pPdf_attachment_url = null;
    }
    if(pPost_date != null) {
        
        delete pPost_date;
        pPost_date = null;
    }
    if(pDisplay_date != null) {
        
        delete pDisplay_date;
        pDisplay_date = null;
    }
    if(pSuitability_score != null) {
        
        delete pSuitability_score;
        pSuitability_score = null;
    }
    if(pVideo_id != null) {
        
        delete pVideo_id;
        pVideo_id = null;
    }
    if(pDisplay_tag != null) {
        
        delete pDisplay_tag;
        pDisplay_tag = null;
    }
    if(pDisplay_summary != null) {
        
        delete pDisplay_summary;
        pDisplay_summary = null;
    }
    if(pVestorly_url != null) {
        
        delete pVestorly_url;
        pVestorly_url = null;
    }
    if(pTitle != null) {
        
        delete pTitle;
        pTitle = null;
    }
    
}


SamiPostInput*
SamiPostInput::fromJson(String* json) {
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
SamiPostInput::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCreated_atKey = new JsonString(L"created_at");
        IJsonValue* pCreated_atVal = null;
        pJsonObject->GetValue(pCreated_atKey, pCreated_atVal);
        if(pCreated_atVal != null) {
            
            pCreated_at = new String();
            jsonToValue(pCreated_at, pCreated_atVal, L"String", L"String");
        }
        delete pCreated_atKey;
        JsonString* pUpdated_atKey = new JsonString(L"updated_at");
        IJsonValue* pUpdated_atVal = null;
        pJsonObject->GetValue(pUpdated_atKey, pUpdated_atVal);
        if(pUpdated_atVal != null) {
            
            pUpdated_at = new String();
            jsonToValue(pUpdated_at, pUpdated_atVal, L"String", L"String");
        }
        delete pUpdated_atKey;
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
            
            pImage_height = new String();
            jsonToValue(pImage_height, pImage_heightVal, L"String", L"String");
        }
        delete pImage_heightKey;
        JsonString* pImage_widthKey = new JsonString(L"image_width");
        IJsonValue* pImage_widthVal = null;
        pJsonObject->GetValue(pImage_widthKey, pImage_widthVal);
        if(pImage_widthVal != null) {
            
            pImage_width = new String();
            jsonToValue(pImage_width, pImage_widthVal, L"String", L"String");
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
        JsonString* pNeeds_sanitizeKey = new JsonString(L"needs_sanitize");
        IJsonValue* pNeeds_sanitizeVal = null;
        pJsonObject->GetValue(pNeeds_sanitizeKey, pNeeds_sanitizeVal);
        if(pNeeds_sanitizeVal != null) {
            
            pNeeds_sanitize = new String();
            jsonToValue(pNeeds_sanitize, pNeeds_sanitizeVal, L"String", L"String");
        }
        delete pNeeds_sanitizeKey;
        JsonString* pSummaryKey = new JsonString(L"summary");
        IJsonValue* pSummaryVal = null;
        pJsonObject->GetValue(pSummaryKey, pSummaryVal);
        if(pSummaryVal != null) {
            
            pSummary = new String();
            jsonToValue(pSummary, pSummaryVal, L"String", L"String");
        }
        delete pSummaryKey;
        JsonString* pTopicKey = new JsonString(L"topic");
        IJsonValue* pTopicVal = null;
        pJsonObject->GetValue(pTopicKey, pTopicVal);
        if(pTopicVal != null) {
            
            pTopic = new String();
            jsonToValue(pTopic, pTopicVal, L"String", L"String");
        }
        delete pTopicKey;
        JsonString* pApproval_statusKey = new JsonString(L"approval_status");
        IJsonValue* pApproval_statusVal = null;
        pJsonObject->GetValue(pApproval_statusKey, pApproval_statusVal);
        if(pApproval_statusVal != null) {
            
            pApproval_status = new String();
            jsonToValue(pApproval_status, pApproval_statusVal, L"String", L"String");
        }
        delete pApproval_statusKey;
        JsonString* pApproval_transactionsKey = new JsonString(L"approval_transactions");
        IJsonValue* pApproval_transactionsVal = null;
        pJsonObject->GetValue(pApproval_transactionsKey, pApproval_transactionsVal);
        if(pApproval_transactionsVal != null) {
            pApproval_transactions = new ArrayList();
            
            jsonToValue(pApproval_transactions, pApproval_transactionsVal, L"IList", L"String");
        }
        delete pApproval_transactionsKey;
        JsonString* pGroup_idsKey = new JsonString(L"group_ids");
        IJsonValue* pGroup_idsVal = null;
        pJsonObject->GetValue(pGroup_idsKey, pGroup_idsVal);
        if(pGroup_idsVal != null) {
            pGroup_ids = new ArrayList();
            
            jsonToValue(pGroup_ids, pGroup_idsVal, L"IList", L"String");
        }
        delete pGroup_idsKey;
        JsonString* pSlugKey = new JsonString(L"slug");
        IJsonValue* pSlugVal = null;
        pJsonObject->GetValue(pSlugKey, pSlugVal);
        if(pSlugVal != null) {
            
            pSlug = new String();
            jsonToValue(pSlug, pSlugVal, L"String", L"String");
        }
        delete pSlugKey;
        JsonString* pArticle_idKey = new JsonString(L"article_id");
        IJsonValue* pArticle_idVal = null;
        pJsonObject->GetValue(pArticle_idKey, pArticle_idVal);
        if(pArticle_idVal != null) {
            
            pArticle_id = new String();
            jsonToValue(pArticle_id, pArticle_idVal, L"String", L"String");
        }
        delete pArticle_idKey;
        JsonString* pCommentKey = new JsonString(L"comment");
        IJsonValue* pCommentVal = null;
        pJsonObject->GetValue(pCommentKey, pCommentVal);
        if(pCommentVal != null) {
            
            pComment = new String();
            jsonToValue(pComment, pCommentVal, L"String", L"String");
        }
        delete pCommentKey;
        JsonString* pNewsletter_idsKey = new JsonString(L"newsletter_ids");
        IJsonValue* pNewsletter_idsVal = null;
        pJsonObject->GetValue(pNewsletter_idsKey, pNewsletter_idsVal);
        if(pNewsletter_idsVal != null) {
            pNewsletter_ids = new ArrayList();
            
            jsonToValue(pNewsletter_ids, pNewsletter_idsVal, L"IList", L"String");
        }
        delete pNewsletter_idsKey;
        JsonString* pIs_featuredKey = new JsonString(L"is_featured");
        IJsonValue* pIs_featuredVal = null;
        pJsonObject->GetValue(pIs_featuredKey, pIs_featuredVal);
        if(pIs_featuredVal != null) {
            
            pIs_featured = new Boolean(false);
            jsonToValue(pIs_featured, pIs_featuredVal, L"Boolean", L"Boolean");
        }
        delete pIs_featuredKey;
        JsonString* pAdvisor_idKey = new JsonString(L"advisor_id");
        IJsonValue* pAdvisor_idVal = null;
        pJsonObject->GetValue(pAdvisor_idKey, pAdvisor_idVal);
        if(pAdvisor_idVal != null) {
            
            pAdvisor_id = new String();
            jsonToValue(pAdvisor_id, pAdvisor_idVal, L"String", L"String");
        }
        delete pAdvisor_idKey;
        JsonString* pIs_publishedKey = new JsonString(L"is_published");
        IJsonValue* pIs_publishedVal = null;
        pJsonObject->GetValue(pIs_publishedKey, pIs_publishedVal);
        if(pIs_publishedVal != null) {
            
            pIs_published = new Boolean(false);
            jsonToValue(pIs_published, pIs_publishedVal, L"Boolean", L"Boolean");
        }
        delete pIs_publishedKey;
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
        JsonString* pProxy_urlKey = new JsonString(L"proxy_url");
        IJsonValue* pProxy_urlVal = null;
        pJsonObject->GetValue(pProxy_urlKey, pProxy_urlVal);
        if(pProxy_urlVal != null) {
            
            pProxy_url = new String();
            jsonToValue(pProxy_url, pProxy_urlVal, L"String", L"String");
        }
        delete pProxy_urlKey;
        JsonString* pVideoKey = new JsonString(L"video");
        IJsonValue* pVideoVal = null;
        pJsonObject->GetValue(pVideoKey, pVideoVal);
        if(pVideoVal != null) {
            
            pVideo = new String();
            jsonToValue(pVideo, pVideoVal, L"String", L"String");
        }
        delete pVideoKey;
        JsonString* pPdf_attachment_urlKey = new JsonString(L"pdf_attachment_url");
        IJsonValue* pPdf_attachment_urlVal = null;
        pJsonObject->GetValue(pPdf_attachment_urlKey, pPdf_attachment_urlVal);
        if(pPdf_attachment_urlVal != null) {
            
            pPdf_attachment_url = new String();
            jsonToValue(pPdf_attachment_url, pPdf_attachment_urlVal, L"String", L"String");
        }
        delete pPdf_attachment_urlKey;
        JsonString* pPost_dateKey = new JsonString(L"post_date");
        IJsonValue* pPost_dateVal = null;
        pJsonObject->GetValue(pPost_dateKey, pPost_dateVal);
        if(pPost_dateVal != null) {
            
            pPost_date = new String();
            jsonToValue(pPost_date, pPost_dateVal, L"String", L"String");
        }
        delete pPost_dateKey;
        JsonString* pDisplay_dateKey = new JsonString(L"display_date");
        IJsonValue* pDisplay_dateVal = null;
        pJsonObject->GetValue(pDisplay_dateKey, pDisplay_dateVal);
        if(pDisplay_dateVal != null) {
            
            pDisplay_date = new String();
            jsonToValue(pDisplay_date, pDisplay_dateVal, L"String", L"String");
        }
        delete pDisplay_dateKey;
        JsonString* pSuitability_scoreKey = new JsonString(L"suitability_score");
        IJsonValue* pSuitability_scoreVal = null;
        pJsonObject->GetValue(pSuitability_scoreKey, pSuitability_scoreVal);
        if(pSuitability_scoreVal != null) {
            
            pSuitability_score = new String();
            jsonToValue(pSuitability_score, pSuitability_scoreVal, L"String", L"String");
        }
        delete pSuitability_scoreKey;
        JsonString* pVideo_idKey = new JsonString(L"video_id");
        IJsonValue* pVideo_idVal = null;
        pJsonObject->GetValue(pVideo_idKey, pVideo_idVal);
        if(pVideo_idVal != null) {
            
            pVideo_id = new String();
            jsonToValue(pVideo_id, pVideo_idVal, L"String", L"String");
        }
        delete pVideo_idKey;
        JsonString* pDisplay_tagKey = new JsonString(L"display_tag");
        IJsonValue* pDisplay_tagVal = null;
        pJsonObject->GetValue(pDisplay_tagKey, pDisplay_tagVal);
        if(pDisplay_tagVal != null) {
            
            pDisplay_tag = new String();
            jsonToValue(pDisplay_tag, pDisplay_tagVal, L"String", L"String");
        }
        delete pDisplay_tagKey;
        JsonString* pDisplay_summaryKey = new JsonString(L"display_summary");
        IJsonValue* pDisplay_summaryVal = null;
        pJsonObject->GetValue(pDisplay_summaryKey, pDisplay_summaryVal);
        if(pDisplay_summaryVal != null) {
            
            pDisplay_summary = new String();
            jsonToValue(pDisplay_summary, pDisplay_summaryVal, L"String", L"String");
        }
        delete pDisplay_summaryKey;
        JsonString* pVestorly_urlKey = new JsonString(L"vestorly_url");
        IJsonValue* pVestorly_urlVal = null;
        pJsonObject->GetValue(pVestorly_urlKey, pVestorly_urlVal);
        if(pVestorly_urlVal != null) {
            
            pVestorly_url = new String();
            jsonToValue(pVestorly_url, pVestorly_urlVal, L"String", L"String");
        }
        delete pVestorly_urlKey;
        JsonString* pTitleKey = new JsonString(L"title");
        IJsonValue* pTitleVal = null;
        pJsonObject->GetValue(pTitleKey, pTitleVal);
        if(pTitleVal != null) {
            
            pTitle = new String();
            jsonToValue(pTitle, pTitleVal, L"String", L"String");
        }
        delete pTitleKey;
        
    }
}

SamiPostInput::SamiPostInput(String* json) {
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
SamiPostInput::asJson ()
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
SamiPostInput::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "String", ""));

    
    JsonString *pUpdated_atKey = new JsonString(L"updated_at");
    pJsonObject->Add(pUpdated_atKey, toJson(getPUpdatedAt(), "String", ""));

    
    JsonString *pExternal_urlKey = new JsonString(L"external_url");
    pJsonObject->Add(pExternal_urlKey, toJson(getPExternalUrl(), "String", ""));

    
    JsonString *pExternal_url_sourceKey = new JsonString(L"external_url_source");
    pJsonObject->Add(pExternal_url_sourceKey, toJson(getPExternalUrlSource(), "String", ""));

    
    JsonString *pExternal_url_typeKey = new JsonString(L"external_url_type");
    pJsonObject->Add(pExternal_url_typeKey, toJson(getPExternalUrlType(), "String", ""));

    
    JsonString *pImage_pathKey = new JsonString(L"image_path");
    pJsonObject->Add(pImage_pathKey, toJson(getPImagePath(), "String", ""));

    
    JsonString *pImage_urlKey = new JsonString(L"image_url");
    pJsonObject->Add(pImage_urlKey, toJson(getPImageUrl(), "String", ""));

    
    JsonString *pImage_heightKey = new JsonString(L"image_height");
    pJsonObject->Add(pImage_heightKey, toJson(getPImageHeight(), "String", ""));

    
    JsonString *pImage_widthKey = new JsonString(L"image_width");
    pJsonObject->Add(pImage_widthKey, toJson(getPImageWidth(), "String", ""));

    
    JsonString *pLogo_urlKey = new JsonString(L"logo_url");
    pJsonObject->Add(pLogo_urlKey, toJson(getPLogoUrl(), "String", ""));

    
    JsonString *pSquare_logo_urlKey = new JsonString(L"square_logo_url");
    pJsonObject->Add(pSquare_logo_urlKey, toJson(getPSquareLogoUrl(), "String", ""));

    
    JsonString *pNeeds_sanitizeKey = new JsonString(L"needs_sanitize");
    pJsonObject->Add(pNeeds_sanitizeKey, toJson(getPNeedsSanitize(), "String", ""));

    
    JsonString *pSummaryKey = new JsonString(L"summary");
    pJsonObject->Add(pSummaryKey, toJson(getPSummary(), "String", ""));

    
    JsonString *pTopicKey = new JsonString(L"topic");
    pJsonObject->Add(pTopicKey, toJson(getPTopic(), "String", ""));

    
    JsonString *pApproval_statusKey = new JsonString(L"approval_status");
    pJsonObject->Add(pApproval_statusKey, toJson(getPApprovalStatus(), "String", ""));

    
    JsonString *pApproval_transactionsKey = new JsonString(L"approval_transactions");
    pJsonObject->Add(pApproval_transactionsKey, toJson(getPApprovalTransactions(), "String", "array"));

    
    JsonString *pGroup_idsKey = new JsonString(L"group_ids");
    pJsonObject->Add(pGroup_idsKey, toJson(getPGroupIds(), "String", "array"));

    
    JsonString *pSlugKey = new JsonString(L"slug");
    pJsonObject->Add(pSlugKey, toJson(getPSlug(), "String", ""));

    
    JsonString *pArticle_idKey = new JsonString(L"article_id");
    pJsonObject->Add(pArticle_idKey, toJson(getPArticleId(), "String", ""));

    
    JsonString *pCommentKey = new JsonString(L"comment");
    pJsonObject->Add(pCommentKey, toJson(getPComment(), "String", ""));

    
    JsonString *pNewsletter_idsKey = new JsonString(L"newsletter_ids");
    pJsonObject->Add(pNewsletter_idsKey, toJson(getPNewsletterIds(), "String", "array"));

    
    JsonString *pIs_featuredKey = new JsonString(L"is_featured");
    pJsonObject->Add(pIs_featuredKey, toJson(getPIsFeatured(), "Boolean", ""));

    
    JsonString *pAdvisor_idKey = new JsonString(L"advisor_id");
    pJsonObject->Add(pAdvisor_idKey, toJson(getPAdvisorId(), "String", ""));

    
    JsonString *pIs_publishedKey = new JsonString(L"is_published");
    pJsonObject->Add(pIs_publishedKey, toJson(getPIsPublished(), "Boolean", ""));

    
    JsonString *pIs_responsiveKey = new JsonString(L"is_responsive");
    pJsonObject->Add(pIs_responsiveKey, toJson(getPIsResponsive(), "Boolean", ""));

    
    JsonString *pIs_proxy_neededKey = new JsonString(L"is_proxy_needed");
    pJsonObject->Add(pIs_proxy_neededKey, toJson(getPIsProxyNeeded(), "Boolean", ""));

    
    JsonString *pIs_mobile_proxy_neededKey = new JsonString(L"is_mobile_proxy_needed");
    pJsonObject->Add(pIs_mobile_proxy_neededKey, toJson(getPIsMobileProxyNeeded(), "Boolean", ""));

    
    JsonString *pProxy_urlKey = new JsonString(L"proxy_url");
    pJsonObject->Add(pProxy_urlKey, toJson(getPProxyUrl(), "String", ""));

    
    JsonString *pVideoKey = new JsonString(L"video");
    pJsonObject->Add(pVideoKey, toJson(getPVideo(), "String", ""));

    
    JsonString *pPdf_attachment_urlKey = new JsonString(L"pdf_attachment_url");
    pJsonObject->Add(pPdf_attachment_urlKey, toJson(getPPdfAttachmentUrl(), "String", ""));

    
    JsonString *pPost_dateKey = new JsonString(L"post_date");
    pJsonObject->Add(pPost_dateKey, toJson(getPPostDate(), "String", ""));

    
    JsonString *pDisplay_dateKey = new JsonString(L"display_date");
    pJsonObject->Add(pDisplay_dateKey, toJson(getPDisplayDate(), "String", ""));

    
    JsonString *pSuitability_scoreKey = new JsonString(L"suitability_score");
    pJsonObject->Add(pSuitability_scoreKey, toJson(getPSuitabilityScore(), "String", ""));

    
    JsonString *pVideo_idKey = new JsonString(L"video_id");
    pJsonObject->Add(pVideo_idKey, toJson(getPVideoId(), "String", ""));

    
    JsonString *pDisplay_tagKey = new JsonString(L"display_tag");
    pJsonObject->Add(pDisplay_tagKey, toJson(getPDisplayTag(), "String", ""));

    
    JsonString *pDisplay_summaryKey = new JsonString(L"display_summary");
    pJsonObject->Add(pDisplay_summaryKey, toJson(getPDisplaySummary(), "String", ""));

    
    JsonString *pVestorly_urlKey = new JsonString(L"vestorly_url");
    pJsonObject->Add(pVestorly_urlKey, toJson(getPVestorlyUrl(), "String", ""));

    
    JsonString *pTitleKey = new JsonString(L"title");
    pJsonObject->Add(pTitleKey, toJson(getPTitle(), "String", ""));

    
    return pJsonObject;
}

String*
SamiPostInput::getPCreatedAt() {
    return pCreated_at;
}
void
SamiPostInput::setPCreatedAt(String* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

String*
SamiPostInput::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiPostInput::setPUpdatedAt(String* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}

String*
SamiPostInput::getPExternalUrl() {
    return pExternal_url;
}
void
SamiPostInput::setPExternalUrl(String* pExternal_url) {
    this->pExternal_url = pExternal_url;
}

String*
SamiPostInput::getPExternalUrlSource() {
    return pExternal_url_source;
}
void
SamiPostInput::setPExternalUrlSource(String* pExternal_url_source) {
    this->pExternal_url_source = pExternal_url_source;
}

String*
SamiPostInput::getPExternalUrlType() {
    return pExternal_url_type;
}
void
SamiPostInput::setPExternalUrlType(String* pExternal_url_type) {
    this->pExternal_url_type = pExternal_url_type;
}

String*
SamiPostInput::getPImagePath() {
    return pImage_path;
}
void
SamiPostInput::setPImagePath(String* pImage_path) {
    this->pImage_path = pImage_path;
}

String*
SamiPostInput::getPImageUrl() {
    return pImage_url;
}
void
SamiPostInput::setPImageUrl(String* pImage_url) {
    this->pImage_url = pImage_url;
}

String*
SamiPostInput::getPImageHeight() {
    return pImage_height;
}
void
SamiPostInput::setPImageHeight(String* pImage_height) {
    this->pImage_height = pImage_height;
}

String*
SamiPostInput::getPImageWidth() {
    return pImage_width;
}
void
SamiPostInput::setPImageWidth(String* pImage_width) {
    this->pImage_width = pImage_width;
}

String*
SamiPostInput::getPLogoUrl() {
    return pLogo_url;
}
void
SamiPostInput::setPLogoUrl(String* pLogo_url) {
    this->pLogo_url = pLogo_url;
}

String*
SamiPostInput::getPSquareLogoUrl() {
    return pSquare_logo_url;
}
void
SamiPostInput::setPSquareLogoUrl(String* pSquare_logo_url) {
    this->pSquare_logo_url = pSquare_logo_url;
}

String*
SamiPostInput::getPNeedsSanitize() {
    return pNeeds_sanitize;
}
void
SamiPostInput::setPNeedsSanitize(String* pNeeds_sanitize) {
    this->pNeeds_sanitize = pNeeds_sanitize;
}

String*
SamiPostInput::getPSummary() {
    return pSummary;
}
void
SamiPostInput::setPSummary(String* pSummary) {
    this->pSummary = pSummary;
}

String*
SamiPostInput::getPTopic() {
    return pTopic;
}
void
SamiPostInput::setPTopic(String* pTopic) {
    this->pTopic = pTopic;
}

String*
SamiPostInput::getPApprovalStatus() {
    return pApproval_status;
}
void
SamiPostInput::setPApprovalStatus(String* pApproval_status) {
    this->pApproval_status = pApproval_status;
}

IList*
SamiPostInput::getPApprovalTransactions() {
    return pApproval_transactions;
}
void
SamiPostInput::setPApprovalTransactions(IList* pApproval_transactions) {
    this->pApproval_transactions = pApproval_transactions;
}

IList*
SamiPostInput::getPGroupIds() {
    return pGroup_ids;
}
void
SamiPostInput::setPGroupIds(IList* pGroup_ids) {
    this->pGroup_ids = pGroup_ids;
}

String*
SamiPostInput::getPSlug() {
    return pSlug;
}
void
SamiPostInput::setPSlug(String* pSlug) {
    this->pSlug = pSlug;
}

String*
SamiPostInput::getPArticleId() {
    return pArticle_id;
}
void
SamiPostInput::setPArticleId(String* pArticle_id) {
    this->pArticle_id = pArticle_id;
}

String*
SamiPostInput::getPComment() {
    return pComment;
}
void
SamiPostInput::setPComment(String* pComment) {
    this->pComment = pComment;
}

IList*
SamiPostInput::getPNewsletterIds() {
    return pNewsletter_ids;
}
void
SamiPostInput::setPNewsletterIds(IList* pNewsletter_ids) {
    this->pNewsletter_ids = pNewsletter_ids;
}

Boolean*
SamiPostInput::getPIsFeatured() {
    return pIs_featured;
}
void
SamiPostInput::setPIsFeatured(Boolean* pIs_featured) {
    this->pIs_featured = pIs_featured;
}

String*
SamiPostInput::getPAdvisorId() {
    return pAdvisor_id;
}
void
SamiPostInput::setPAdvisorId(String* pAdvisor_id) {
    this->pAdvisor_id = pAdvisor_id;
}

Boolean*
SamiPostInput::getPIsPublished() {
    return pIs_published;
}
void
SamiPostInput::setPIsPublished(Boolean* pIs_published) {
    this->pIs_published = pIs_published;
}

Boolean*
SamiPostInput::getPIsResponsive() {
    return pIs_responsive;
}
void
SamiPostInput::setPIsResponsive(Boolean* pIs_responsive) {
    this->pIs_responsive = pIs_responsive;
}

Boolean*
SamiPostInput::getPIsProxyNeeded() {
    return pIs_proxy_needed;
}
void
SamiPostInput::setPIsProxyNeeded(Boolean* pIs_proxy_needed) {
    this->pIs_proxy_needed = pIs_proxy_needed;
}

Boolean*
SamiPostInput::getPIsMobileProxyNeeded() {
    return pIs_mobile_proxy_needed;
}
void
SamiPostInput::setPIsMobileProxyNeeded(Boolean* pIs_mobile_proxy_needed) {
    this->pIs_mobile_proxy_needed = pIs_mobile_proxy_needed;
}

String*
SamiPostInput::getPProxyUrl() {
    return pProxy_url;
}
void
SamiPostInput::setPProxyUrl(String* pProxy_url) {
    this->pProxy_url = pProxy_url;
}

String*
SamiPostInput::getPVideo() {
    return pVideo;
}
void
SamiPostInput::setPVideo(String* pVideo) {
    this->pVideo = pVideo;
}

String*
SamiPostInput::getPPdfAttachmentUrl() {
    return pPdf_attachment_url;
}
void
SamiPostInput::setPPdfAttachmentUrl(String* pPdf_attachment_url) {
    this->pPdf_attachment_url = pPdf_attachment_url;
}

String*
SamiPostInput::getPPostDate() {
    return pPost_date;
}
void
SamiPostInput::setPPostDate(String* pPost_date) {
    this->pPost_date = pPost_date;
}

String*
SamiPostInput::getPDisplayDate() {
    return pDisplay_date;
}
void
SamiPostInput::setPDisplayDate(String* pDisplay_date) {
    this->pDisplay_date = pDisplay_date;
}

String*
SamiPostInput::getPSuitabilityScore() {
    return pSuitability_score;
}
void
SamiPostInput::setPSuitabilityScore(String* pSuitability_score) {
    this->pSuitability_score = pSuitability_score;
}

String*
SamiPostInput::getPVideoId() {
    return pVideo_id;
}
void
SamiPostInput::setPVideoId(String* pVideo_id) {
    this->pVideo_id = pVideo_id;
}

String*
SamiPostInput::getPDisplayTag() {
    return pDisplay_tag;
}
void
SamiPostInput::setPDisplayTag(String* pDisplay_tag) {
    this->pDisplay_tag = pDisplay_tag;
}

String*
SamiPostInput::getPDisplaySummary() {
    return pDisplay_summary;
}
void
SamiPostInput::setPDisplaySummary(String* pDisplay_summary) {
    this->pDisplay_summary = pDisplay_summary;
}

String*
SamiPostInput::getPVestorlyUrl() {
    return pVestorly_url;
}
void
SamiPostInput::setPVestorlyUrl(String* pVestorly_url) {
    this->pVestorly_url = pVestorly_url;
}

String*
SamiPostInput::getPTitle() {
    return pTitle;
}
void
SamiPostInput::setPTitle(String* pTitle) {
    this->pTitle = pTitle;
}



} /* namespace Swagger */

