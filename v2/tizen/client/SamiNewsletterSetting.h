/*
 * SamiNewsletterSetting.h
 * 
 * 
 */

#ifndef SamiNewsletterSetting_H_
#define SamiNewsletterSetting_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;
using Tizen::Base::Collection::IList;
using Tizen::Base::Boolean;
using Tizen::Base::Integer;


namespace Swagger {

class SamiNewsletterSetting: public SamiObject {
public:
    SamiNewsletterSetting();
    SamiNewsletterSetting(String* json);
    virtual ~SamiNewsletterSetting();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNewsletterSetting* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    Integer* getPEmailDayOfWeek();
    void setPEmailDayOfWeek(Integer* pEmail_day_of_week);
    
    Integer* getPEmailHour();
    void setPEmailHour(Integer* pEmail_hour);
    
    String* getPEmailStatus();
    void setPEmailStatus(String* pEmail_status);
    
    String* getPFacebookActiveWall();
    void setPFacebookActiveWall(String* pFacebook_active_wall);
    
    Integer* getPFacebookDayOfWeek();
    void setPFacebookDayOfWeek(Integer* pFacebook_day_of_week);
    
    Integer* getPFacebookHour();
    void setPFacebookHour(Integer* pFacebook_hour);
    
    String* getPFacebookStatus();
    void setPFacebookStatus(String* pFacebook_status);
    
    String* getPLinkedinActiveWall();
    void setPLinkedinActiveWall(String* pLinkedin_active_wall);
    
    Integer* getPLinkedinDayOfWeek();
    void setPLinkedinDayOfWeek(Integer* pLinkedin_day_of_week);
    
    Integer* getPLinkedinHour();
    void setPLinkedinHour(Integer* pLinkedin_hour);
    
    String* getPLinkedinStatus();
    void setPLinkedinStatus(String* pLinkedin_status);
    
    String* getPSocialTitle();
    void setPSocialTitle(String* pSocial_title);
    
    String* getPSocialSubtitle();
    void setPSocialSubtitle(String* pSocial_subtitle);
    
    String* getPSocialDescription();
    void setPSocialDescription(String* pSocial_description);
    
    Integer* getPTwitterDayOfWeek();
    void setPTwitterDayOfWeek(Integer* pTwitter_day_of_week);
    
    Integer* getPTwitterHour();
    void setPTwitterHour(Integer* pTwitter_hour);
    
    String* getPTwitterStatus();
    void setPTwitterStatus(String* pTwitter_status);
    
    String* getPSocialPostingText();
    void setPSocialPostingText(String* pSocial_posting_text);
    
    String* getPNewsletterType();
    void setPNewsletterType(String* pNewsletter_type);
    
    String* getPGroupId();
    void setPGroupId(String* pGroup_id);
    
    Boolean* getPMontageEnabled();
    void setPMontageEnabled(Boolean* pMontage_enabled);
    
    String* getPMontageTitle();
    void setPMontageTitle(String* pMontage_title);
    
    String* getPMontageFacebookImageUrl();
    void setPMontageFacebookImageUrl(String* pMontage_facebook_image_url);
    
    String* getPMontageLinkedinImageUrl();
    void setPMontageLinkedinImageUrl(String* pMontage_linkedin_image_url);
    
    String* getPMontageTwitterImageUrl();
    void setPMontageTwitterImageUrl(String* pMontage_twitter_image_url);
    
    IList* getPNewsletterIds();
    void setPNewsletterIds(IList* pNewsletter_ids);
    
    String* getPPrimaryEmailFont();
    void setPPrimaryEmailFont(String* pPrimary_email_font);
    
    String* getPFooterEmailFont();
    void setPFooterEmailFont(String* pFooter_email_font);
    
    String* getPEmailAccentColor();
    void setPEmailAccentColor(String* pEmail_accent_color);
    
    String* getPRenderVersion();
    void setPRenderVersion(String* pRender_version);
    
    String* getPHeaderImageUrl();
    void setPHeaderImageUrl(String* pHeader_image_url);
    
    String* getPHeaderBackgroundColor();
    void setPHeaderBackgroundColor(String* pHeader_background_color);
    
    String* getPBannerColor();
    void setPBannerColor(String* pBanner_color);
    
    String* getPTitleColor();
    void setPTitleColor(String* pTitle_color);
    
    String* getPFooterHtml();
    void setPFooterHtml(String* pFooter_html);
    
    String* getPIntroText();
    void setPIntroText(String* pIntro_text);
    
    String* getPFooterImageUrl();
    void setPFooterImageUrl(String* pFooter_image_url);
    
    String* getPSubject();
    void setPSubject(String* pSubject);
    
    String* getPSalutationText();
    void setPSalutationText(String* pSalutation_text);
    
    String* getPBodyHtml();
    void setPBodyHtml(String* pBody_html);
    

private:
    String* p_id;
    Integer* pEmail_day_of_week;
    Integer* pEmail_hour;
    String* pEmail_status;
    String* pFacebook_active_wall;
    Integer* pFacebook_day_of_week;
    Integer* pFacebook_hour;
    String* pFacebook_status;
    String* pLinkedin_active_wall;
    Integer* pLinkedin_day_of_week;
    Integer* pLinkedin_hour;
    String* pLinkedin_status;
    String* pSocial_title;
    String* pSocial_subtitle;
    String* pSocial_description;
    Integer* pTwitter_day_of_week;
    Integer* pTwitter_hour;
    String* pTwitter_status;
    String* pSocial_posting_text;
    String* pNewsletter_type;
    String* pGroup_id;
    Boolean* pMontage_enabled;
    String* pMontage_title;
    String* pMontage_facebook_image_url;
    String* pMontage_linkedin_image_url;
    String* pMontage_twitter_image_url;
    IList* pNewsletter_ids;
    String* pPrimary_email_font;
    String* pFooter_email_font;
    String* pEmail_accent_color;
    String* pRender_version;
    String* pHeader_image_url;
    String* pHeader_background_color;
    String* pBanner_color;
    String* pTitle_color;
    String* pFooter_html;
    String* pIntro_text;
    String* pFooter_image_url;
    String* pSubject;
    String* pSalutation_text;
    String* pBody_html;
    
};

} /* namespace Swagger */

#endif /* SamiNewsletterSetting_H_ */
