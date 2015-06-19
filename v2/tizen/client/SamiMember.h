/*
 * SamiMember.h
 * 
 * 
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
using Tizen::Base::Collection::IList;
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

    
    String* getPId();
    void setPId(String* p_id);
    
    String* getPEmail();
    void setPEmail(String* pEmail);
    
    String* getPFirstName();
    void setPFirstName(String* pFirst_name);
    
    String* getPLastName();
    void setPLastName(String* pLast_name);
    
    String* getPPhone();
    void setPPhone(String* pPhone);
    
    String* getPAddress();
    void setPAddress(String* pAddress);
    
    String* getPCity();
    void setPCity(String* pCity);
    
    String* getPState();
    void setPState(String* pState);
    
    String* getPZip();
    void setPZip(String* pZip);
    
    String* getPGender();
    void setPGender(String* pGender);
    
    String* getPInterestConsultation();
    void setPInterestConsultation(String* pInterest_consultation);
    
    String* getPInterestInNewAdvisor();
    void setPInterestInNewAdvisor(String* pInterest_in_new_advisor);
    
    String* getPAssets();
    void setPAssets(String* pAssets);
    
    String* getPAge();
    void setPAge(String* pAge);
    
    Boolean* getPDataEstimated();
    void setPDataEstimated(Boolean* pData_estimated);
    
    String* getPEducation();
    void setPEducation(String* pEducation);
    
    Boolean* getPHighNetWorth();
    void setPHighNetWorth(Boolean* pHigh_net_worth);
    
    String* getPHomeMarketValue();
    void setPHomeMarketValue(String* pHome_market_value);
    
    String* getPHomeOwnerStatus();
    void setPHomeOwnerStatus(String* pHome_owner_status);
    
    String* getPHouseholdIncome();
    void setPHouseholdIncome(String* pHousehold_income);
    
    String* getPMaritalStatus();
    void setPMaritalStatus(String* pMarital_status);
    
    String* getPOccupation();
    void setPOccupation(String* pOccupation);
    
    String* getPHometown();
    void setPHometown(String* pHometown);
    
    String* getPFamily();
    void setPFamily(String* pFamily);
    
    IList* getPTags();
    void setPTags(IList* pTags);
    
    IList* getPSubscribedGroupIds();
    void setPSubscribedGroupIds(IList* pSubscribed_group_ids);
    
    Boolean* getPUnsubscribed();
    void setPUnsubscribed(Boolean* pUnsubscribed);
    
    Boolean* getPUnsubscribedDate();
    void setPUnsubscribedDate(Boolean* pUnsubscribed_date);
    
    String* getPUserType();
    void setPUserType(String* pUser_type);
    
    String* getPSignedUpWith();
    void setPSignedUpWith(String* pSigned_up_with);
    
    String* getPMessage();
    void setPMessage(String* pMessage);
    
    String* getPLocation();
    void setPLocation(String* pLocation);
    
    String* getPPictureUrl();
    void setPPictureUrl(String* pPicture_url);
    
    String* getPProfileUrl();
    void setPProfileUrl(String* pProfile_url);
    
    String* getPEstimatedLocation();
    void setPEstimatedLocation(String* pEstimated_location);
    
    String* getPEstimatedZip();
    void setPEstimatedZip(String* pEstimated_zip);
    
    String* getPRegisterIpAddr();
    void setPRegisterIpAddr(String* pRegister_ip_addr);
    
    Boolean* getPGenuineEmail();
    void setPGenuineEmail(Boolean* pGenuine_email);
    
    String* getPLastActiveDate();
    void setPLastActiveDate(String* pLast_active_date);
    
    Boolean* getPIsClient();
    void setPIsClient(Boolean* pIs_client);
    
    Boolean* getPIsHidden();
    void setPIsHidden(Boolean* pIs_hidden);
    
    String* getPInvitedOn();
    void setPInvitedOn(String* pInvited_on);
    
    String* getPInvitedBy();
    void setPInvitedBy(String* pInvited_by);
    
    String* getPPortfolioSize();
    void setPPortfolioSize(String* pPortfolio_size);
    

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
    String* pInterest_consultation;
    String* pInterest_in_new_advisor;
    String* pAssets;
    String* pAge;
    Boolean* pData_estimated;
    String* pEducation;
    Boolean* pHigh_net_worth;
    String* pHome_market_value;
    String* pHome_owner_status;
    String* pHousehold_income;
    String* pMarital_status;
    String* pOccupation;
    String* pHometown;
    String* pFamily;
    IList* pTags;
    IList* pSubscribed_group_ids;
    Boolean* pUnsubscribed;
    Boolean* pUnsubscribed_date;
    String* pUser_type;
    String* pSigned_up_with;
    String* pMessage;
    String* pLocation;
    String* pPicture_url;
    String* pProfile_url;
    String* pEstimated_location;
    String* pEstimated_zip;
    String* pRegister_ip_addr;
    Boolean* pGenuine_email;
    String* pLast_active_date;
    Boolean* pIs_client;
    Boolean* pIs_hidden;
    String* pInvited_on;
    String* pInvited_by;
    String* pPortfolio_size;
    
};

} /* namespace Swagger */

#endif /* SamiMember_H_ */
