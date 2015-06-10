
#include "SamiAdvisor.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAdvisor::SamiAdvisor() {
    init();
}

SamiAdvisor::~SamiAdvisor() {
    this->cleanup();
}

void
SamiAdvisor::init() {
    pCompany = null;
    pAddress = null;
    pCity = null;
    pState = null;
    pZip = null;
    pFirst_name = null;
    pLast_name = null;
    pReg_number = null;
    pAccount_type = null;
    pAdvisor_employees = null;
    pOther_services_types = null;
    pOther_compensation = null;
    pPerformance_audited = null;
    pAbout = null;
    pTwitter_handle = null;
    pProfile_picture = null;
    pLogo = null;
    pLinkedin = null;
    pWebsite = null;
    pAdv_brochure = null;
    pPlan = null;
    pConsultation_reminder = null;
    pReferral_reminder = null;
    pWeekly_email_blast = null;
    pDisclosure = null;
    pExternal_options = null;
    pEmail_report_blast = null;
    pEmail_blast = null;
    pTwitter_blast = null;
    pLinkedin_blast = null;
    pFacebook_blast = null;
    pCompliance_bcc_email_address = null;
    pDashboard_url = null;
    pApi_key = null;
    pId = null;
    pName = null;
    pTag = null;
    
}

void
SamiAdvisor::cleanup() {
    if(pCompany != null) {
        
        delete pCompany;
        pCompany = null;
    }
    if(pAddress != null) {
        
        delete pAddress;
        pAddress = null;
    }
    if(pCity != null) {
        
        delete pCity;
        pCity = null;
    }
    if(pState != null) {
        
        delete pState;
        pState = null;
    }
    if(pZip != null) {
        
        delete pZip;
        pZip = null;
    }
    if(pFirst_name != null) {
        
        delete pFirst_name;
        pFirst_name = null;
    }
    if(pLast_name != null) {
        
        delete pLast_name;
        pLast_name = null;
    }
    if(pReg_number != null) {
        
        delete pReg_number;
        pReg_number = null;
    }
    if(pAccount_type != null) {
        
        delete pAccount_type;
        pAccount_type = null;
    }
    if(pAdvisor_employees != null) {
        
        delete pAdvisor_employees;
        pAdvisor_employees = null;
    }
    if(pOther_services_types != null) {
        
        delete pOther_services_types;
        pOther_services_types = null;
    }
    if(pOther_compensation != null) {
        
        delete pOther_compensation;
        pOther_compensation = null;
    }
    if(pPerformance_audited != null) {
        
        delete pPerformance_audited;
        pPerformance_audited = null;
    }
    if(pAbout != null) {
        
        delete pAbout;
        pAbout = null;
    }
    if(pTwitter_handle != null) {
        
        delete pTwitter_handle;
        pTwitter_handle = null;
    }
    if(pProfile_picture != null) {
        
        delete pProfile_picture;
        pProfile_picture = null;
    }
    if(pLogo != null) {
        
        delete pLogo;
        pLogo = null;
    }
    if(pLinkedin != null) {
        
        delete pLinkedin;
        pLinkedin = null;
    }
    if(pWebsite != null) {
        
        delete pWebsite;
        pWebsite = null;
    }
    if(pAdv_brochure != null) {
        
        delete pAdv_brochure;
        pAdv_brochure = null;
    }
    if(pPlan != null) {
        
        delete pPlan;
        pPlan = null;
    }
    if(pConsultation_reminder != null) {
        
        delete pConsultation_reminder;
        pConsultation_reminder = null;
    }
    if(pReferral_reminder != null) {
        
        delete pReferral_reminder;
        pReferral_reminder = null;
    }
    if(pWeekly_email_blast != null) {
        
        delete pWeekly_email_blast;
        pWeekly_email_blast = null;
    }
    if(pDisclosure != null) {
        
        delete pDisclosure;
        pDisclosure = null;
    }
    if(pExternal_options != null) {
        
        delete pExternal_options;
        pExternal_options = null;
    }
    if(pEmail_report_blast != null) {
        
        delete pEmail_report_blast;
        pEmail_report_blast = null;
    }
    if(pEmail_blast != null) {
        
        delete pEmail_blast;
        pEmail_blast = null;
    }
    if(pTwitter_blast != null) {
        
        delete pTwitter_blast;
        pTwitter_blast = null;
    }
    if(pLinkedin_blast != null) {
        
        delete pLinkedin_blast;
        pLinkedin_blast = null;
    }
    if(pFacebook_blast != null) {
        
        delete pFacebook_blast;
        pFacebook_blast = null;
    }
    if(pCompliance_bcc_email_address != null) {
        
        delete pCompliance_bcc_email_address;
        pCompliance_bcc_email_address = null;
    }
    if(pDashboard_url != null) {
        
        delete pDashboard_url;
        pDashboard_url = null;
    }
    if(pApi_key != null) {
        
        delete pApi_key;
        pApi_key = null;
    }
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pTag != null) {
        
        delete pTag;
        pTag = null;
    }
    
}


SamiAdvisor*
SamiAdvisor::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiAdvisor::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCompanyKey = new JsonString(L"company");
        IJsonValue* pCompanyVal = null;
        pJsonObject->GetValue(pCompanyKey, pCompanyVal);
        if(pCompanyVal != null) {
            
            pCompany = new String();
            jsonToValue(pCompany, pCompanyVal, L"String", L"String");
        }
        delete pCompanyKey;
        JsonString* pAddressKey = new JsonString(L"address");
        IJsonValue* pAddressVal = null;
        pJsonObject->GetValue(pAddressKey, pAddressVal);
        if(pAddressVal != null) {
            
            pAddress = new String();
            jsonToValue(pAddress, pAddressVal, L"String", L"String");
        }
        delete pAddressKey;
        JsonString* pCityKey = new JsonString(L"city");
        IJsonValue* pCityVal = null;
        pJsonObject->GetValue(pCityKey, pCityVal);
        if(pCityVal != null) {
            
            pCity = new String();
            jsonToValue(pCity, pCityVal, L"String", L"String");
        }
        delete pCityKey;
        JsonString* pStateKey = new JsonString(L"state");
        IJsonValue* pStateVal = null;
        pJsonObject->GetValue(pStateKey, pStateVal);
        if(pStateVal != null) {
            
            pState = new String();
            jsonToValue(pState, pStateVal, L"String", L"String");
        }
        delete pStateKey;
        JsonString* pZipKey = new JsonString(L"zip");
        IJsonValue* pZipVal = null;
        pJsonObject->GetValue(pZipKey, pZipVal);
        if(pZipVal != null) {
            
            pZip = new String();
            jsonToValue(pZip, pZipVal, L"String", L"String");
        }
        delete pZipKey;
        JsonString* pFirst_nameKey = new JsonString(L"first_name");
        IJsonValue* pFirst_nameVal = null;
        pJsonObject->GetValue(pFirst_nameKey, pFirst_nameVal);
        if(pFirst_nameVal != null) {
            
            pFirst_name = new String();
            jsonToValue(pFirst_name, pFirst_nameVal, L"String", L"String");
        }
        delete pFirst_nameKey;
        JsonString* pLast_nameKey = new JsonString(L"last_name");
        IJsonValue* pLast_nameVal = null;
        pJsonObject->GetValue(pLast_nameKey, pLast_nameVal);
        if(pLast_nameVal != null) {
            
            pLast_name = new String();
            jsonToValue(pLast_name, pLast_nameVal, L"String", L"String");
        }
        delete pLast_nameKey;
        JsonString* pReg_numberKey = new JsonString(L"reg_number");
        IJsonValue* pReg_numberVal = null;
        pJsonObject->GetValue(pReg_numberKey, pReg_numberVal);
        if(pReg_numberVal != null) {
            
            pReg_number = new String();
            jsonToValue(pReg_number, pReg_numberVal, L"String", L"String");
        }
        delete pReg_numberKey;
        JsonString* pAccount_typeKey = new JsonString(L"account_type");
        IJsonValue* pAccount_typeVal = null;
        pJsonObject->GetValue(pAccount_typeKey, pAccount_typeVal);
        if(pAccount_typeVal != null) {
            
            pAccount_type = new String();
            jsonToValue(pAccount_type, pAccount_typeVal, L"String", L"String");
        }
        delete pAccount_typeKey;
        JsonString* pAdvisor_employeesKey = new JsonString(L"advisor_employees");
        IJsonValue* pAdvisor_employeesVal = null;
        pJsonObject->GetValue(pAdvisor_employeesKey, pAdvisor_employeesVal);
        if(pAdvisor_employeesVal != null) {
            
            pAdvisor_employees = new String();
            jsonToValue(pAdvisor_employees, pAdvisor_employeesVal, L"String", L"String");
        }
        delete pAdvisor_employeesKey;
        JsonString* pOther_services_typesKey = new JsonString(L"other_services_types");
        IJsonValue* pOther_services_typesVal = null;
        pJsonObject->GetValue(pOther_services_typesKey, pOther_services_typesVal);
        if(pOther_services_typesVal != null) {
            
            pOther_services_types = new String();
            jsonToValue(pOther_services_types, pOther_services_typesVal, L"String", L"String");
        }
        delete pOther_services_typesKey;
        JsonString* pOther_compensationKey = new JsonString(L"other_compensation");
        IJsonValue* pOther_compensationVal = null;
        pJsonObject->GetValue(pOther_compensationKey, pOther_compensationVal);
        if(pOther_compensationVal != null) {
            
            pOther_compensation = new String();
            jsonToValue(pOther_compensation, pOther_compensationVal, L"String", L"String");
        }
        delete pOther_compensationKey;
        JsonString* pPerformance_auditedKey = new JsonString(L"performance_audited");
        IJsonValue* pPerformance_auditedVal = null;
        pJsonObject->GetValue(pPerformance_auditedKey, pPerformance_auditedVal);
        if(pPerformance_auditedVal != null) {
            
            pPerformance_audited = new String();
            jsonToValue(pPerformance_audited, pPerformance_auditedVal, L"String", L"String");
        }
        delete pPerformance_auditedKey;
        JsonString* pAboutKey = new JsonString(L"about");
        IJsonValue* pAboutVal = null;
        pJsonObject->GetValue(pAboutKey, pAboutVal);
        if(pAboutVal != null) {
            
            pAbout = new String();
            jsonToValue(pAbout, pAboutVal, L"String", L"String");
        }
        delete pAboutKey;
        JsonString* pTwitter_handleKey = new JsonString(L"twitter_handle");
        IJsonValue* pTwitter_handleVal = null;
        pJsonObject->GetValue(pTwitter_handleKey, pTwitter_handleVal);
        if(pTwitter_handleVal != null) {
            
            pTwitter_handle = new String();
            jsonToValue(pTwitter_handle, pTwitter_handleVal, L"String", L"String");
        }
        delete pTwitter_handleKey;
        JsonString* pProfile_pictureKey = new JsonString(L"profile_picture");
        IJsonValue* pProfile_pictureVal = null;
        pJsonObject->GetValue(pProfile_pictureKey, pProfile_pictureVal);
        if(pProfile_pictureVal != null) {
            
            pProfile_picture = new String();
            jsonToValue(pProfile_picture, pProfile_pictureVal, L"String", L"String");
        }
        delete pProfile_pictureKey;
        JsonString* pLogoKey = new JsonString(L"logo");
        IJsonValue* pLogoVal = null;
        pJsonObject->GetValue(pLogoKey, pLogoVal);
        if(pLogoVal != null) {
            
            pLogo = new String();
            jsonToValue(pLogo, pLogoVal, L"String", L"String");
        }
        delete pLogoKey;
        JsonString* pLinkedinKey = new JsonString(L"linkedin");
        IJsonValue* pLinkedinVal = null;
        pJsonObject->GetValue(pLinkedinKey, pLinkedinVal);
        if(pLinkedinVal != null) {
            
            pLinkedin = new String();
            jsonToValue(pLinkedin, pLinkedinVal, L"String", L"String");
        }
        delete pLinkedinKey;
        JsonString* pWebsiteKey = new JsonString(L"website");
        IJsonValue* pWebsiteVal = null;
        pJsonObject->GetValue(pWebsiteKey, pWebsiteVal);
        if(pWebsiteVal != null) {
            
            pWebsite = new String();
            jsonToValue(pWebsite, pWebsiteVal, L"String", L"String");
        }
        delete pWebsiteKey;
        JsonString* pAdv_brochureKey = new JsonString(L"adv_brochure");
        IJsonValue* pAdv_brochureVal = null;
        pJsonObject->GetValue(pAdv_brochureKey, pAdv_brochureVal);
        if(pAdv_brochureVal != null) {
            
            pAdv_brochure = new String();
            jsonToValue(pAdv_brochure, pAdv_brochureVal, L"String", L"String");
        }
        delete pAdv_brochureKey;
        JsonString* pPlanKey = new JsonString(L"plan");
        IJsonValue* pPlanVal = null;
        pJsonObject->GetValue(pPlanKey, pPlanVal);
        if(pPlanVal != null) {
            
            pPlan = new String();
            jsonToValue(pPlan, pPlanVal, L"String", L"String");
        }
        delete pPlanKey;
        JsonString* pConsultation_reminderKey = new JsonString(L"consultation_reminder");
        IJsonValue* pConsultation_reminderVal = null;
        pJsonObject->GetValue(pConsultation_reminderKey, pConsultation_reminderVal);
        if(pConsultation_reminderVal != null) {
            
            pConsultation_reminder = new String();
            jsonToValue(pConsultation_reminder, pConsultation_reminderVal, L"String", L"String");
        }
        delete pConsultation_reminderKey;
        JsonString* pReferral_reminderKey = new JsonString(L"referral_reminder");
        IJsonValue* pReferral_reminderVal = null;
        pJsonObject->GetValue(pReferral_reminderKey, pReferral_reminderVal);
        if(pReferral_reminderVal != null) {
            
            pReferral_reminder = new String();
            jsonToValue(pReferral_reminder, pReferral_reminderVal, L"String", L"String");
        }
        delete pReferral_reminderKey;
        JsonString* pWeekly_email_blastKey = new JsonString(L"weekly_email_blast");
        IJsonValue* pWeekly_email_blastVal = null;
        pJsonObject->GetValue(pWeekly_email_blastKey, pWeekly_email_blastVal);
        if(pWeekly_email_blastVal != null) {
            
            pWeekly_email_blast = new String();
            jsonToValue(pWeekly_email_blast, pWeekly_email_blastVal, L"String", L"String");
        }
        delete pWeekly_email_blastKey;
        JsonString* pDisclosureKey = new JsonString(L"disclosure");
        IJsonValue* pDisclosureVal = null;
        pJsonObject->GetValue(pDisclosureKey, pDisclosureVal);
        if(pDisclosureVal != null) {
            
            pDisclosure = new String();
            jsonToValue(pDisclosure, pDisclosureVal, L"String", L"String");
        }
        delete pDisclosureKey;
        JsonString* pExternal_optionsKey = new JsonString(L"external_options");
        IJsonValue* pExternal_optionsVal = null;
        pJsonObject->GetValue(pExternal_optionsKey, pExternal_optionsVal);
        if(pExternal_optionsVal != null) {
            
            pExternal_options = new String();
            jsonToValue(pExternal_options, pExternal_optionsVal, L"String", L"String");
        }
        delete pExternal_optionsKey;
        JsonString* pEmail_report_blastKey = new JsonString(L"email_report_blast");
        IJsonValue* pEmail_report_blastVal = null;
        pJsonObject->GetValue(pEmail_report_blastKey, pEmail_report_blastVal);
        if(pEmail_report_blastVal != null) {
            
            pEmail_report_blast = new String();
            jsonToValue(pEmail_report_blast, pEmail_report_blastVal, L"String", L"String");
        }
        delete pEmail_report_blastKey;
        JsonString* pEmail_blastKey = new JsonString(L"email_blast");
        IJsonValue* pEmail_blastVal = null;
        pJsonObject->GetValue(pEmail_blastKey, pEmail_blastVal);
        if(pEmail_blastVal != null) {
            
            pEmail_blast = new String();
            jsonToValue(pEmail_blast, pEmail_blastVal, L"String", L"String");
        }
        delete pEmail_blastKey;
        JsonString* pTwitter_blastKey = new JsonString(L"twitter_blast");
        IJsonValue* pTwitter_blastVal = null;
        pJsonObject->GetValue(pTwitter_blastKey, pTwitter_blastVal);
        if(pTwitter_blastVal != null) {
            
            pTwitter_blast = new String();
            jsonToValue(pTwitter_blast, pTwitter_blastVal, L"String", L"String");
        }
        delete pTwitter_blastKey;
        JsonString* pLinkedin_blastKey = new JsonString(L"linkedin_blast");
        IJsonValue* pLinkedin_blastVal = null;
        pJsonObject->GetValue(pLinkedin_blastKey, pLinkedin_blastVal);
        if(pLinkedin_blastVal != null) {
            
            pLinkedin_blast = new String();
            jsonToValue(pLinkedin_blast, pLinkedin_blastVal, L"String", L"String");
        }
        delete pLinkedin_blastKey;
        JsonString* pFacebook_blastKey = new JsonString(L"facebook_blast");
        IJsonValue* pFacebook_blastVal = null;
        pJsonObject->GetValue(pFacebook_blastKey, pFacebook_blastVal);
        if(pFacebook_blastVal != null) {
            
            pFacebook_blast = new String();
            jsonToValue(pFacebook_blast, pFacebook_blastVal, L"String", L"String");
        }
        delete pFacebook_blastKey;
        JsonString* pCompliance_bcc_email_addressKey = new JsonString(L"compliance_bcc_email_address");
        IJsonValue* pCompliance_bcc_email_addressVal = null;
        pJsonObject->GetValue(pCompliance_bcc_email_addressKey, pCompliance_bcc_email_addressVal);
        if(pCompliance_bcc_email_addressVal != null) {
            
            pCompliance_bcc_email_address = new String();
            jsonToValue(pCompliance_bcc_email_address, pCompliance_bcc_email_addressVal, L"String", L"String");
        }
        delete pCompliance_bcc_email_addressKey;
        JsonString* pDashboard_urlKey = new JsonString(L"dashboard_url");
        IJsonValue* pDashboard_urlVal = null;
        pJsonObject->GetValue(pDashboard_urlKey, pDashboard_urlVal);
        if(pDashboard_urlVal != null) {
            
            pDashboard_url = new String();
            jsonToValue(pDashboard_url, pDashboard_urlVal, L"String", L"String");
        }
        delete pDashboard_urlKey;
        JsonString* pApi_keyKey = new JsonString(L"api_key");
        IJsonValue* pApi_keyVal = null;
        pJsonObject->GetValue(pApi_keyKey, pApi_keyVal);
        if(pApi_keyVal != null) {
            
            pApi_key = new String();
            jsonToValue(pApi_key, pApi_keyVal, L"String", L"String");
        }
        delete pApi_keyKey;
        JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pTagKey = new JsonString(L"tag");
        IJsonValue* pTagVal = null;
        pJsonObject->GetValue(pTagKey, pTagVal);
        if(pTagVal != null) {
            
            pTag = new String();
            jsonToValue(pTag, pTagVal, L"String", L"String");
        }
        delete pTagKey;
        
    }
}

SamiAdvisor::SamiAdvisor(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiAdvisor::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiAdvisor::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pCompanyKey = new JsonString(L"company");
    pJsonObject->Add(pCompanyKey, toJson(getPCompany(), "String", ""));

    
    JsonString *pAddressKey = new JsonString(L"address");
    pJsonObject->Add(pAddressKey, toJson(getPAddress(), "String", ""));

    
    JsonString *pCityKey = new JsonString(L"city");
    pJsonObject->Add(pCityKey, toJson(getPCity(), "String", ""));

    
    JsonString *pStateKey = new JsonString(L"state");
    pJsonObject->Add(pStateKey, toJson(getPState(), "String", ""));

    
    JsonString *pZipKey = new JsonString(L"zip");
    pJsonObject->Add(pZipKey, toJson(getPZip(), "String", ""));

    
    JsonString *pFirst_nameKey = new JsonString(L"first_name");
    pJsonObject->Add(pFirst_nameKey, toJson(getPFirstName(), "String", ""));

    
    JsonString *pLast_nameKey = new JsonString(L"last_name");
    pJsonObject->Add(pLast_nameKey, toJson(getPLastName(), "String", ""));

    
    JsonString *pReg_numberKey = new JsonString(L"reg_number");
    pJsonObject->Add(pReg_numberKey, toJson(getPRegNumber(), "String", ""));

    
    JsonString *pAccount_typeKey = new JsonString(L"account_type");
    pJsonObject->Add(pAccount_typeKey, toJson(getPAccountType(), "String", ""));

    
    JsonString *pAdvisor_employeesKey = new JsonString(L"advisor_employees");
    pJsonObject->Add(pAdvisor_employeesKey, toJson(getPAdvisorEmployees(), "String", ""));

    
    JsonString *pOther_services_typesKey = new JsonString(L"other_services_types");
    pJsonObject->Add(pOther_services_typesKey, toJson(getPOtherServicesTypes(), "String", ""));

    
    JsonString *pOther_compensationKey = new JsonString(L"other_compensation");
    pJsonObject->Add(pOther_compensationKey, toJson(getPOtherCompensation(), "String", ""));

    
    JsonString *pPerformance_auditedKey = new JsonString(L"performance_audited");
    pJsonObject->Add(pPerformance_auditedKey, toJson(getPPerformanceAudited(), "String", ""));

    
    JsonString *pAboutKey = new JsonString(L"about");
    pJsonObject->Add(pAboutKey, toJson(getPAbout(), "String", ""));

    
    JsonString *pTwitter_handleKey = new JsonString(L"twitter_handle");
    pJsonObject->Add(pTwitter_handleKey, toJson(getPTwitterHandle(), "String", ""));

    
    JsonString *pProfile_pictureKey = new JsonString(L"profile_picture");
    pJsonObject->Add(pProfile_pictureKey, toJson(getPProfilePicture(), "String", ""));

    
    JsonString *pLogoKey = new JsonString(L"logo");
    pJsonObject->Add(pLogoKey, toJson(getPLogo(), "String", ""));

    
    JsonString *pLinkedinKey = new JsonString(L"linkedin");
    pJsonObject->Add(pLinkedinKey, toJson(getPLinkedin(), "String", ""));

    
    JsonString *pWebsiteKey = new JsonString(L"website");
    pJsonObject->Add(pWebsiteKey, toJson(getPWebsite(), "String", ""));

    
    JsonString *pAdv_brochureKey = new JsonString(L"adv_brochure");
    pJsonObject->Add(pAdv_brochureKey, toJson(getPAdvBrochure(), "String", ""));

    
    JsonString *pPlanKey = new JsonString(L"plan");
    pJsonObject->Add(pPlanKey, toJson(getPPlan(), "String", ""));

    
    JsonString *pConsultation_reminderKey = new JsonString(L"consultation_reminder");
    pJsonObject->Add(pConsultation_reminderKey, toJson(getPConsultationReminder(), "String", ""));

    
    JsonString *pReferral_reminderKey = new JsonString(L"referral_reminder");
    pJsonObject->Add(pReferral_reminderKey, toJson(getPReferralReminder(), "String", ""));

    
    JsonString *pWeekly_email_blastKey = new JsonString(L"weekly_email_blast");
    pJsonObject->Add(pWeekly_email_blastKey, toJson(getPWeeklyEmailBlast(), "String", ""));

    
    JsonString *pDisclosureKey = new JsonString(L"disclosure");
    pJsonObject->Add(pDisclosureKey, toJson(getPDisclosure(), "String", ""));

    
    JsonString *pExternal_optionsKey = new JsonString(L"external_options");
    pJsonObject->Add(pExternal_optionsKey, toJson(getPExternalOptions(), "String", ""));

    
    JsonString *pEmail_report_blastKey = new JsonString(L"email_report_blast");
    pJsonObject->Add(pEmail_report_blastKey, toJson(getPEmailReportBlast(), "String", ""));

    
    JsonString *pEmail_blastKey = new JsonString(L"email_blast");
    pJsonObject->Add(pEmail_blastKey, toJson(getPEmailBlast(), "String", ""));

    
    JsonString *pTwitter_blastKey = new JsonString(L"twitter_blast");
    pJsonObject->Add(pTwitter_blastKey, toJson(getPTwitterBlast(), "String", ""));

    
    JsonString *pLinkedin_blastKey = new JsonString(L"linkedin_blast");
    pJsonObject->Add(pLinkedin_blastKey, toJson(getPLinkedinBlast(), "String", ""));

    
    JsonString *pFacebook_blastKey = new JsonString(L"facebook_blast");
    pJsonObject->Add(pFacebook_blastKey, toJson(getPFacebookBlast(), "String", ""));

    
    JsonString *pCompliance_bcc_email_addressKey = new JsonString(L"compliance_bcc_email_address");
    pJsonObject->Add(pCompliance_bcc_email_addressKey, toJson(getPComplianceBccEmailAddress(), "String", ""));

    
    JsonString *pDashboard_urlKey = new JsonString(L"dashboard_url");
    pJsonObject->Add(pDashboard_urlKey, toJson(getPDashboardUrl(), "String", ""));

    
    JsonString *pApi_keyKey = new JsonString(L"api_key");
    pJsonObject->Add(pApi_keyKey, toJson(getPApiKey(), "String", ""));

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pTagKey = new JsonString(L"tag");
    pJsonObject->Add(pTagKey, toJson(getPTag(), "String", ""));

    
    return pJsonObject;
}

String*
SamiAdvisor::getPCompany() {
    return pCompany;
}
void
SamiAdvisor::setPCompany(String* pCompany) {
    this->pCompany = pCompany;
}

String*
SamiAdvisor::getPAddress() {
    return pAddress;
}
void
SamiAdvisor::setPAddress(String* pAddress) {
    this->pAddress = pAddress;
}

String*
SamiAdvisor::getPCity() {
    return pCity;
}
void
SamiAdvisor::setPCity(String* pCity) {
    this->pCity = pCity;
}

String*
SamiAdvisor::getPState() {
    return pState;
}
void
SamiAdvisor::setPState(String* pState) {
    this->pState = pState;
}

String*
SamiAdvisor::getPZip() {
    return pZip;
}
void
SamiAdvisor::setPZip(String* pZip) {
    this->pZip = pZip;
}

String*
SamiAdvisor::getPFirstName() {
    return pFirst_name;
}
void
SamiAdvisor::setPFirstName(String* pFirst_name) {
    this->pFirst_name = pFirst_name;
}

String*
SamiAdvisor::getPLastName() {
    return pLast_name;
}
void
SamiAdvisor::setPLastName(String* pLast_name) {
    this->pLast_name = pLast_name;
}

String*
SamiAdvisor::getPRegNumber() {
    return pReg_number;
}
void
SamiAdvisor::setPRegNumber(String* pReg_number) {
    this->pReg_number = pReg_number;
}

String*
SamiAdvisor::getPAccountType() {
    return pAccount_type;
}
void
SamiAdvisor::setPAccountType(String* pAccount_type) {
    this->pAccount_type = pAccount_type;
}

String*
SamiAdvisor::getPAdvisorEmployees() {
    return pAdvisor_employees;
}
void
SamiAdvisor::setPAdvisorEmployees(String* pAdvisor_employees) {
    this->pAdvisor_employees = pAdvisor_employees;
}

String*
SamiAdvisor::getPOtherServicesTypes() {
    return pOther_services_types;
}
void
SamiAdvisor::setPOtherServicesTypes(String* pOther_services_types) {
    this->pOther_services_types = pOther_services_types;
}

String*
SamiAdvisor::getPOtherCompensation() {
    return pOther_compensation;
}
void
SamiAdvisor::setPOtherCompensation(String* pOther_compensation) {
    this->pOther_compensation = pOther_compensation;
}

String*
SamiAdvisor::getPPerformanceAudited() {
    return pPerformance_audited;
}
void
SamiAdvisor::setPPerformanceAudited(String* pPerformance_audited) {
    this->pPerformance_audited = pPerformance_audited;
}

String*
SamiAdvisor::getPAbout() {
    return pAbout;
}
void
SamiAdvisor::setPAbout(String* pAbout) {
    this->pAbout = pAbout;
}

String*
SamiAdvisor::getPTwitterHandle() {
    return pTwitter_handle;
}
void
SamiAdvisor::setPTwitterHandle(String* pTwitter_handle) {
    this->pTwitter_handle = pTwitter_handle;
}

String*
SamiAdvisor::getPProfilePicture() {
    return pProfile_picture;
}
void
SamiAdvisor::setPProfilePicture(String* pProfile_picture) {
    this->pProfile_picture = pProfile_picture;
}

String*
SamiAdvisor::getPLogo() {
    return pLogo;
}
void
SamiAdvisor::setPLogo(String* pLogo) {
    this->pLogo = pLogo;
}

String*
SamiAdvisor::getPLinkedin() {
    return pLinkedin;
}
void
SamiAdvisor::setPLinkedin(String* pLinkedin) {
    this->pLinkedin = pLinkedin;
}

String*
SamiAdvisor::getPWebsite() {
    return pWebsite;
}
void
SamiAdvisor::setPWebsite(String* pWebsite) {
    this->pWebsite = pWebsite;
}

String*
SamiAdvisor::getPAdvBrochure() {
    return pAdv_brochure;
}
void
SamiAdvisor::setPAdvBrochure(String* pAdv_brochure) {
    this->pAdv_brochure = pAdv_brochure;
}

String*
SamiAdvisor::getPPlan() {
    return pPlan;
}
void
SamiAdvisor::setPPlan(String* pPlan) {
    this->pPlan = pPlan;
}

String*
SamiAdvisor::getPConsultationReminder() {
    return pConsultation_reminder;
}
void
SamiAdvisor::setPConsultationReminder(String* pConsultation_reminder) {
    this->pConsultation_reminder = pConsultation_reminder;
}

String*
SamiAdvisor::getPReferralReminder() {
    return pReferral_reminder;
}
void
SamiAdvisor::setPReferralReminder(String* pReferral_reminder) {
    this->pReferral_reminder = pReferral_reminder;
}

String*
SamiAdvisor::getPWeeklyEmailBlast() {
    return pWeekly_email_blast;
}
void
SamiAdvisor::setPWeeklyEmailBlast(String* pWeekly_email_blast) {
    this->pWeekly_email_blast = pWeekly_email_blast;
}

String*
SamiAdvisor::getPDisclosure() {
    return pDisclosure;
}
void
SamiAdvisor::setPDisclosure(String* pDisclosure) {
    this->pDisclosure = pDisclosure;
}

String*
SamiAdvisor::getPExternalOptions() {
    return pExternal_options;
}
void
SamiAdvisor::setPExternalOptions(String* pExternal_options) {
    this->pExternal_options = pExternal_options;
}

String*
SamiAdvisor::getPEmailReportBlast() {
    return pEmail_report_blast;
}
void
SamiAdvisor::setPEmailReportBlast(String* pEmail_report_blast) {
    this->pEmail_report_blast = pEmail_report_blast;
}

String*
SamiAdvisor::getPEmailBlast() {
    return pEmail_blast;
}
void
SamiAdvisor::setPEmailBlast(String* pEmail_blast) {
    this->pEmail_blast = pEmail_blast;
}

String*
SamiAdvisor::getPTwitterBlast() {
    return pTwitter_blast;
}
void
SamiAdvisor::setPTwitterBlast(String* pTwitter_blast) {
    this->pTwitter_blast = pTwitter_blast;
}

String*
SamiAdvisor::getPLinkedinBlast() {
    return pLinkedin_blast;
}
void
SamiAdvisor::setPLinkedinBlast(String* pLinkedin_blast) {
    this->pLinkedin_blast = pLinkedin_blast;
}

String*
SamiAdvisor::getPFacebookBlast() {
    return pFacebook_blast;
}
void
SamiAdvisor::setPFacebookBlast(String* pFacebook_blast) {
    this->pFacebook_blast = pFacebook_blast;
}

String*
SamiAdvisor::getPComplianceBccEmailAddress() {
    return pCompliance_bcc_email_address;
}
void
SamiAdvisor::setPComplianceBccEmailAddress(String* pCompliance_bcc_email_address) {
    this->pCompliance_bcc_email_address = pCompliance_bcc_email_address;
}

String*
SamiAdvisor::getPDashboardUrl() {
    return pDashboard_url;
}
void
SamiAdvisor::setPDashboardUrl(String* pDashboard_url) {
    this->pDashboard_url = pDashboard_url;
}

String*
SamiAdvisor::getPApiKey() {
    return pApi_key;
}
void
SamiAdvisor::setPApiKey(String* pApi_key) {
    this->pApi_key = pApi_key;
}

String*
SamiAdvisor::getPId() {
    return pId;
}
void
SamiAdvisor::setPId(String* pId) {
    this->pId = pId;
}

String*
SamiAdvisor::getPName() {
    return pName;
}
void
SamiAdvisor::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiAdvisor::getPTag() {
    return pTag;
}
void
SamiAdvisor::setPTag(String* pTag) {
    this->pTag = pTag;
}



} /* namespace Swagger */

