/*
 * SamiSource.h
 * 
 * A source object.
 */

#ifndef SamiSource_H_
#define SamiSource_H_

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

class SamiSource: public SamiObject {
public:
    SamiSource();
    SamiSource(String* json);
    virtual ~SamiSource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSource* fromJson(String* obj);

    
    String* get_id();
    void set_id(String* p_id);
    
    String* getName();
    void setName(String* pName);
    
    String* getUrl();
    void setUrl(String* pUrl);
    
    String* getLogo_url();
    void setLogo_url(String* pLogo_url);
    
    Boolean* getEnabled();
    void setEnabled(Boolean* pEnabled);
    
    Boolean* getCustom_rss_feed();
    void setCustom_rss_feed(Boolean* pCustom_rss_feed);
    
    String* getRss_publisher();
    void setRss_publisher(String* pRss_publisher);
    

private:
    String* p_id;
    String* pName;
    String* pUrl;
    String* pLogo_url;
    Boolean* pEnabled;
    Boolean* pCustom_rss_feed;
    String* pRss_publisher;
    
};

} /* namespace Swagger */

#endif /* SamiSource_H_ */
