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
    
    String* getPOpenCalaisTopics();
    void setPOpenCalaisTopics(String* pOpen_calais_topics);
    
    String* getPOpenCalaisKeywords();
    void setPOpenCalaisKeywords(String* pOpen_calais_keywords);
    
    String* getPVestorlyTopics();
    void setPVestorlyTopics(String* pVestorly_topics);
    
    String* getPCategories();
    void setPCategories(String* pCategories);
    
    String* getPSummary();
    void setPSummary(String* pSummary);
    
    String* getPUnparsedHtml();
    void setPUnparsedHtml(String* pUnparsed_html);
    
    String* getPLogoUrl();
    void setPLogoUrl(String* pLogo_url);
    
    String* getPImageUrl();
    void setPImageUrl(String* pImage_url);
    
    String* getPUrl();
    void setPUrl(String* pUrl);
    
    String* getPExternalUrl();
    void setPExternalUrl(String* pExternal_url);
    
    String* getPTags();
    void setPTags(String* pTags);
    

private:
    String* p_id;
    String* pCreated_at;
    String* pTitle;
    String* pOpen_calais_topics;
    String* pOpen_calais_keywords;
    String* pVestorly_topics;
    String* pCategories;
    String* pSummary;
    String* pUnparsed_html;
    String* pLogo_url;
    String* pImage_url;
    String* pUrl;
    String* pExternal_url;
    String* pTags;
    
};

} /* namespace Swagger */

#endif /* SamiArticle_H_ */
