/*
 * SamiUser.h
 * 
 * 
 */

#ifndef SamiUser_H_
#define SamiUser_H_

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

class SamiUser: public SamiObject {
public:
    SamiUser();
    SamiUser(String* json);
    virtual ~SamiUser();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUser* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    String* getPCompany();
    void setPCompany(String* pCompany);
    
    String* getPPictureUrl();
    void setPPictureUrl(String* pPicture_url);
    
    String* getPWebsite();
    void setPWebsite(String* pWebsite);
    
    String* getPUserType();
    void setPUserType(String* pUser_type);
    
    String* getPSlug();
    void setPSlug(String* pSlug);
    
    String* getPName();
    void setPName(String* pName);
    
    String* getPUsername();
    void setPUsername(String* pUsername);
    
    String* getPFirstName();
    void setPFirstName(String* pFirst_name);
    
    String* getPLastName();
    void setPLastName(String* pLast_name);
    
    Boolean* getPNewUser();
    void setPNewUser(Boolean* pNew_user);
    
    Boolean* getPShowTour();
    void setPShowTour(Boolean* pShow_tour);
    
    Boolean* getPPlanSetup();
    void setPPlanSetup(Boolean* pPlan_setup);
    
    Boolean* getPPlanExpired();
    void setPPlanExpired(Boolean* pPlan_expired);
    
    String* getPPlanStatus();
    void setPPlanStatus(String* pPlan_status);
    
    String* getPPlanId();
    void setPPlanId(String* pPlan_id);
    
    Boolean* getPPlanStripe();
    void setPPlanStripe(Boolean* pPlan_stripe);
    

private:
    String* p_id;
    String* pCompany;
    String* pPicture_url;
    String* pWebsite;
    String* pUser_type;
    String* pSlug;
    String* pName;
    String* pUsername;
    String* pFirst_name;
    String* pLast_name;
    Boolean* pNew_user;
    Boolean* pShow_tour;
    Boolean* pPlan_setup;
    Boolean* pPlan_expired;
    String* pPlan_status;
    String* pPlan_id;
    Boolean* pPlan_stripe;
    
};

} /* namespace Swagger */

#endif /* SamiUser_H_ */
