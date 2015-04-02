/*
 * SamiMember.h
 * 
 * A Member object.
 */

#ifndef SamiMember_H_
#define SamiMember_H_

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

class SamiMember: public SamiObject {
public:
    SamiMember();
    SamiMember(String* json);
    virtual ~SamiMember();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMember* fromJson(String* obj);

    
    String* get_id();
    void set_id(String* p_id);
    
    String* getEmail();
    void setEmail(String* pEmail);
    
    String* getFirst_name();
    void setFirst_name(String* pFirst_name);
    
    String* getLast_name();
    void setLast_name(String* pLast_name);
    
    String* getPhone();
    void setPhone(String* pPhone);
    
    String* getAddress();
    void setAddress(String* pAddress);
    
    String* getCity();
    void setCity(String* pCity);
    
    String* getState();
    void setState(String* pState);
    
    String* getZip();
    void setZip(String* pZip);
    
    String* getGender();
    void setGender(String* pGender);
    
    String* getAge();
    void setAge(String* pAge);
    
    String* getEducation();
    void setEducation(String* pEducation);
    
    Boolean* getHigh_net_worth();
    void setHigh_net_worth(Boolean* pHigh_net_worth);
    
    String* getHome_market_value();
    void setHome_market_value(String* pHome_market_value);
    
    String* getHome_owner_status();
    void setHome_owner_status(String* pHome_owner_status);
    
    String* getHousehold_income();
    void setHousehold_income(String* pHousehold_income);
    
    String* getMarital_status();
    void setMarital_status(String* pMarital_status);
    
    String* getOccupation();
    void setOccupation(String* pOccupation);
    
    String* getHometown();
    void setHometown(String* pHometown);
    
    String* getFamily();
    void setFamily(String* pFamily);
    
    String* getTags();
    void setTags(String* pTags);
    
    String* getMessage();
    void setMessage(String* pMessage);
    
    String* getLocation();
    void setLocation(String* pLocation);
    
    String* getPicture_url();
    void setPicture_url(String* pPicture_url);
    
    String* getProfile_url();
    void setProfile_url(String* pProfile_url);
    
    String* getEstimated_location();
    void setEstimated_location(String* pEstimated_location);
    
    String* getEstimated_zip();
    void setEstimated_zip(String* pEstimated_zip);
    
    String* getRegister_ip_addr();
    void setRegister_ip_addr(String* pRegister_ip_addr);
    
    Boolean* getData_estimated();
    void setData_estimated(Boolean* pData_estimated);
    
    Boolean* getGenuine_email();
    void setGenuine_email(Boolean* pGenuine_email);
    

private:
    String* p_id;
    String* pEmail;
    String* pFirst_name;
    String* pLast_name;
    String* pPhone;
    String* pAddress;
    String* pCity;
    String* pState;
    String* pZip;
    String* pGender;
    String* pAge;
    String* pEducation;
    Boolean* pHigh_net_worth;
    String* pHome_market_value;
    String* pHome_owner_status;
    String* pHousehold_income;
    String* pMarital_status;
    String* pOccupation;
    String* pHometown;
    String* pFamily;
    String* pTags;
    String* pMessage;
    String* pLocation;
    String* pPicture_url;
    String* pProfile_url;
    String* pEstimated_location;
    String* pEstimated_zip;
    String* pRegister_ip_addr;
    Boolean* pData_estimated;
    Boolean* pGenuine_email;
    
};

} /* namespace Swagger */

#endif /* SamiMember_H_ */
