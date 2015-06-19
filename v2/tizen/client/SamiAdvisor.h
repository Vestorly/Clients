/*
 * SamiAdvisor.h
 * 
 * 
 */

#ifndef SamiAdvisor_H_
#define SamiAdvisor_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiAdvisor: public SamiObject {
public:
    SamiAdvisor();
    SamiAdvisor(String* json);
    virtual ~SamiAdvisor();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAdvisor* fromJson(String* obj);

    
    String* getPCompany();
    void setPCompany(String* pCompany);
    
    String* getPAddress();
    void setPAddress(String* pAddress);
    
    String* getPCity();
    void setPCity(String* pCity);
    
    String* getPState();
    void setPState(String* pState);
    
    String* getPZip();
    void setPZip(String* pZip);
    
    String* getPFirstName();
    void setPFirstName(String* pFirst_name);
    
    String* getPLastName();
    void setPLastName(String* pLast_name);
    
    String* getPRegNumber();
    void setPRegNumber(String* pReg_number);
    
    String* getPAccountType();
    void setPAccountType(String* pAccount_type);
    
    String* getPAdvisorEmployees();
    void setPAdvisorEmployees(String* pAdvisor_employees);
    
    String* getPOtherServicesTypes();
    void setPOtherServicesTypes(String* pOther_services_types);
    
    String* getPOtherCompensation();
    void setPOtherCompensation(String* pOther_compensation);
    
    String* getPPerformanceAudited();
    void setPPerformanceAudited(String* pPerformance_audited);
    
    String* getPAbout();
    void setPAbout(String* pAbout);
    
    String* getPTwitterHandle();
    void setPTwitterHandle(String* pTwitter_handle);
    
    String* getPProfilePicture();
    void setPProfilePicture(String* pProfile_picture);
    
    String* getPLogo();
    void setPLogo(String* pLogo);
    
    String* getPLinkedin();
    void setPLinkedin(String* pLinkedin);
    
    String* getPWebsite();
    void setPWebsite(String* pWebsite);
    
    String* getPAdvBrochure();
    void setPAdvBrochure(String* pAdv_brochure);
    
    String* getPPlan();
    void setPPlan(String* pPlan);
    
    String* getPConsultationReminder();
    void setPConsultationReminder(String* pConsultation_reminder);
    
    String* getPReferralReminder();
    void setPReferralReminder(String* pReferral_reminder);
    
    String* getPWeeklyEmailBlast();
    void setPWeeklyEmailBlast(String* pWeekly_email_blast);
    
    String* getPDisclosure();
    void setPDisclosure(String* pDisclosure);
    
    String* getPExternalOptions();
    void setPExternalOptions(String* pExternal_options);
    
    String* getPEmailReportBlast();
    void setPEmailReportBlast(String* pEmail_report_blast);
    
    String* getPEmailBlast();
    void setPEmailBlast(String* pEmail_blast);
    
    String* getPTwitterBlast();
    void setPTwitterBlast(String* pTwitter_blast);
    
    String* getPLinkedinBlast();
    void setPLinkedinBlast(String* pLinkedin_blast);
    
    String* getPFacebookBlast();
    void setPFacebookBlast(String* pFacebook_blast);
    
    String* getPComplianceBccEmailAddress();
    void setPComplianceBccEmailAddress(String* pCompliance_bcc_email_address);
    
    String* getPDashboardUrl();
    void setPDashboardUrl(String* pDashboard_url);
    
    String* getPApiKey();
    void setPApiKey(String* pApi_key);
    
    String* getPId();
    void setPId(String* pId);
    
    String* getPName();
    void setPName(String* pName);
    
    String* getPTag();
    void setPTag(String* pTag);
    

private:
    String* pCompany;
    String* pAddress;
    String* pCity;
    String* pState;
    String* pZip;
    String* pFirst_name;
    String* pLast_name;
    String* pReg_number;
    String* pAccount_type;
    String* pAdvisor_employees;
    String* pOther_services_types;
    String* pOther_compensation;
    String* pPerformance_audited;
    String* pAbout;
    String* pTwitter_handle;
    String* pProfile_picture;
    String* pLogo;
    String* pLinkedin;
    String* pWebsite;
    String* pAdv_brochure;
    String* pPlan;
    String* pConsultation_reminder;
    String* pReferral_reminder;
    String* pWeekly_email_blast;
    String* pDisclosure;
    String* pExternal_options;
    String* pEmail_report_blast;
    String* pEmail_blast;
    String* pTwitter_blast;
    String* pLinkedin_blast;
    String* pFacebook_blast;
    String* pCompliance_bcc_email_address;
    String* pDashboard_url;
    String* pApi_key;
    String* pId;
    String* pName;
    String* pTag;
    
};

} /* namespace Swagger */

#endif /* SamiAdvisor_H_ */
