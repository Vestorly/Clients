/*
 * SamiAdvsior.h
 * 
 * 
 */

#ifndef SamiAdvsior_H_
#define SamiAdvsior_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;
using Tizen::Base::Boolean;


namespace Swagger {

class SamiAdvsior: public SamiObject {
public:
    SamiAdvsior();
    SamiAdvsior(String* json);
    virtual ~SamiAdvsior();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAdvsior* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    String* getPVestorlyauth();
    void setPVestorlyauth(String* pVestorlyauth);
    
    Boolean* getPNewUser();
    void setPNewUser(Boolean* pNew_user);
    

private:
    String* p_id;
    String* pVestorlyauth;
    Boolean* pNew_user;
    
};

} /* namespace Swagger */

#endif /* SamiAdvsior_H_ */
