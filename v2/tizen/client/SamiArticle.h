/*
 * SamiArticle.h
 * 
 * An Article document.
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
using Tizen::Base::Boolean;
#include "SamiDatetime.h"


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

    
    String* get_id();
    void set_id(String* p_id);
    
    String* getUrl();
    void setUrl(String* pUrl);
    
    String* getTitle();
    void setTitle(String* pTitle);
    
    String* getOpen_calais_topics();
    void setOpen_calais_topics(String* pOpen_calais_topics);
    
    String* getOpen_calais_keywords();
    void setOpen_calais_keywords(String* pOpen_calais_keywords);
    
    String* getCategories();
    void setCategories(String* pCategories);
    
    String* getSummary();
    void setSummary(String* pSummary);
    
    String* getUnparsed_html();
    void setUnparsed_html(String* pUnparsed_html);
    
    String* getParsed_html();
    void setParsed_html(String* pParsed_html);
    
    String* getContent();
    void setContent(String* pContent);
    
    String* getVestorly_topics();
    void setVestorly_topics(String* pVestorly_topics);
    
    String* getOverride_topic();
    void setOverride_topic(String* pOverride_topic);
    
    SamiDatetime* getPublished_at();
    void setPublished_at(SamiDatetime* pPublished_at);
    
    String* getOriginal_image_url();
    void setOriginal_image_url(String* pOriginal_image_url);
    
    String* getSmall_image_url();
    void setSmall_image_url(String* pSmall_image_url);
    
    String* getLarge_image_url();
    void setLarge_image_url(String* pLarge_image_url);
    
    String* getImg();
    void setImg(String* pImg);
    
    String* getWebpage_mobile_image_url();
    void setWebpage_mobile_image_url(String* pWebpage_mobile_image_url);
    
    String* getWebpage_tablet_image_url();
    void setWebpage_tablet_image_url(String* pWebpage_tablet_image_url);
    
    String* getRss_feed_url();
    void setRss_feed_url(String* pRss_feed_url);
    
    String* getRss_feed_category();
    void setRss_feed_category(String* pRss_feed_category);
    
    String* getRss_feed_logo_url();
    void setRss_feed_logo_url(String* pRss_feed_logo_url);
    
    Boolean* getNeeds_sanitize();
    void setNeeds_sanitize(Boolean* pNeeds_sanitize);
    
    Boolean* getIs_responsive();
    void setIs_responsive(Boolean* pIs_responsive);
    
    Boolean* getIs_proxy_needed();
    void setIs_proxy_needed(Boolean* pIs_proxy_needed);
    
    Boolean* getIs_mobile_proxy_needed();
    void setIs_mobile_proxy_needed(Boolean* pIs_mobile_proxy_needed);
    
    Boolean* getIs_working_url();
    void setIs_working_url(Boolean* pIs_working_url);
    

private:
    String* p_id;
    String* pUrl;
    String* pTitle;
    String* pOpen_calais_topics;
    String* pOpen_calais_keywords;
    String* pCategories;
    String* pSummary;
    String* pUnparsed_html;
    String* pParsed_html;
    String* pContent;
    String* pVestorly_topics;
    String* pOverride_topic;
    SamiDatetime* pPublished_at;
    String* pOriginal_image_url;
    String* pSmall_image_url;
    String* pLarge_image_url;
    String* pImg;
    String* pWebpage_mobile_image_url;
    String* pWebpage_tablet_image_url;
    String* pRss_feed_url;
    String* pRss_feed_category;
    String* pRss_feed_logo_url;
    Boolean* pNeeds_sanitize;
    Boolean* pIs_responsive;
    Boolean* pIs_proxy_needed;
    Boolean* pIs_mobile_proxy_needed;
    Boolean* pIs_working_url;
    
};

} /* namespace Swagger */

#endif /* SamiArticle_H_ */
