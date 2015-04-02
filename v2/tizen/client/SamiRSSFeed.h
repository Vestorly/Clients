/*
 * SamiRSSFeed.h
 * 
 * An RSSFeed document.
 */

#ifndef SamiRSSFeed_H_
#define SamiRSSFeed_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiUrl.h"
using Tizen::Base::String;


namespace Swagger {

class SamiRSSFeed: public SamiObject {
public:
    SamiRSSFeed();
    SamiRSSFeed(String* json);
    virtual ~SamiRSSFeed();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRSSFeed* fromJson(String* obj);

    
    String* get_id();
    void set_id(String* p_id);
    
    String* getName();
    void setName(String* pName);
    
    String* getCategory();
    void setCategory(String* pCategory);
    
    SamiUrl* getUrl();
    void setUrl(SamiUrl* pUrl);
    
    SamiUrl* getLogo_url();
    void setLogo_url(SamiUrl* pLogo_url);
    
    String* getNeeds_sanitize();
    void setNeeds_sanitize(String* pNeeds_sanitize);
    

private:
    String* p_id;
    String* pName;
    String* pCategory;
    SamiUrl* pUrl;
    SamiUrl* pLogo_url;
    String* pNeeds_sanitize;
    
};

} /* namespace Swagger */

#endif /* SamiRSSFeed_H_ */
