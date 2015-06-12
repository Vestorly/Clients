/*
 * SamiGroupresponse.h
 * 
 * 
 */

#ifndef SamiGroupresponse_H_
#define SamiGroupresponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiGroup.h"


namespace Swagger {

class SamiGroupresponse: public SamiObject {
public:
    SamiGroupresponse();
    SamiGroupresponse(String* json);
    virtual ~SamiGroupresponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiGroupresponse* fromJson(String* obj);

    
    SamiGroup* getPGroup();
    void setPGroup(SamiGroup* pGroup);
    

private:
    SamiGroup* pGroup;
    
};

} /* namespace Swagger */

#endif /* SamiGroupresponse_H_ */
