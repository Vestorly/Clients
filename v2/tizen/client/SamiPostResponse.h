/*
 * SamiPostresponse.h
 * 
 * 
 */

#ifndef SamiPostresponse_H_
#define SamiPostresponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPost.h"


namespace Swagger {

class SamiPostresponse: public SamiObject {
public:
    SamiPostresponse();
    SamiPostresponse(String* json);
    virtual ~SamiPostresponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPostresponse* fromJson(String* obj);

    
    SamiPost* getPPost();
    void setPPost(SamiPost* pPost);
    

private:
    SamiPost* pPost;
    
};

} /* namespace Swagger */

#endif /* SamiPostresponse_H_ */
