/*
 * SamiAdvisorresponse.h
 * 
 * 
 */

#ifndef SamiAdvisorresponse_H_
#define SamiAdvisorresponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiAdvisor.h"


namespace Swagger {

class SamiAdvisorresponse: public SamiObject {
public:
    SamiAdvisorresponse();
    SamiAdvisorresponse(String* json);
    virtual ~SamiAdvisorresponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAdvisorresponse* fromJson(String* obj);

    
    SamiAdvisor* getPAdvisor();
    void setPAdvisor(SamiAdvisor* pAdvisor);
    

private:
    SamiAdvisor* pAdvisor;
    
};

} /* namespace Swagger */

#endif /* SamiAdvisorresponse_H_ */
