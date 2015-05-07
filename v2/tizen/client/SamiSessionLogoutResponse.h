/*
 * SamiSessionLogoutResponse.h
 * 
 * 
 */

#ifndef SamiSessionLogoutResponse_H_
#define SamiSessionLogoutResponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiSessionLogoutResponse: public SamiObject {
public:
    SamiSessionLogoutResponse();
    SamiSessionLogoutResponse(String* json);
    virtual ~SamiSessionLogoutResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSessionLogoutResponse* fromJson(String* obj);

    
    String* getPMessage();
    void setPMessage(String* pMessage);
    

private:
    String* pMessage;
    
};

} /* namespace Swagger */

#endif /* SamiSessionLogoutResponse_H_ */
