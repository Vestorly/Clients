/*
 * SamiPostrequest.h
 * 
 * 
 */

#ifndef SamiPostrequest_H_
#define SamiPostrequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPostInput.h"


namespace Swagger {

class SamiPostrequest: public SamiObject {
public:
    SamiPostrequest();
    SamiPostrequest(String* json);
    virtual ~SamiPostrequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPostrequest* fromJson(String* obj);

    
    SamiPostInput* getPPost();
    void setPPost(SamiPostInput* pPost);
    

private:
    SamiPostInput* pPost;
    
};

} /* namespace Swagger */

#endif /* SamiPostrequest_H_ */
