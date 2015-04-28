/*
 * SamiNewslettersettingresponse.h
 * 
 * 
 */

#ifndef SamiNewslettersettingresponse_H_
#define SamiNewslettersettingresponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiNewsletterSetting.h"


namespace Swagger {

class SamiNewslettersettingresponse: public SamiObject {
public:
    SamiNewslettersettingresponse();
    SamiNewslettersettingresponse(String* json);
    virtual ~SamiNewslettersettingresponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNewslettersettingresponse* fromJson(String* obj);

    
    SamiNewsletterSetting* getPNewsletterSetting();
    void setPNewsletterSetting(SamiNewsletterSetting* pNewsletter_setting);
    

private:
    SamiNewsletterSetting* pNewsletter_setting;
    
};

} /* namespace Swagger */

#endif /* SamiNewslettersettingresponse_H_ */
