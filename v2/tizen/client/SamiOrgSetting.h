/*
 * SamiOrgSetting.h
 * 
 * 
 */

#ifndef SamiOrgSetting_H_
#define SamiOrgSetting_H_

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

class SamiOrgSetting: public SamiObject {
public:
    SamiOrgSetting();
    SamiOrgSetting(String* json);
    virtual ~SamiOrgSetting();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiOrgSetting* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    Boolean* getPIsDefault();
    void setPIsDefault(Boolean* pIs_default);
    
    String* getPName();
    void setPName(String* pName);
    
    String* getPEmailThemeName();
    void setPEmailThemeName(String* pEmail_theme_name);
    
    String* getPCompanyAddress();
    void setPCompanyAddress(String* pCompany_address);
    
    String* getPCompanyContactEmail();
    void setPCompanyContactEmail(String* pCompany_contact_email);
    
    String* getPSiteUrl();
    void setPSiteUrl(String* pSite_url);
    
    String* getPCompanyHomepageUrl();
    void setPCompanyHomepageUrl(String* pCompany_homepage_url);
    
    String* getPPrivacyPolicyUrl();
    void setPPrivacyPolicyUrl(String* pPrivacy_policy_url);
    
    String* getPTermsAndConditionsUrl();
    void setPTermsAndConditionsUrl(String* pTerms_and_conditions_url);
    

private:
    String* p_id;
    Boolean* pIs_default;
    String* pName;
    String* pEmail_theme_name;
    String* pCompany_address;
    String* pCompany_contact_email;
    String* pSite_url;
    String* pCompany_homepage_url;
    String* pPrivacy_policy_url;
    String* pTerms_and_conditions_url;
    
};

} /* namespace Swagger */

#endif /* SamiOrgSetting_H_ */
