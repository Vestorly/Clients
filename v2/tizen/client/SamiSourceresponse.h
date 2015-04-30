/*
 * SamiSourceresponse.h
 * 
 * 
 */

#ifndef SamiSourceresponse_H_
#define SamiSourceresponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSource.h"


namespace Swagger {

class SamiSourceresponse: public SamiObject {
public:
    SamiSourceresponse();
    SamiSourceresponse(String* json);
    virtual ~SamiSourceresponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSourceresponse* fromJson(String* obj);

    
    SamiSource* getPSource();
    void setPSource(SamiSource* pSource);
    

private:
    SamiSource* pSource;
    
};

} /* namespace Swagger */

#endif /* SamiSourceresponse_H_ */
