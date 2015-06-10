/*
 * SamiArticle.h
 * 
 * 
 */

#ifndef SamiArticle_H_
#define SamiArticle_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;
using Tizen::Base::Integer;
using Tizen::Base::Boolean;


namespace Swagger {

class SamiArticle: public SamiObject {
public:
    SamiArticle();
    SamiArticle(String* json);
    virtual ~SamiArticle();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiArticle* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    String* getPCreatedAt();
    void setPCreatedAt(String* pCreated_at);
    
    String* getPTitle();
    void setPTitle(String* pTitle);
    
    String* getPBody();
    void setPBody(String* pBody);
    
    Boolean* getPIsResponsive();
    void setPIsResponsive(Boolean* pIs_responsive);
    
    Boolean* getPIsProxyNeeded();
    void setPIsProxyNeeded(Boolean* pIs_proxy_needed);
    
    Boolean* getPIsMobileProxyNeeded();
    void setPIsMobileProxyNeeded(Boolean* pIs_mobile_proxy_needed);
    
    Boolean* getPNeedsSanitize();
    void setPNeedsSanitize(Boolean* pNeeds_sanitize);
    
    String* getPProxyUrl();
    void setPProxyUrl(String* pProxy_url);
    
    String* getPTopic();
    void setPTopic(String* pTopic);
    
    String* getPSuitabilityScore();
    void setPSuitabilityScore(String* pSuitability_score);
    
    String* getPSummary();
    void setPSummary(String* pSummary);
    
    String* getPImagePath();
    void setPImagePath(String* pImage_path);
    
    String* getPImageUrl();
    void setPImageUrl(String* pImage_url);
    
    Integer* getPImageHeight();
    void setPImageHeight(Integer* pImage_height);
    
    Integer* getPImageWidth();
    void setPImageWidth(Integer* pImage_width);
    
    String* getPLogoUrl();
    void setPLogoUrl(String* pLogo_url);
    
    String* getPSquareLogoUrl();
    void setPSquareLogoUrl(String* pSquare_logo_url);
    
    String* getPUrl();
    void setPUrl(String* pUrl);
    
    String* getPExternalUrl();
    void setPExternalUrl(String* pExternal_url);
    
    String* getPExternalUrlSource();
    void setPExternalUrlSource(String* pExternal_url_source);
    
    String* getPExternalUrlType();
    void setPExternalUrlType(String* pExternal_url_type);
    

private:
    String* p_id;
    String* pCreated_at;
    String* pTitle;
    String* pBody;
    Boolean* pIs_responsive;
    Boolean* pIs_proxy_needed;
    Boolean* pIs_mobile_proxy_needed;
    Boolean* pNeeds_sanitize;
    String* pProxy_url;
    String* pTopic;
    String* pSuitability_score;
    String* pSummary;
    String* pImage_path;
    String* pImage_url;
    Integer* pImage_height;
    Integer* pImage_width;
    String* pLogo_url;
    String* pSquare_logo_url;
    String* pUrl;
    String* pExternal_url;
    String* pExternal_url_source;
    String* pExternal_url_type;
    
};

} /* namespace Swagger */

#endif /* SamiArticle_H_ */
