/*
 * SamiEventresponse.h
 * 
 * 
 */

#ifndef SamiEventresponse_H_
#define SamiEventresponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiEvent.h"


namespace Swagger {

class SamiEventresponse: public SamiObject {
public:
    SamiEventresponse();
    SamiEventresponse(String* json);
    virtual ~SamiEventresponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiEventresponse* fromJson(String* obj);

    
    SamiEvent* getPEvent();
    void setPEvent(SamiEvent* pEvent);
    

private:
    SamiEvent* pEvent;
    
};

} /* namespace Swagger */

#endif /* SamiEventresponse_H_ */
