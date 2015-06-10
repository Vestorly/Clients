/*
 * SamiNewsletterresponse.h
 * 
 * 
 */

#ifndef SamiNewsletterresponse_H_
#define SamiNewsletterresponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiNewsletter.h"


namespace Swagger {

class SamiNewsletterresponse: public SamiObject {
public:
    SamiNewsletterresponse();
    SamiNewsletterresponse(String* json);
    virtual ~SamiNewsletterresponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNewsletterresponse* fromJson(String* obj);

    
    SamiNewsletter* getPNewsletter();
    void setPNewsletter(SamiNewsletter* pNewsletter);
    

private:
    SamiNewsletter* pNewsletter;
    
};

} /* namespace Swagger */

#endif /* SamiNewsletterresponse_H_ */
