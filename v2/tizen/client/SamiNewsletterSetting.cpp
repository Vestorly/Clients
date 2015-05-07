
#include "SamiNewsletterSetting.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNewsletterSetting::SamiNewsletterSetting() {
    init();
}

SamiNewsletterSetting::~SamiNewsletterSetting() {
    this->cleanup();
}

void
SamiNewsletterSetting::init() {
    p_id = null;
    pEmail_day_of_week = null;
    pEmail_hour = null;
    pEmail_status = null;
    pFacebook_active_wall = null;
    pFacebook_day_of_week = null;
    pFacebook_hour = null;
    pFacebook_status = null;
    pLinkedin_active_wall = null;
    pLinkedin_day_of_week = null;
    pLinkedin_hour = null;
    pLinkedin_status = null;
    pSocial_title = null;
    pSocial_subtitle = null;
    pSocial_description = null;
    pTwitter_day_of_week = null;
    pTwitter_hour = null;
    pTwitter_status = null;
    pSocial_posting_text = null;
    pNewsletter_type = null;
    pGroup_id = null;
    pMontage_enabled = null;
    pMontage_title = null;
    pMontage_facebook_image_url = null;
    pMontage_linkedin_image_url = null;
    pMontage_twitter_image_url = null;
    pNewsletter_ids = null;
    pPrimary_email_font = null;
    pFooter_email_font = null;
    pEmail_accent_color = null;
    pRender_version = null;
    pHeader_image_url = null;
    pHeader_background_color = null;
    pBanner_color = null;
    pTitle_color = null;
    pFooter_html = null;
    pIntro_text = null;
    pFooter_image_url = null;
    pSubject = null;
    pSalutation_text = null;
    pBody_html = null;
    
}

void
SamiNewsletterSetting::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pEmail_day_of_week != null) {
        
        delete pEmail_day_of_week;
        pEmail_day_of_week = null;
    }
    if(pEmail_hour != null) {
        
        delete pEmail_hour;
        pEmail_hour = null;
    }
    if(pEmail_status != null) {
        
        delete pEmail_status;
        pEmail_status = null;
    }
    if(pFacebook_active_wall != null) {
        
        delete pFacebook_active_wall;
        pFacebook_active_wall = null;
    }
    if(pFacebook_day_of_week != null) {
        
        delete pFacebook_day_of_week;
        pFacebook_day_of_week = null;
    }
    if(pFacebook_hour != null) {
        
        delete pFacebook_hour;
        pFacebook_hour = null;
    }
    if(pFacebook_status != null) {
        
        delete pFacebook_status;
        pFacebook_status = null;
    }
    if(pLinkedin_active_wall != null) {
        
        delete pLinkedin_active_wall;
        pLinkedin_active_wall = null;
    }
    if(pLinkedin_day_of_week != null) {
        
        delete pLinkedin_day_of_week;
        pLinkedin_day_of_week = null;
    }
    if(pLinkedin_hour != null) {
        
        delete pLinkedin_hour;
        pLinkedin_hour = null;
    }
    if(pLinkedin_status != null) {
        
        delete pLinkedin_status;
        pLinkedin_status = null;
    }
    if(pSocial_title != null) {
        
        delete pSocial_title;
        pSocial_title = null;
    }
    if(pSocial_subtitle != null) {
        
        delete pSocial_subtitle;
        pSocial_subtitle = null;
    }
    if(pSocial_description != null) {
        
        delete pSocial_description;
        pSocial_description = null;
    }
    if(pTwitter_day_of_week != null) {
        
        delete pTwitter_day_of_week;
        pTwitter_day_of_week = null;
    }
    if(pTwitter_hour != null) {
        
        delete pTwitter_hour;
        pTwitter_hour = null;
    }
    if(pTwitter_status != null) {
        
        delete pTwitter_status;
        pTwitter_status = null;
    }
    if(pSocial_posting_text != null) {
        
        delete pSocial_posting_text;
        pSocial_posting_text = null;
    }
    if(pNewsletter_type != null) {
        
        delete pNewsletter_type;
        pNewsletter_type = null;
    }
    if(pGroup_id != null) {
        
        delete pGroup_id;
        pGroup_id = null;
    }
    if(pMontage_enabled != null) {
        
        delete pMontage_enabled;
        pMontage_enabled = null;
    }
    if(pMontage_title != null) {
        
        delete pMontage_title;
        pMontage_title = null;
    }
    if(pMontage_facebook_image_url != null) {
        
        delete pMontage_facebook_image_url;
        pMontage_facebook_image_url = null;
    }
    if(pMontage_linkedin_image_url != null) {
        
        delete pMontage_linkedin_image_url;
        pMontage_linkedin_image_url = null;
    }
    if(pMontage_twitter_image_url != null) {
        
        delete pMontage_twitter_image_url;
        pMontage_twitter_image_url = null;
    }
    if(pNewsletter_ids != null) {
        pNewsletter_ids->RemoveAll(true);
        delete pNewsletter_ids;
        pNewsletter_ids = null;
    }
    if(pPrimary_email_font != null) {
        
        delete pPrimary_email_font;
        pPrimary_email_font = null;
    }
    if(pFooter_email_font != null) {
        
        delete pFooter_email_font;
        pFooter_email_font = null;
    }
    if(pEmail_accent_color != null) {
        
        delete pEmail_accent_color;
        pEmail_accent_color = null;
    }
    if(pRender_version != null) {
        
        delete pRender_version;
        pRender_version = null;
    }
    if(pHeader_image_url != null) {
        
        delete pHeader_image_url;
        pHeader_image_url = null;
    }
    if(pHeader_background_color != null) {
        
        delete pHeader_background_color;
        pHeader_background_color = null;
    }
    if(pBanner_color != null) {
        
        delete pBanner_color;
        pBanner_color = null;
    }
    if(pTitle_color != null) {
        
        delete pTitle_color;
        pTitle_color = null;
    }
    if(pFooter_html != null) {
        
        delete pFooter_html;
        pFooter_html = null;
    }
    if(pIntro_text != null) {
        
        delete pIntro_text;
        pIntro_text = null;
    }
    if(pFooter_image_url != null) {
        
        delete pFooter_image_url;
        pFooter_image_url = null;
    }
    if(pSubject != null) {
        
        delete pSubject;
        pSubject = null;
    }
    if(pSalutation_text != null) {
        
        delete pSalutation_text;
        pSalutation_text = null;
    }
    if(pBody_html != null) {
        
        delete pBody_html;
        pBody_html = null;
    }
    
}


SamiNewsletterSetting*
SamiNewsletterSetting::fromJson(String* json) {
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
SamiNewsletterSetting::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pEmail_day_of_weekKey = new JsonString(L"email_day_of_week");
        IJsonValue* pEmail_day_of_weekVal = null;
        pJsonObject->GetValue(pEmail_day_of_weekKey, pEmail_day_of_weekVal);
        if(pEmail_day_of_weekVal != null) {
            
            pEmail_day_of_week = new Integer();
            jsonToValue(pEmail_day_of_week, pEmail_day_of_weekVal, L"Integer", L"Integer");
        }
        delete pEmail_day_of_weekKey;
        JsonString* pEmail_hourKey = new JsonString(L"email_hour");
        IJsonValue* pEmail_hourVal = null;
        pJsonObject->GetValue(pEmail_hourKey, pEmail_hourVal);
        if(pEmail_hourVal != null) {
            
            pEmail_hour = new Integer();
            jsonToValue(pEmail_hour, pEmail_hourVal, L"Integer", L"Integer");
        }
        delete pEmail_hourKey;
        JsonString* pEmail_statusKey = new JsonString(L"email_status");
        IJsonValue* pEmail_statusVal = null;
        pJsonObject->GetValue(pEmail_statusKey, pEmail_statusVal);
        if(pEmail_statusVal != null) {
            
            pEmail_status = new String();
            jsonToValue(pEmail_status, pEmail_statusVal, L"String", L"String");
        }
        delete pEmail_statusKey;
        JsonString* pFacebook_active_wallKey = new JsonString(L"facebook_active_wall");
        IJsonValue* pFacebook_active_wallVal = null;
        pJsonObject->GetValue(pFacebook_active_wallKey, pFacebook_active_wallVal);
        if(pFacebook_active_wallVal != null) {
            
            pFacebook_active_wall = new String();
            jsonToValue(pFacebook_active_wall, pFacebook_active_wallVal, L"String", L"String");
        }
        delete pFacebook_active_wallKey;
        JsonString* pFacebook_day_of_weekKey = new JsonString(L"facebook_day_of_week");
        IJsonValue* pFacebook_day_of_weekVal = null;
        pJsonObject->GetValue(pFacebook_day_of_weekKey, pFacebook_day_of_weekVal);
        if(pFacebook_day_of_weekVal != null) {
            
            pFacebook_day_of_week = new Integer();
            jsonToValue(pFacebook_day_of_week, pFacebook_day_of_weekVal, L"Integer", L"Integer");
        }
        delete pFacebook_day_of_weekKey;
        JsonString* pFacebook_hourKey = new JsonString(L"facebook_hour");
        IJsonValue* pFacebook_hourVal = null;
        pJsonObject->GetValue(pFacebook_hourKey, pFacebook_hourVal);
        if(pFacebook_hourVal != null) {
            
            pFacebook_hour = new Integer();
            jsonToValue(pFacebook_hour, pFacebook_hourVal, L"Integer", L"Integer");
        }
        delete pFacebook_hourKey;
        JsonString* pFacebook_statusKey = new JsonString(L"facebook_status");
        IJsonValue* pFacebook_statusVal = null;
        pJsonObject->GetValue(pFacebook_statusKey, pFacebook_statusVal);
        if(pFacebook_statusVal != null) {
            
            pFacebook_status = new String();
            jsonToValue(pFacebook_status, pFacebook_statusVal, L"String", L"String");
        }
        delete pFacebook_statusKey;
        JsonString* pLinkedin_active_wallKey = new JsonString(L"linkedin_active_wall");
        IJsonValue* pLinkedin_active_wallVal = null;
        pJsonObject->GetValue(pLinkedin_active_wallKey, pLinkedin_active_wallVal);
        if(pLinkedin_active_wallVal != null) {
            
            pLinkedin_active_wall = new String();
            jsonToValue(pLinkedin_active_wall, pLinkedin_active_wallVal, L"String", L"String");
        }
        delete pLinkedin_active_wallKey;
        JsonString* pLinkedin_day_of_weekKey = new JsonString(L"linkedin_day_of_week");
        IJsonValue* pLinkedin_day_of_weekVal = null;
        pJsonObject->GetValue(pLinkedin_day_of_weekKey, pLinkedin_day_of_weekVal);
        if(pLinkedin_day_of_weekVal != null) {
            
            pLinkedin_day_of_week = new Integer();
            jsonToValue(pLinkedin_day_of_week, pLinkedin_day_of_weekVal, L"Integer", L"Integer");
        }
        delete pLinkedin_day_of_weekKey;
        JsonString* pLinkedin_hourKey = new JsonString(L"linkedin_hour");
        IJsonValue* pLinkedin_hourVal = null;
        pJsonObject->GetValue(pLinkedin_hourKey, pLinkedin_hourVal);
        if(pLinkedin_hourVal != null) {
            
            pLinkedin_hour = new Integer();
            jsonToValue(pLinkedin_hour, pLinkedin_hourVal, L"Integer", L"Integer");
        }
        delete pLinkedin_hourKey;
        JsonString* pLinkedin_statusKey = new JsonString(L"linkedin_status");
        IJsonValue* pLinkedin_statusVal = null;
        pJsonObject->GetValue(pLinkedin_statusKey, pLinkedin_statusVal);
        if(pLinkedin_statusVal != null) {
            
            pLinkedin_status = new String();
            jsonToValue(pLinkedin_status, pLinkedin_statusVal, L"String", L"String");
        }
        delete pLinkedin_statusKey;
        JsonString* pSocial_titleKey = new JsonString(L"social_title");
        IJsonValue* pSocial_titleVal = null;
        pJsonObject->GetValue(pSocial_titleKey, pSocial_titleVal);
        if(pSocial_titleVal != null) {
            
            pSocial_title = new String();
            jsonToValue(pSocial_title, pSocial_titleVal, L"String", L"String");
        }
        delete pSocial_titleKey;
        JsonString* pSocial_subtitleKey = new JsonString(L"social_subtitle");
        IJsonValue* pSocial_subtitleVal = null;
        pJsonObject->GetValue(pSocial_subtitleKey, pSocial_subtitleVal);
        if(pSocial_subtitleVal != null) {
            
            pSocial_subtitle = new String();
            jsonToValue(pSocial_subtitle, pSocial_subtitleVal, L"String", L"String");
        }
        delete pSocial_subtitleKey;
        JsonString* pSocial_descriptionKey = new JsonString(L"social_description");
        IJsonValue* pSocial_descriptionVal = null;
        pJsonObject->GetValue(pSocial_descriptionKey, pSocial_descriptionVal);
        if(pSocial_descriptionVal != null) {
            
            pSocial_description = new String();
            jsonToValue(pSocial_description, pSocial_descriptionVal, L"String", L"String");
        }
        delete pSocial_descriptionKey;
        JsonString* pTwitter_day_of_weekKey = new JsonString(L"twitter_day_of_week");
        IJsonValue* pTwitter_day_of_weekVal = null;
        pJsonObject->GetValue(pTwitter_day_of_weekKey, pTwitter_day_of_weekVal);
        if(pTwitter_day_of_weekVal != null) {
            
            pTwitter_day_of_week = new Integer();
            jsonToValue(pTwitter_day_of_week, pTwitter_day_of_weekVal, L"Integer", L"Integer");
        }
        delete pTwitter_day_of_weekKey;
        JsonString* pTwitter_hourKey = new JsonString(L"twitter_hour");
        IJsonValue* pTwitter_hourVal = null;
        pJsonObject->GetValue(pTwitter_hourKey, pTwitter_hourVal);
        if(pTwitter_hourVal != null) {
            
            pTwitter_hour = new Integer();
            jsonToValue(pTwitter_hour, pTwitter_hourVal, L"Integer", L"Integer");
        }
        delete pTwitter_hourKey;
        JsonString* pTwitter_statusKey = new JsonString(L"twitter_status");
        IJsonValue* pTwitter_statusVal = null;
        pJsonObject->GetValue(pTwitter_statusKey, pTwitter_statusVal);
        if(pTwitter_statusVal != null) {
            
            pTwitter_status = new String();
            jsonToValue(pTwitter_status, pTwitter_statusVal, L"String", L"String");
        }
        delete pTwitter_statusKey;
        JsonString* pSocial_posting_textKey = new JsonString(L"social_posting_text");
        IJsonValue* pSocial_posting_textVal = null;
        pJsonObject->GetValue(pSocial_posting_textKey, pSocial_posting_textVal);
        if(pSocial_posting_textVal != null) {
            
            pSocial_posting_text = new String();
            jsonToValue(pSocial_posting_text, pSocial_posting_textVal, L"String", L"String");
        }
        delete pSocial_posting_textKey;
        JsonString* pNewsletter_typeKey = new JsonString(L"newsletter_type");
        IJsonValue* pNewsletter_typeVal = null;
        pJsonObject->GetValue(pNewsletter_typeKey, pNewsletter_typeVal);
        if(pNewsletter_typeVal != null) {
            
            pNewsletter_type = new String();
            jsonToValue(pNewsletter_type, pNewsletter_typeVal, L"String", L"String");
        }
        delete pNewsletter_typeKey;
        JsonString* pGroup_idKey = new JsonString(L"group_id");
        IJsonValue* pGroup_idVal = null;
        pJsonObject->GetValue(pGroup_idKey, pGroup_idVal);
        if(pGroup_idVal != null) {
            
            pGroup_id = new String();
            jsonToValue(pGroup_id, pGroup_idVal, L"String", L"String");
        }
        delete pGroup_idKey;
        JsonString* pMontage_enabledKey = new JsonString(L"montage_enabled");
        IJsonValue* pMontage_enabledVal = null;
        pJsonObject->GetValue(pMontage_enabledKey, pMontage_enabledVal);
        if(pMontage_enabledVal != null) {
            
            pMontage_enabled = new Boolean(false);
            jsonToValue(pMontage_enabled, pMontage_enabledVal, L"Boolean", L"Boolean");
        }
        delete pMontage_enabledKey;
        JsonString* pMontage_titleKey = new JsonString(L"montage_title");
        IJsonValue* pMontage_titleVal = null;
        pJsonObject->GetValue(pMontage_titleKey, pMontage_titleVal);
        if(pMontage_titleVal != null) {
            
            pMontage_title = new String();
            jsonToValue(pMontage_title, pMontage_titleVal, L"String", L"String");
        }
        delete pMontage_titleKey;
        JsonString* pMontage_facebook_image_urlKey = new JsonString(L"montage_facebook_image_url");
        IJsonValue* pMontage_facebook_image_urlVal = null;
        pJsonObject->GetValue(pMontage_facebook_image_urlKey, pMontage_facebook_image_urlVal);
        if(pMontage_facebook_image_urlVal != null) {
            
            pMontage_facebook_image_url = new String();
            jsonToValue(pMontage_facebook_image_url, pMontage_facebook_image_urlVal, L"String", L"String");
        }
        delete pMontage_facebook_image_urlKey;
        JsonString* pMontage_linkedin_image_urlKey = new JsonString(L"montage_linkedin_image_url");
        IJsonValue* pMontage_linkedin_image_urlVal = null;
        pJsonObject->GetValue(pMontage_linkedin_image_urlKey, pMontage_linkedin_image_urlVal);
        if(pMontage_linkedin_image_urlVal != null) {
            
            pMontage_linkedin_image_url = new String();
            jsonToValue(pMontage_linkedin_image_url, pMontage_linkedin_image_urlVal, L"String", L"String");
        }
        delete pMontage_linkedin_image_urlKey;
        JsonString* pMontage_twitter_image_urlKey = new JsonString(L"montage_twitter_image_url");
        IJsonValue* pMontage_twitter_image_urlVal = null;
        pJsonObject->GetValue(pMontage_twitter_image_urlKey, pMontage_twitter_image_urlVal);
        if(pMontage_twitter_image_urlVal != null) {
            
            pMontage_twitter_image_url = new String();
            jsonToValue(pMontage_twitter_image_url, pMontage_twitter_image_urlVal, L"String", L"String");
        }
        delete pMontage_twitter_image_urlKey;
        JsonString* pNewsletter_idsKey = new JsonString(L"newsletter_ids");
        IJsonValue* pNewsletter_idsVal = null;
        pJsonObject->GetValue(pNewsletter_idsKey, pNewsletter_idsVal);
        if(pNewsletter_idsVal != null) {
            pNewsletter_ids = new ArrayList();
            
            jsonToValue(pNewsletter_ids, pNewsletter_idsVal, L"IList", L"String");
        }
        delete pNewsletter_idsKey;
        JsonString* pPrimary_email_fontKey = new JsonString(L"primary_email_font");
        IJsonValue* pPrimary_email_fontVal = null;
        pJsonObject->GetValue(pPrimary_email_fontKey, pPrimary_email_fontVal);
        if(pPrimary_email_fontVal != null) {
            
            pPrimary_email_font = new String();
            jsonToValue(pPrimary_email_font, pPrimary_email_fontVal, L"String", L"String");
        }
        delete pPrimary_email_fontKey;
        JsonString* pFooter_email_fontKey = new JsonString(L"footer_email_font");
        IJsonValue* pFooter_email_fontVal = null;
        pJsonObject->GetValue(pFooter_email_fontKey, pFooter_email_fontVal);
        if(pFooter_email_fontVal != null) {
            
            pFooter_email_font = new String();
            jsonToValue(pFooter_email_font, pFooter_email_fontVal, L"String", L"String");
        }
        delete pFooter_email_fontKey;
        JsonString* pEmail_accent_colorKey = new JsonString(L"email_accent_color");
        IJsonValue* pEmail_accent_colorVal = null;
        pJsonObject->GetValue(pEmail_accent_colorKey, pEmail_accent_colorVal);
        if(pEmail_accent_colorVal != null) {
            
            pEmail_accent_color = new String();
            jsonToValue(pEmail_accent_color, pEmail_accent_colorVal, L"String", L"String");
        }
        delete pEmail_accent_colorKey;
        JsonString* pRender_versionKey = new JsonString(L"render_version");
        IJsonValue* pRender_versionVal = null;
        pJsonObject->GetValue(pRender_versionKey, pRender_versionVal);
        if(pRender_versionVal != null) {
            
            pRender_version = new String();
            jsonToValue(pRender_version, pRender_versionVal, L"String", L"String");
        }
        delete pRender_versionKey;
        JsonString* pHeader_image_urlKey = new JsonString(L"header_image_url");
        IJsonValue* pHeader_image_urlVal = null;
        pJsonObject->GetValue(pHeader_image_urlKey, pHeader_image_urlVal);
        if(pHeader_image_urlVal != null) {
            
            pHeader_image_url = new String();
            jsonToValue(pHeader_image_url, pHeader_image_urlVal, L"String", L"String");
        }
        delete pHeader_image_urlKey;
        JsonString* pHeader_background_colorKey = new JsonString(L"header_background_color");
        IJsonValue* pHeader_background_colorVal = null;
        pJsonObject->GetValue(pHeader_background_colorKey, pHeader_background_colorVal);
        if(pHeader_background_colorVal != null) {
            
            pHeader_background_color = new String();
            jsonToValue(pHeader_background_color, pHeader_background_colorVal, L"String", L"String");
        }
        delete pHeader_background_colorKey;
        JsonString* pBanner_colorKey = new JsonString(L"banner_color");
        IJsonValue* pBanner_colorVal = null;
        pJsonObject->GetValue(pBanner_colorKey, pBanner_colorVal);
        if(pBanner_colorVal != null) {
            
            pBanner_color = new String();
            jsonToValue(pBanner_color, pBanner_colorVal, L"String", L"String");
        }
        delete pBanner_colorKey;
        JsonString* pTitle_colorKey = new JsonString(L"title_color");
        IJsonValue* pTitle_colorVal = null;
        pJsonObject->GetValue(pTitle_colorKey, pTitle_colorVal);
        if(pTitle_colorVal != null) {
            
            pTitle_color = new String();
            jsonToValue(pTitle_color, pTitle_colorVal, L"String", L"String");
        }
        delete pTitle_colorKey;
        JsonString* pFooter_htmlKey = new JsonString(L"footer_html");
        IJsonValue* pFooter_htmlVal = null;
        pJsonObject->GetValue(pFooter_htmlKey, pFooter_htmlVal);
        if(pFooter_htmlVal != null) {
            
            pFooter_html = new String();
            jsonToValue(pFooter_html, pFooter_htmlVal, L"String", L"String");
        }
        delete pFooter_htmlKey;
        JsonString* pIntro_textKey = new JsonString(L"intro_text");
        IJsonValue* pIntro_textVal = null;
        pJsonObject->GetValue(pIntro_textKey, pIntro_textVal);
        if(pIntro_textVal != null) {
            
            pIntro_text = new String();
            jsonToValue(pIntro_text, pIntro_textVal, L"String", L"String");
        }
        delete pIntro_textKey;
        JsonString* pFooter_image_urlKey = new JsonString(L"footer_image_url");
        IJsonValue* pFooter_image_urlVal = null;
        pJsonObject->GetValue(pFooter_image_urlKey, pFooter_image_urlVal);
        if(pFooter_image_urlVal != null) {
            
            pFooter_image_url = new String();
            jsonToValue(pFooter_image_url, pFooter_image_urlVal, L"String", L"String");
        }
        delete pFooter_image_urlKey;
        JsonString* pSubjectKey = new JsonString(L"subject");
        IJsonValue* pSubjectVal = null;
        pJsonObject->GetValue(pSubjectKey, pSubjectVal);
        if(pSubjectVal != null) {
            
            pSubject = new String();
            jsonToValue(pSubject, pSubjectVal, L"String", L"String");
        }
        delete pSubjectKey;
        JsonString* pSalutation_textKey = new JsonString(L"salutation_text");
        IJsonValue* pSalutation_textVal = null;
        pJsonObject->GetValue(pSalutation_textKey, pSalutation_textVal);
        if(pSalutation_textVal != null) {
            
            pSalutation_text = new String();
            jsonToValue(pSalutation_text, pSalutation_textVal, L"String", L"String");
        }
        delete pSalutation_textKey;
        JsonString* pBody_htmlKey = new JsonString(L"body_html");
        IJsonValue* pBody_htmlVal = null;
        pJsonObject->GetValue(pBody_htmlKey, pBody_htmlVal);
        if(pBody_htmlVal != null) {
            
            pBody_html = new String();
            jsonToValue(pBody_html, pBody_htmlVal, L"String", L"String");
        }
        delete pBody_htmlKey;
        
    }
}

SamiNewsletterSetting::SamiNewsletterSetting(String* json) {
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
SamiNewsletterSetting::asJson ()
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
SamiNewsletterSetting::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pEmail_day_of_weekKey = new JsonString(L"email_day_of_week");
    pJsonObject->Add(pEmail_day_of_weekKey, toJson(getPEmailDayOfWeek(), "Integer", ""));

    
    JsonString *pEmail_hourKey = new JsonString(L"email_hour");
    pJsonObject->Add(pEmail_hourKey, toJson(getPEmailHour(), "Integer", ""));

    
    JsonString *pEmail_statusKey = new JsonString(L"email_status");
    pJsonObject->Add(pEmail_statusKey, toJson(getPEmailStatus(), "String", ""));

    
    JsonString *pFacebook_active_wallKey = new JsonString(L"facebook_active_wall");
    pJsonObject->Add(pFacebook_active_wallKey, toJson(getPFacebookActiveWall(), "String", ""));

    
    JsonString *pFacebook_day_of_weekKey = new JsonString(L"facebook_day_of_week");
    pJsonObject->Add(pFacebook_day_of_weekKey, toJson(getPFacebookDayOfWeek(), "Integer", ""));

    
    JsonString *pFacebook_hourKey = new JsonString(L"facebook_hour");
    pJsonObject->Add(pFacebook_hourKey, toJson(getPFacebookHour(), "Integer", ""));

    
    JsonString *pFacebook_statusKey = new JsonString(L"facebook_status");
    pJsonObject->Add(pFacebook_statusKey, toJson(getPFacebookStatus(), "String", ""));

    
    JsonString *pLinkedin_active_wallKey = new JsonString(L"linkedin_active_wall");
    pJsonObject->Add(pLinkedin_active_wallKey, toJson(getPLinkedinActiveWall(), "String", ""));

    
    JsonString *pLinkedin_day_of_weekKey = new JsonString(L"linkedin_day_of_week");
    pJsonObject->Add(pLinkedin_day_of_weekKey, toJson(getPLinkedinDayOfWeek(), "Integer", ""));

    
    JsonString *pLinkedin_hourKey = new JsonString(L"linkedin_hour");
    pJsonObject->Add(pLinkedin_hourKey, toJson(getPLinkedinHour(), "Integer", ""));

    
    JsonString *pLinkedin_statusKey = new JsonString(L"linkedin_status");
    pJsonObject->Add(pLinkedin_statusKey, toJson(getPLinkedinStatus(), "String", ""));

    
    JsonString *pSocial_titleKey = new JsonString(L"social_title");
    pJsonObject->Add(pSocial_titleKey, toJson(getPSocialTitle(), "String", ""));

    
    JsonString *pSocial_subtitleKey = new JsonString(L"social_subtitle");
    pJsonObject->Add(pSocial_subtitleKey, toJson(getPSocialSubtitle(), "String", ""));

    
    JsonString *pSocial_descriptionKey = new JsonString(L"social_description");
    pJsonObject->Add(pSocial_descriptionKey, toJson(getPSocialDescription(), "String", ""));

    
    JsonString *pTwitter_day_of_weekKey = new JsonString(L"twitter_day_of_week");
    pJsonObject->Add(pTwitter_day_of_weekKey, toJson(getPTwitterDayOfWeek(), "Integer", ""));

    
    JsonString *pTwitter_hourKey = new JsonString(L"twitter_hour");
    pJsonObject->Add(pTwitter_hourKey, toJson(getPTwitterHour(), "Integer", ""));

    
    JsonString *pTwitter_statusKey = new JsonString(L"twitter_status");
    pJsonObject->Add(pTwitter_statusKey, toJson(getPTwitterStatus(), "String", ""));

    
    JsonString *pSocial_posting_textKey = new JsonString(L"social_posting_text");
    pJsonObject->Add(pSocial_posting_textKey, toJson(getPSocialPostingText(), "String", ""));

    
    JsonString *pNewsletter_typeKey = new JsonString(L"newsletter_type");
    pJsonObject->Add(pNewsletter_typeKey, toJson(getPNewsletterType(), "String", ""));

    
    JsonString *pGroup_idKey = new JsonString(L"group_id");
    pJsonObject->Add(pGroup_idKey, toJson(getPGroupId(), "String", ""));

    
    JsonString *pMontage_enabledKey = new JsonString(L"montage_enabled");
    pJsonObject->Add(pMontage_enabledKey, toJson(getPMontageEnabled(), "Boolean", ""));

    
    JsonString *pMontage_titleKey = new JsonString(L"montage_title");
    pJsonObject->Add(pMontage_titleKey, toJson(getPMontageTitle(), "String", ""));

    
    JsonString *pMontage_facebook_image_urlKey = new JsonString(L"montage_facebook_image_url");
    pJsonObject->Add(pMontage_facebook_image_urlKey, toJson(getPMontageFacebookImageUrl(), "String", ""));

    
    JsonString *pMontage_linkedin_image_urlKey = new JsonString(L"montage_linkedin_image_url");
    pJsonObject->Add(pMontage_linkedin_image_urlKey, toJson(getPMontageLinkedinImageUrl(), "String", ""));

    
    JsonString *pMontage_twitter_image_urlKey = new JsonString(L"montage_twitter_image_url");
    pJsonObject->Add(pMontage_twitter_image_urlKey, toJson(getPMontageTwitterImageUrl(), "String", ""));

    
    JsonString *pNewsletter_idsKey = new JsonString(L"newsletter_ids");
    pJsonObject->Add(pNewsletter_idsKey, toJson(getPNewsletterIds(), "String", "array"));

    
    JsonString *pPrimary_email_fontKey = new JsonString(L"primary_email_font");
    pJsonObject->Add(pPrimary_email_fontKey, toJson(getPPrimaryEmailFont(), "String", ""));

    
    JsonString *pFooter_email_fontKey = new JsonString(L"footer_email_font");
    pJsonObject->Add(pFooter_email_fontKey, toJson(getPFooterEmailFont(), "String", ""));

    
    JsonString *pEmail_accent_colorKey = new JsonString(L"email_accent_color");
    pJsonObject->Add(pEmail_accent_colorKey, toJson(getPEmailAccentColor(), "String", ""));

    
    JsonString *pRender_versionKey = new JsonString(L"render_version");
    pJsonObject->Add(pRender_versionKey, toJson(getPRenderVersion(), "String", ""));

    
    JsonString *pHeader_image_urlKey = new JsonString(L"header_image_url");
    pJsonObject->Add(pHeader_image_urlKey, toJson(getPHeaderImageUrl(), "String", ""));

    
    JsonString *pHeader_background_colorKey = new JsonString(L"header_background_color");
    pJsonObject->Add(pHeader_background_colorKey, toJson(getPHeaderBackgroundColor(), "String", ""));

    
    JsonString *pBanner_colorKey = new JsonString(L"banner_color");
    pJsonObject->Add(pBanner_colorKey, toJson(getPBannerColor(), "String", ""));

    
    JsonString *pTitle_colorKey = new JsonString(L"title_color");
    pJsonObject->Add(pTitle_colorKey, toJson(getPTitleColor(), "String", ""));

    
    JsonString *pFooter_htmlKey = new JsonString(L"footer_html");
    pJsonObject->Add(pFooter_htmlKey, toJson(getPFooterHtml(), "String", ""));

    
    JsonString *pIntro_textKey = new JsonString(L"intro_text");
    pJsonObject->Add(pIntro_textKey, toJson(getPIntroText(), "String", ""));

    
    JsonString *pFooter_image_urlKey = new JsonString(L"footer_image_url");
    pJsonObject->Add(pFooter_image_urlKey, toJson(getPFooterImageUrl(), "String", ""));

    
    JsonString *pSubjectKey = new JsonString(L"subject");
    pJsonObject->Add(pSubjectKey, toJson(getPSubject(), "String", ""));

    
    JsonString *pSalutation_textKey = new JsonString(L"salutation_text");
    pJsonObject->Add(pSalutation_textKey, toJson(getPSalutationText(), "String", ""));

    
    JsonString *pBody_htmlKey = new JsonString(L"body_html");
    pJsonObject->Add(pBody_htmlKey, toJson(getPBodyHtml(), "String", ""));

    
    return pJsonObject;
}

String*
SamiNewsletterSetting::getPId() {
    return p_id;
}
void
SamiNewsletterSetting::setPId(String* p_id) {
    this->p_id = p_id;
}

Integer*
SamiNewsletterSetting::getPEmailDayOfWeek() {
    return pEmail_day_of_week;
}
void
SamiNewsletterSetting::setPEmailDayOfWeek(Integer* pEmail_day_of_week) {
    this->pEmail_day_of_week = pEmail_day_of_week;
}

Integer*
SamiNewsletterSetting::getPEmailHour() {
    return pEmail_hour;
}
void
SamiNewsletterSetting::setPEmailHour(Integer* pEmail_hour) {
    this->pEmail_hour = pEmail_hour;
}

String*
SamiNewsletterSetting::getPEmailStatus() {
    return pEmail_status;
}
void
SamiNewsletterSetting::setPEmailStatus(String* pEmail_status) {
    this->pEmail_status = pEmail_status;
}

String*
SamiNewsletterSetting::getPFacebookActiveWall() {
    return pFacebook_active_wall;
}
void
SamiNewsletterSetting::setPFacebookActiveWall(String* pFacebook_active_wall) {
    this->pFacebook_active_wall = pFacebook_active_wall;
}

Integer*
SamiNewsletterSetting::getPFacebookDayOfWeek() {
    return pFacebook_day_of_week;
}
void
SamiNewsletterSetting::setPFacebookDayOfWeek(Integer* pFacebook_day_of_week) {
    this->pFacebook_day_of_week = pFacebook_day_of_week;
}

Integer*
SamiNewsletterSetting::getPFacebookHour() {
    return pFacebook_hour;
}
void
SamiNewsletterSetting::setPFacebookHour(Integer* pFacebook_hour) {
    this->pFacebook_hour = pFacebook_hour;
}

String*
SamiNewsletterSetting::getPFacebookStatus() {
    return pFacebook_status;
}
void
SamiNewsletterSetting::setPFacebookStatus(String* pFacebook_status) {
    this->pFacebook_status = pFacebook_status;
}

String*
SamiNewsletterSetting::getPLinkedinActiveWall() {
    return pLinkedin_active_wall;
}
void
SamiNewsletterSetting::setPLinkedinActiveWall(String* pLinkedin_active_wall) {
    this->pLinkedin_active_wall = pLinkedin_active_wall;
}

Integer*
SamiNewsletterSetting::getPLinkedinDayOfWeek() {
    return pLinkedin_day_of_week;
}
void
SamiNewsletterSetting::setPLinkedinDayOfWeek(Integer* pLinkedin_day_of_week) {
    this->pLinkedin_day_of_week = pLinkedin_day_of_week;
}

Integer*
SamiNewsletterSetting::getPLinkedinHour() {
    return pLinkedin_hour;
}
void
SamiNewsletterSetting::setPLinkedinHour(Integer* pLinkedin_hour) {
    this->pLinkedin_hour = pLinkedin_hour;
}

String*
SamiNewsletterSetting::getPLinkedinStatus() {
    return pLinkedin_status;
}
void
SamiNewsletterSetting::setPLinkedinStatus(String* pLinkedin_status) {
    this->pLinkedin_status = pLinkedin_status;
}

String*
SamiNewsletterSetting::getPSocialTitle() {
    return pSocial_title;
}
void
SamiNewsletterSetting::setPSocialTitle(String* pSocial_title) {
    this->pSocial_title = pSocial_title;
}

String*
SamiNewsletterSetting::getPSocialSubtitle() {
    return pSocial_subtitle;
}
void
SamiNewsletterSetting::setPSocialSubtitle(String* pSocial_subtitle) {
    this->pSocial_subtitle = pSocial_subtitle;
}

String*
SamiNewsletterSetting::getPSocialDescription() {
    return pSocial_description;
}
void
SamiNewsletterSetting::setPSocialDescription(String* pSocial_description) {
    this->pSocial_description = pSocial_description;
}

Integer*
SamiNewsletterSetting::getPTwitterDayOfWeek() {
    return pTwitter_day_of_week;
}
void
SamiNewsletterSetting::setPTwitterDayOfWeek(Integer* pTwitter_day_of_week) {
    this->pTwitter_day_of_week = pTwitter_day_of_week;
}

Integer*
SamiNewsletterSetting::getPTwitterHour() {
    return pTwitter_hour;
}
void
SamiNewsletterSetting::setPTwitterHour(Integer* pTwitter_hour) {
    this->pTwitter_hour = pTwitter_hour;
}

String*
SamiNewsletterSetting::getPTwitterStatus() {
    return pTwitter_status;
}
void
SamiNewsletterSetting::setPTwitterStatus(String* pTwitter_status) {
    this->pTwitter_status = pTwitter_status;
}

String*
SamiNewsletterSetting::getPSocialPostingText() {
    return pSocial_posting_text;
}
void
SamiNewsletterSetting::setPSocialPostingText(String* pSocial_posting_text) {
    this->pSocial_posting_text = pSocial_posting_text;
}

String*
SamiNewsletterSetting::getPNewsletterType() {
    return pNewsletter_type;
}
void
SamiNewsletterSetting::setPNewsletterType(String* pNewsletter_type) {
    this->pNewsletter_type = pNewsletter_type;
}

String*
SamiNewsletterSetting::getPGroupId() {
    return pGroup_id;
}
void
SamiNewsletterSetting::setPGroupId(String* pGroup_id) {
    this->pGroup_id = pGroup_id;
}

Boolean*
SamiNewsletterSetting::getPMontageEnabled() {
    return pMontage_enabled;
}
void
SamiNewsletterSetting::setPMontageEnabled(Boolean* pMontage_enabled) {
    this->pMontage_enabled = pMontage_enabled;
}

String*
SamiNewsletterSetting::getPMontageTitle() {
    return pMontage_title;
}
void
SamiNewsletterSetting::setPMontageTitle(String* pMontage_title) {
    this->pMontage_title = pMontage_title;
}

String*
SamiNewsletterSetting::getPMontageFacebookImageUrl() {
    return pMontage_facebook_image_url;
}
void
SamiNewsletterSetting::setPMontageFacebookImageUrl(String* pMontage_facebook_image_url) {
    this->pMontage_facebook_image_url = pMontage_facebook_image_url;
}

String*
SamiNewsletterSetting::getPMontageLinkedinImageUrl() {
    return pMontage_linkedin_image_url;
}
void
SamiNewsletterSetting::setPMontageLinkedinImageUrl(String* pMontage_linkedin_image_url) {
    this->pMontage_linkedin_image_url = pMontage_linkedin_image_url;
}

String*
SamiNewsletterSetting::getPMontageTwitterImageUrl() {
    return pMontage_twitter_image_url;
}
void
SamiNewsletterSetting::setPMontageTwitterImageUrl(String* pMontage_twitter_image_url) {
    this->pMontage_twitter_image_url = pMontage_twitter_image_url;
}

IList*
SamiNewsletterSetting::getPNewsletterIds() {
    return pNewsletter_ids;
}
void
SamiNewsletterSetting::setPNewsletterIds(IList* pNewsletter_ids) {
    this->pNewsletter_ids = pNewsletter_ids;
}

String*
SamiNewsletterSetting::getPPrimaryEmailFont() {
    return pPrimary_email_font;
}
void
SamiNewsletterSetting::setPPrimaryEmailFont(String* pPrimary_email_font) {
    this->pPrimary_email_font = pPrimary_email_font;
}

String*
SamiNewsletterSetting::getPFooterEmailFont() {
    return pFooter_email_font;
}
void
SamiNewsletterSetting::setPFooterEmailFont(String* pFooter_email_font) {
    this->pFooter_email_font = pFooter_email_font;
}

String*
SamiNewsletterSetting::getPEmailAccentColor() {
    return pEmail_accent_color;
}
void
SamiNewsletterSetting::setPEmailAccentColor(String* pEmail_accent_color) {
    this->pEmail_accent_color = pEmail_accent_color;
}

String*
SamiNewsletterSetting::getPRenderVersion() {
    return pRender_version;
}
void
SamiNewsletterSetting::setPRenderVersion(String* pRender_version) {
    this->pRender_version = pRender_version;
}

String*
SamiNewsletterSetting::getPHeaderImageUrl() {
    return pHeader_image_url;
}
void
SamiNewsletterSetting::setPHeaderImageUrl(String* pHeader_image_url) {
    this->pHeader_image_url = pHeader_image_url;
}

String*
SamiNewsletterSetting::getPHeaderBackgroundColor() {
    return pHeader_background_color;
}
void
SamiNewsletterSetting::setPHeaderBackgroundColor(String* pHeader_background_color) {
    this->pHeader_background_color = pHeader_background_color;
}

String*
SamiNewsletterSetting::getPBannerColor() {
    return pBanner_color;
}
void
SamiNewsletterSetting::setPBannerColor(String* pBanner_color) {
    this->pBanner_color = pBanner_color;
}

String*
SamiNewsletterSetting::getPTitleColor() {
    return pTitle_color;
}
void
SamiNewsletterSetting::setPTitleColor(String* pTitle_color) {
    this->pTitle_color = pTitle_color;
}

String*
SamiNewsletterSetting::getPFooterHtml() {
    return pFooter_html;
}
void
SamiNewsletterSetting::setPFooterHtml(String* pFooter_html) {
    this->pFooter_html = pFooter_html;
}

String*
SamiNewsletterSetting::getPIntroText() {
    return pIntro_text;
}
void
SamiNewsletterSetting::setPIntroText(String* pIntro_text) {
    this->pIntro_text = pIntro_text;
}

String*
SamiNewsletterSetting::getPFooterImageUrl() {
    return pFooter_image_url;
}
void
SamiNewsletterSetting::setPFooterImageUrl(String* pFooter_image_url) {
    this->pFooter_image_url = pFooter_image_url;
}

String*
SamiNewsletterSetting::getPSubject() {
    return pSubject;
}
void
SamiNewsletterSetting::setPSubject(String* pSubject) {
    this->pSubject = pSubject;
}

String*
SamiNewsletterSetting::getPSalutationText() {
    return pSalutation_text;
}
void
SamiNewsletterSetting::setPSalutationText(String* pSalutation_text) {
    this->pSalutation_text = pSalutation_text;
}

String*
SamiNewsletterSetting::getPBodyHtml() {
    return pBody_html;
}
void
SamiNewsletterSetting::setPBodyHtml(String* pBody_html) {
    this->pBody_html = pBody_html;
}



} /* namespace Swagger */

