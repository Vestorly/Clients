/*
 * SamiMemberresponse.h
 * 
 * 
 */

#ifndef SamiMemberresponse_H_
#define SamiMemberresponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiMember.h"


namespace Swagger {

class SamiMemberresponse: public SamiObject {
public:
    SamiMemberresponse();
    SamiMemberresponse(String* json);
    virtual ~SamiMemberresponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMemberresponse* fromJson(String* obj);

    
    SamiMember* getPPost();
    void setPPost(SamiMember* pPost);
    

private:
    SamiMember* pPost;
    
};

} /* namespace Swagger */

#endif /* SamiMemberresponse_H_ */
