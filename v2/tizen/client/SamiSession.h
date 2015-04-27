/*
 * SamiSession.h
 * 
 * 
 */

#ifndef SamiSession_H_
#define SamiSession_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSettings.h"
using Tizen::Base::String;
#include "SamiUser.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiSession: public SamiObject {
public:
    SamiSession();
    SamiSession(String* json);
    virtual ~SamiSession();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSession* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    String* getPVestorlyauth();
    void setPVestorlyauth(String* pVestorlyauth);
    
    Boolean* getPNewUser();
    void setPNewUser(Boolean* pNew_user);
    
    SamiUser* getPCurrentUser();
    void setPCurrentUser(SamiUser* pCurrent_user);
    
    SamiSettings* getPSettings();
    void setPSettings(SamiSettings* pSettings);
    

private:
    String* p_id;
    String* pVestorlyauth;
    Boolean* pNew_user;
    SamiUser* pCurrent_user;
    SamiSettings* pSettings;
    
};

} /* namespace Swagger */

#endif /* SamiSession_H_ */
