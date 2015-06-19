/*
 * SamiEventcreateresponse.h
 * 
 * 
 */

#ifndef SamiEventcreateresponse_H_
#define SamiEventcreateresponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiMeta.h"


namespace Swagger {

class SamiEventcreateresponse: public SamiObject {
public:
    SamiEventcreateresponse();
    SamiEventcreateresponse(String* json);
    virtual ~SamiEventcreateresponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiEventcreateresponse* fromJson(String* obj);

    
    SamiMeta* getPMeta();
    void setPMeta(SamiMeta* pMeta);
    

private:
    SamiMeta* pMeta;
    
};

} /* namespace Swagger */

#endif /* SamiEventcreateresponse_H_ */
