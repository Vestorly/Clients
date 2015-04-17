/*
 * SamiSourceInput.h
 * 
 * 
 */

#ifndef SamiSourceInput_H_
#define SamiSourceInput_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;
using Tizen::Base::Boolean;


namespace Swagger {

class SamiSourceInput: public SamiObject {
public:
    SamiSourceInput();
    SamiSourceInput(String* json);
    virtual ~SamiSourceInput();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSourceInput* fromJson(String* obj);

    
    String* getPName();
    void setPName(String* pName);
    
    String* getPUrl();
    void setPUrl(String* pUrl);
    
    String* getPLogoUrl();
    void setPLogoUrl(String* pLogo_url);
    
    Boolean* getPEnabled();
    void setPEnabled(Boolean* pEnabled);
    
    Boolean* getPCustomRssFeed();
    void setPCustomRssFeed(Boolean* pCustom_rss_feed);
    
    String* getPRssPublisher();
    void setPRssPublisher(String* pRss_publisher);
    

private:
    String* pName;
    String* pUrl;
    String* pLogo_url;
    Boolean* pEnabled;
    Boolean* pCustom_rss_feed;
    String* pRss_publisher;
    
};

} /* namespace Swagger */

#endif /* SamiSourceInput_H_ */
