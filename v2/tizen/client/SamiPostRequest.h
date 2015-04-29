/*
 * SamiPostRequest.h
 * 
 * 
 */

#ifndef SamiPostRequest_H_
#define SamiPostRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPostInput.h"


namespace Swagger {

class SamiPostRequest: public SamiObject {
public:
    SamiPostRequest();
    SamiPostRequest(String* json);
    virtual ~SamiPostRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPostRequest* fromJson(String* obj);

    
    SamiPostInput* getPPost();
    void setPPost(SamiPostInput* pPost);
    

private:
    SamiPostInput* pPost;
    
};

} /* namespace Swagger */

#endif /* SamiPostRequest_H_ */
