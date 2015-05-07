/*
 * SamiPost.h
 * 
 * 
 */

#ifndef SamiPost_H_
#define SamiPost_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiPost: public SamiObject {
public:
    SamiPost();
    SamiPost(String* json);
    virtual ~SamiPost();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPost* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    String* getPCreatedAt();
    void setPCreatedAt(String* pCreated_at);
    
    String* getPUpdatedAt();
    void setPUpdatedAt(String* pUpdated_at);
    
    String* getPExternalUrl();
    void setPExternalUrl(String* pExternal_url);
    
    String* getPExternalUrlSource();
    void setPExternalUrlSource(String* pExternal_url_source);
    
    String* getPExternalUrlType();
    void setPExternalUrlType(String* pExternal_url_type);
    
    String* getPImagePath();
    void setPImagePath(String* pImage_path);
    
    String* getPImageUrl();
    void setPImageUrl(String* pImage_url);
    
    String* getPImageHeight();
    void setPImageHeight(String* pImage_height);
    
    String* getPImageWidth();
    void setPImageWidth(String* pImage_width);
    
    String* getPLogoUrl();
    void setPLogoUrl(String* pLogo_url);
    
    String* getPSquareLogoUrl();
    void setPSquareLogoUrl(String* pSquare_logo_url);
    
    String* getPNeedsSanitize();
    void setPNeedsSanitize(String* pNeeds_sanitize);
    
    String* getPSummary();
    void setPSummary(String* pSummary);
    
    String* getPTopic();
    void setPTopic(String* pTopic);
    
    String* getPApprovalStatus();
    void setPApprovalStatus(String* pApproval_status);
    
    String* getPApprovalTransactions();
    void setPApprovalTransactions(String* pApproval_transactions);
    
    IList* getPGroupIds();
    void setPGroupIds(IList* pGroup_ids);
    
    String* getPSlug();
    void setPSlug(String* pSlug);
    
    String* getPArticleId();
    void setPArticleId(String* pArticle_id);
    
    String* getPComment();
    void setPComment(String* pComment);
    
    IList* getPNewsletterIds();
    void setPNewsletterIds(IList* pNewsletter_ids);
    
    Boolean* getPIsFeatured();
    void setPIsFeatured(Boolean* pIs_featured);
    
    String* getPAdvisorId();
    void setPAdvisorId(String* pAdvisor_id);
    
    Boolean* getPIsPublished();
    void setPIsPublished(Boolean* pIs_published);
    
    Boolean* getPIsResponsive();
    void setPIsResponsive(Boolean* pIs_responsive);
    
    Boolean* getPIsProxyNeeded();
    void setPIsProxyNeeded(Boolean* pIs_proxy_needed);
    
    Boolean* getPIsMobileProxyNeeded();
    void setPIsMobileProxyNeeded(Boolean* pIs_mobile_proxy_needed);
    
    String* getPProxyUrl();
    void setPProxyUrl(String* pProxy_url);
    
    String* getPVideo();
    void setPVideo(String* pVideo);
    
    String* getPPdfAttachmentUrl();
    void setPPdfAttachmentUrl(String* pPdf_attachment_url);
    
    String* getPPostDate();
    void setPPostDate(String* pPost_date);
    
    String* getPDisplayDate();
    void setPDisplayDate(String* pDisplay_date);
    
    String* getPSuitabilityScore();
    void setPSuitabilityScore(String* pSuitability_score);
    
    String* getPVideoId();
    void setPVideoId(String* pVideo_id);
    
    String* getPDisplayTag();
    void setPDisplayTag(String* pDisplay_tag);
    
    String* getPDisplaySummary();
    void setPDisplaySummary(String* pDisplay_summary);
    
    String* getPVestorlyUrl();
    void setPVestorlyUrl(String* pVestorly_url);
    

private:
    String* p_id;
    String* pCreated_at;
    String* pUpdated_at;
    String* pExternal_url;
    String* pExternal_url_source;
    String* pExternal_url_type;
    String* pImage_path;
    String* pImage_url;
    String* pImage_height;
    String* pImage_width;
    String* pLogo_url;
    String* pSquare_logo_url;
    String* pNeeds_sanitize;
    String* pSummary;
    String* pTopic;
    String* pApproval_status;
    String* pApproval_transactions;
    IList* pGroup_ids;
    String* pSlug;
    String* pArticle_id;
    String* pComment;
    IList* pNewsletter_ids;
    Boolean* pIs_featured;
    String* pAdvisor_id;
    Boolean* pIs_published;
    Boolean* pIs_responsive;
    Boolean* pIs_proxy_needed;
    Boolean* pIs_mobile_proxy_needed;
    String* pProxy_url;
    String* pVideo;
    String* pPdf_attachment_url;
    String* pPost_date;
    String* pDisplay_date;
    String* pSuitability_score;
    String* pVideo_id;
    String* pDisplay_tag;
    String* pDisplay_summary;
    String* pVestorly_url;
    
};

} /* namespace Swagger */

#endif /* SamiPost_H_ */
