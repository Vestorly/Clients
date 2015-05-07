/*
 * SamiTruncatedMember.h
 * 
 * 
 */

#ifndef SamiTruncatedMember_H_
#define SamiTruncatedMember_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiTruncatedMember: public SamiObject {
public:
    SamiTruncatedMember();
    SamiTruncatedMember(String* json);
    virtual ~SamiTruncatedMember();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTruncatedMember* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    String* getPFirstName();
    void setPFirstName(String* pFirst_name);
    
    String* getPLastName();
    void setPLastName(String* pLast_name);
    
    String* getPEmail();
    void setPEmail(String* pEmail);
    
    String* getPPictureUrl();
    void setPPictureUrl(String* pPicture_url);
    
    String* getPAddedOn();
    void setPAddedOn(String* pAdded_on);
    

private:
    String* p_id;
    String* pFirst_name;
    String* pLast_name;
    String* pEmail;
    String* pPicture_url;
    String* pAdded_on;
    
};

} /* namespace Swagger */

#endif /* SamiTruncatedMember_H_ */
