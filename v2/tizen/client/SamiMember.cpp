
#include "SamiMember.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMember::SamiMember() {
    init();
}

SamiMember::~SamiMember() {
    this->cleanup();
}

void
SamiMember::init() {
    p_id = null;
    pEmail = null;
    pFirst_name = null;
    pLast_name = null;
    pPhone = null;
    pAddress = null;
    pCity = null;
    pState = null;
    pZip = null;
    pGender = null;
    pAge = null;
    pEducation = null;
    pHigh_net_worth = null;
    pHome_market_value = null;
    pHome_owner_status = null;
    pHousehold_income = null;
    pMarital_status = null;
    pOccupation = null;
    pHometown = null;
    pFamily = null;
    pTags = null;
    pMessage = null;
    pLocation = null;
    pPicture_url = null;
    pProfile_url = null;
    pEstimated_location = null;
    pEstimated_zip = null;
    pRegister_ip_addr = null;
    pData_estimated = null;
    pGenuine_email = null;
    
}

void
SamiMember::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pEmail != null) {
        
        delete pEmail;
        pEmail = null;
    }
    if(pFirst_name != null) {
        
        delete pFirst_name;
        pFirst_name = null;
    }
    if(pLast_name != null) {
        
        delete pLast_name;
        pLast_name = null;
    }
    if(pPhone != null) {
        
        delete pPhone;
        pPhone = null;
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
    if(pGender != null) {
        
        delete pGender;
        pGender = null;
    }
    if(pAge != null) {
        
        delete pAge;
        pAge = null;
    }
    if(pEducation != null) {
        
        delete pEducation;
        pEducation = null;
    }
    if(pHigh_net_worth != null) {
        
        delete pHigh_net_worth;
        pHigh_net_worth = null;
    }
    if(pHome_market_value != null) {
        
        delete pHome_market_value;
        pHome_market_value = null;
    }
    if(pHome_owner_status != null) {
        
        delete pHome_owner_status;
        pHome_owner_status = null;
    }
    if(pHousehold_income != null) {
        
        delete pHousehold_income;
        pHousehold_income = null;
    }
    if(pMarital_status != null) {
        
        delete pMarital_status;
        pMarital_status = null;
    }
    if(pOccupation != null) {
        
        delete pOccupation;
        pOccupation = null;
    }
    if(pHometown != null) {
        
        delete pHometown;
        pHometown = null;
    }
    if(pFamily != null) {
        
        delete pFamily;
        pFamily = null;
    }
    if(pTags != null) {
        
        delete pTags;
        pTags = null;
    }
    if(pMessage != null) {
        
        delete pMessage;
        pMessage = null;
    }
    if(pLocation != null) {
        
        delete pLocation;
        pLocation = null;
    }
    if(pPicture_url != null) {
        
        delete pPicture_url;
        pPicture_url = null;
    }
    if(pProfile_url != null) {
        
        delete pProfile_url;
        pProfile_url = null;
    }
    if(pEstimated_location != null) {
        
        delete pEstimated_location;
        pEstimated_location = null;
    }
    if(pEstimated_zip != null) {
        
        delete pEstimated_zip;
        pEstimated_zip = null;
    }
    if(pRegister_ip_addr != null) {
        
        delete pRegister_ip_addr;
        pRegister_ip_addr = null;
    }
    if(pData_estimated != null) {
        
        delete pData_estimated;
        pData_estimated = null;
    }
    if(pGenuine_email != null) {
        
        delete pGenuine_email;
        pGenuine_email = null;
    }
    
}


SamiMember*
SamiMember::fromJson(String* json) {
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
SamiMember::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* p_idKey = new JsonString(L"_id");
        IJsonValue* p_idVal = null;
        pJsonObject->GetValue(p_idKey, p_idVal);
        if(p_idVal != null) {
            
            p_id = new String();
            jsonToValue(p_id, p_idVal, L"String", L"String");
        }
        delete p_idKey;
        JsonString* pEmailKey = new JsonString(L"email");
        IJsonValue* pEmailVal = null;
        pJsonObject->GetValue(pEmailKey, pEmailVal);
        if(pEmailVal != null) {
            
            pEmail = new String();
            jsonToValue(pEmail, pEmailVal, L"String", L"String");
        }
        delete pEmailKey;
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
        JsonString* pPhoneKey = new JsonString(L"phone");
        IJsonValue* pPhoneVal = null;
        pJsonObject->GetValue(pPhoneKey, pPhoneVal);
        if(pPhoneVal != null) {
            
            pPhone = new String();
            jsonToValue(pPhone, pPhoneVal, L"String", L"String");
        }
        delete pPhoneKey;
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
        JsonString* pGenderKey = new JsonString(L"gender");
        IJsonValue* pGenderVal = null;
        pJsonObject->GetValue(pGenderKey, pGenderVal);
        if(pGenderVal != null) {
            
            pGender = new String();
            jsonToValue(pGender, pGenderVal, L"String", L"String");
        }
        delete pGenderKey;
        JsonString* pAgeKey = new JsonString(L"age");
        IJsonValue* pAgeVal = null;
        pJsonObject->GetValue(pAgeKey, pAgeVal);
        if(pAgeVal != null) {
            
            pAge = new String();
            jsonToValue(pAge, pAgeVal, L"String", L"String");
        }
        delete pAgeKey;
        JsonString* pEducationKey = new JsonString(L"education");
        IJsonValue* pEducationVal = null;
        pJsonObject->GetValue(pEducationKey, pEducationVal);
        if(pEducationVal != null) {
            
            pEducation = new String();
            jsonToValue(pEducation, pEducationVal, L"String", L"String");
        }
        delete pEducationKey;
        JsonString* pHigh_net_worthKey = new JsonString(L"high_net_worth");
        IJsonValue* pHigh_net_worthVal = null;
        pJsonObject->GetValue(pHigh_net_worthKey, pHigh_net_worthVal);
        if(pHigh_net_worthVal != null) {
            
            pHigh_net_worth = new Boolean(false);
            jsonToValue(pHigh_net_worth, pHigh_net_worthVal, L"Boolean", L"Boolean");
        }
        delete pHigh_net_worthKey;
        JsonString* pHome_market_valueKey = new JsonString(L"home_market_value");
        IJsonValue* pHome_market_valueVal = null;
        pJsonObject->GetValue(pHome_market_valueKey, pHome_market_valueVal);
        if(pHome_market_valueVal != null) {
            
            pHome_market_value = new String();
            jsonToValue(pHome_market_value, pHome_market_valueVal, L"String", L"String");
        }
        delete pHome_market_valueKey;
        JsonString* pHome_owner_statusKey = new JsonString(L"home_owner_status");
        IJsonValue* pHome_owner_statusVal = null;
        pJsonObject->GetValue(pHome_owner_statusKey, pHome_owner_statusVal);
        if(pHome_owner_statusVal != null) {
            
            pHome_owner_status = new String();
            jsonToValue(pHome_owner_status, pHome_owner_statusVal, L"String", L"String");
        }
        delete pHome_owner_statusKey;
        JsonString* pHousehold_incomeKey = new JsonString(L"household_income");
        IJsonValue* pHousehold_incomeVal = null;
        pJsonObject->GetValue(pHousehold_incomeKey, pHousehold_incomeVal);
        if(pHousehold_incomeVal != null) {
            
            pHousehold_income = new String();
            jsonToValue(pHousehold_income, pHousehold_incomeVal, L"String", L"String");
        }
        delete pHousehold_incomeKey;
        JsonString* pMarital_statusKey = new JsonString(L"marital_status");
        IJsonValue* pMarital_statusVal = null;
        pJsonObject->GetValue(pMarital_statusKey, pMarital_statusVal);
        if(pMarital_statusVal != null) {
            
            pMarital_status = new String();
            jsonToValue(pMarital_status, pMarital_statusVal, L"String", L"String");
        }
        delete pMarital_statusKey;
        JsonString* pOccupationKey = new JsonString(L"occupation");
        IJsonValue* pOccupationVal = null;
        pJsonObject->GetValue(pOccupationKey, pOccupationVal);
        if(pOccupationVal != null) {
            
            pOccupation = new String();
            jsonToValue(pOccupation, pOccupationVal, L"String", L"String");
        }
        delete pOccupationKey;
        JsonString* pHometownKey = new JsonString(L"hometown");
        IJsonValue* pHometownVal = null;
        pJsonObject->GetValue(pHometownKey, pHometownVal);
        if(pHometownVal != null) {
            
            pHometown = new String();
            jsonToValue(pHometown, pHometownVal, L"String", L"String");
        }
        delete pHometownKey;
        JsonString* pFamilyKey = new JsonString(L"family");
        IJsonValue* pFamilyVal = null;
        pJsonObject->GetValue(pFamilyKey, pFamilyVal);
        if(pFamilyVal != null) {
            
            pFamily = new String();
            jsonToValue(pFamily, pFamilyVal, L"String", L"String");
        }
        delete pFamilyKey;
        JsonString* pTagsKey = new JsonString(L"tags");
        IJsonValue* pTagsVal = null;
        pJsonObject->GetValue(pTagsKey, pTagsVal);
        if(pTagsVal != null) {
            
            pTags = new String();
            jsonToValue(pTags, pTagsVal, L"String", L"String");
        }
        delete pTagsKey;
        JsonString* pMessageKey = new JsonString(L"message");
        IJsonValue* pMessageVal = null;
        pJsonObject->GetValue(pMessageKey, pMessageVal);
        if(pMessageVal != null) {
            
            pMessage = new String();
            jsonToValue(pMessage, pMessageVal, L"String", L"String");
        }
        delete pMessageKey;
        JsonString* pLocationKey = new JsonString(L"location");
        IJsonValue* pLocationVal = null;
        pJsonObject->GetValue(pLocationKey, pLocationVal);
        if(pLocationVal != null) {
            
            pLocation = new String();
            jsonToValue(pLocation, pLocationVal, L"String", L"String");
        }
        delete pLocationKey;
        JsonString* pPicture_urlKey = new JsonString(L"picture_url");
        IJsonValue* pPicture_urlVal = null;
        pJsonObject->GetValue(pPicture_urlKey, pPicture_urlVal);
        if(pPicture_urlVal != null) {
            
            pPicture_url = new String();
            jsonToValue(pPicture_url, pPicture_urlVal, L"String", L"String");
        }
        delete pPicture_urlKey;
        JsonString* pProfile_urlKey = new JsonString(L"profile_url");
        IJsonValue* pProfile_urlVal = null;
        pJsonObject->GetValue(pProfile_urlKey, pProfile_urlVal);
        if(pProfile_urlVal != null) {
            
            pProfile_url = new String();
            jsonToValue(pProfile_url, pProfile_urlVal, L"String", L"String");
        }
        delete pProfile_urlKey;
        JsonString* pEstimated_locationKey = new JsonString(L"estimated_location");
        IJsonValue* pEstimated_locationVal = null;
        pJsonObject->GetValue(pEstimated_locationKey, pEstimated_locationVal);
        if(pEstimated_locationVal != null) {
            
            pEstimated_location = new String();
            jsonToValue(pEstimated_location, pEstimated_locationVal, L"String", L"String");
        }
        delete pEstimated_locationKey;
        JsonString* pEstimated_zipKey = new JsonString(L"estimated_zip");
        IJsonValue* pEstimated_zipVal = null;
        pJsonObject->GetValue(pEstimated_zipKey, pEstimated_zipVal);
        if(pEstimated_zipVal != null) {
            
            pEstimated_zip = new String();
            jsonToValue(pEstimated_zip, pEstimated_zipVal, L"String", L"String");
        }
        delete pEstimated_zipKey;
        JsonString* pRegister_ip_addrKey = new JsonString(L"register_ip_addr");
        IJsonValue* pRegister_ip_addrVal = null;
        pJsonObject->GetValue(pRegister_ip_addrKey, pRegister_ip_addrVal);
        if(pRegister_ip_addrVal != null) {
            
            pRegister_ip_addr = new String();
            jsonToValue(pRegister_ip_addr, pRegister_ip_addrVal, L"String", L"String");
        }
        delete pRegister_ip_addrKey;
        JsonString* pData_estimatedKey = new JsonString(L"data_estimated");
        IJsonValue* pData_estimatedVal = null;
        pJsonObject->GetValue(pData_estimatedKey, pData_estimatedVal);
        if(pData_estimatedVal != null) {
            
            pData_estimated = new Boolean(false);
            jsonToValue(pData_estimated, pData_estimatedVal, L"Boolean", L"Boolean");
        }
        delete pData_estimatedKey;
        JsonString* pGenuine_emailKey = new JsonString(L"genuine_email");
        IJsonValue* pGenuine_emailVal = null;
        pJsonObject->GetValue(pGenuine_emailKey, pGenuine_emailVal);
        if(pGenuine_emailVal != null) {
            
            pGenuine_email = new Boolean(false);
            jsonToValue(pGenuine_email, pGenuine_emailVal, L"Boolean", L"Boolean");
        }
        delete pGenuine_emailKey;
        
    }
}

SamiMember::SamiMember(String* json) {
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
SamiMember::asJson ()
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
SamiMember::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pEmailKey = new JsonString(L"email");
    pJsonObject->Add(pEmailKey, toJson(getPEmail(), "String", ""));

    
    JsonString *pFirst_nameKey = new JsonString(L"first_name");
    pJsonObject->Add(pFirst_nameKey, toJson(getPFirstName(), "String", ""));

    
    JsonString *pLast_nameKey = new JsonString(L"last_name");
    pJsonObject->Add(pLast_nameKey, toJson(getPLastName(), "String", ""));

    
    JsonString *pPhoneKey = new JsonString(L"phone");
    pJsonObject->Add(pPhoneKey, toJson(getPPhone(), "String", ""));

    
    JsonString *pAddressKey = new JsonString(L"address");
    pJsonObject->Add(pAddressKey, toJson(getPAddress(), "String", ""));

    
    JsonString *pCityKey = new JsonString(L"city");
    pJsonObject->Add(pCityKey, toJson(getPCity(), "String", ""));

    
    JsonString *pStateKey = new JsonString(L"state");
    pJsonObject->Add(pStateKey, toJson(getPState(), "String", ""));

    
    JsonString *pZipKey = new JsonString(L"zip");
    pJsonObject->Add(pZipKey, toJson(getPZip(), "String", ""));

    
    JsonString *pGenderKey = new JsonString(L"gender");
    pJsonObject->Add(pGenderKey, toJson(getPGender(), "String", ""));

    
    JsonString *pAgeKey = new JsonString(L"age");
    pJsonObject->Add(pAgeKey, toJson(getPAge(), "String", ""));

    
    JsonString *pEducationKey = new JsonString(L"education");
    pJsonObject->Add(pEducationKey, toJson(getPEducation(), "String", ""));

    
    JsonString *pHigh_net_worthKey = new JsonString(L"high_net_worth");
    pJsonObject->Add(pHigh_net_worthKey, toJson(getPHighNetWorth(), "Boolean", ""));

    
    JsonString *pHome_market_valueKey = new JsonString(L"home_market_value");
    pJsonObject->Add(pHome_market_valueKey, toJson(getPHomeMarketValue(), "String", ""));

    
    JsonString *pHome_owner_statusKey = new JsonString(L"home_owner_status");
    pJsonObject->Add(pHome_owner_statusKey, toJson(getPHomeOwnerStatus(), "String", ""));

    
    JsonString *pHousehold_incomeKey = new JsonString(L"household_income");
    pJsonObject->Add(pHousehold_incomeKey, toJson(getPHouseholdIncome(), "String", ""));

    
    JsonString *pMarital_statusKey = new JsonString(L"marital_status");
    pJsonObject->Add(pMarital_statusKey, toJson(getPMaritalStatus(), "String", ""));

    
    JsonString *pOccupationKey = new JsonString(L"occupation");
    pJsonObject->Add(pOccupationKey, toJson(getPOccupation(), "String", ""));

    
    JsonString *pHometownKey = new JsonString(L"hometown");
    pJsonObject->Add(pHometownKey, toJson(getPHometown(), "String", ""));

    
    JsonString *pFamilyKey = new JsonString(L"family");
    pJsonObject->Add(pFamilyKey, toJson(getPFamily(), "String", ""));

    
    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "String", ""));

    
    JsonString *pMessageKey = new JsonString(L"message");
    pJsonObject->Add(pMessageKey, toJson(getPMessage(), "String", ""));

    
    JsonString *pLocationKey = new JsonString(L"location");
    pJsonObject->Add(pLocationKey, toJson(getPLocation(), "String", ""));

    
    JsonString *pPicture_urlKey = new JsonString(L"picture_url");
    pJsonObject->Add(pPicture_urlKey, toJson(getPPictureUrl(), "String", ""));

    
    JsonString *pProfile_urlKey = new JsonString(L"profile_url");
    pJsonObject->Add(pProfile_urlKey, toJson(getPProfileUrl(), "String", ""));

    
    JsonString *pEstimated_locationKey = new JsonString(L"estimated_location");
    pJsonObject->Add(pEstimated_locationKey, toJson(getPEstimatedLocation(), "String", ""));

    
    JsonString *pEstimated_zipKey = new JsonString(L"estimated_zip");
    pJsonObject->Add(pEstimated_zipKey, toJson(getPEstimatedZip(), "String", ""));

    
    JsonString *pRegister_ip_addrKey = new JsonString(L"register_ip_addr");
    pJsonObject->Add(pRegister_ip_addrKey, toJson(getPRegisterIpAddr(), "String", ""));

    
    JsonString *pData_estimatedKey = new JsonString(L"data_estimated");
    pJsonObject->Add(pData_estimatedKey, toJson(getPDataEstimated(), "Boolean", ""));

    
    JsonString *pGenuine_emailKey = new JsonString(L"genuine_email");
    pJsonObject->Add(pGenuine_emailKey, toJson(getPGenuineEmail(), "Boolean", ""));

    
    return pJsonObject;
}

String*
SamiMember::getPId() {
    return p_id;
}
void
SamiMember::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiMember::getPEmail() {
    return pEmail;
}
void
SamiMember::setPEmail(String* pEmail) {
    this->pEmail = pEmail;
}

String*
SamiMember::getPFirstName() {
    return pFirst_name;
}
void
SamiMember::setPFirstName(String* pFirst_name) {
    this->pFirst_name = pFirst_name;
}

String*
SamiMember::getPLastName() {
    return pLast_name;
}
void
SamiMember::setPLastName(String* pLast_name) {
    this->pLast_name = pLast_name;
}

String*
SamiMember::getPPhone() {
    return pPhone;
}
void
SamiMember::setPPhone(String* pPhone) {
    this->pPhone = pPhone;
}

String*
SamiMember::getPAddress() {
    return pAddress;
}
void
SamiMember::setPAddress(String* pAddress) {
    this->pAddress = pAddress;
}

String*
SamiMember::getPCity() {
    return pCity;
}
void
SamiMember::setPCity(String* pCity) {
    this->pCity = pCity;
}

String*
SamiMember::getPState() {
    return pState;
}
void
SamiMember::setPState(String* pState) {
    this->pState = pState;
}

String*
SamiMember::getPZip() {
    return pZip;
}
void
SamiMember::setPZip(String* pZip) {
    this->pZip = pZip;
}

String*
SamiMember::getPGender() {
    return pGender;
}
void
SamiMember::setPGender(String* pGender) {
    this->pGender = pGender;
}

String*
SamiMember::getPAge() {
    return pAge;
}
void
SamiMember::setPAge(String* pAge) {
    this->pAge = pAge;
}

String*
SamiMember::getPEducation() {
    return pEducation;
}
void
SamiMember::setPEducation(String* pEducation) {
    this->pEducation = pEducation;
}

Boolean*
SamiMember::getPHighNetWorth() {
    return pHigh_net_worth;
}
void
SamiMember::setPHighNetWorth(Boolean* pHigh_net_worth) {
    this->pHigh_net_worth = pHigh_net_worth;
}

String*
SamiMember::getPHomeMarketValue() {
    return pHome_market_value;
}
void
SamiMember::setPHomeMarketValue(String* pHome_market_value) {
    this->pHome_market_value = pHome_market_value;
}

String*
SamiMember::getPHomeOwnerStatus() {
    return pHome_owner_status;
}
void
SamiMember::setPHomeOwnerStatus(String* pHome_owner_status) {
    this->pHome_owner_status = pHome_owner_status;
}

String*
SamiMember::getPHouseholdIncome() {
    return pHousehold_income;
}
void
SamiMember::setPHouseholdIncome(String* pHousehold_income) {
    this->pHousehold_income = pHousehold_income;
}

String*
SamiMember::getPMaritalStatus() {
    return pMarital_status;
}
void
SamiMember::setPMaritalStatus(String* pMarital_status) {
    this->pMarital_status = pMarital_status;
}

String*
SamiMember::getPOccupation() {
    return pOccupation;
}
void
SamiMember::setPOccupation(String* pOccupation) {
    this->pOccupation = pOccupation;
}

String*
SamiMember::getPHometown() {
    return pHometown;
}
void
SamiMember::setPHometown(String* pHometown) {
    this->pHometown = pHometown;
}

String*
SamiMember::getPFamily() {
    return pFamily;
}
void
SamiMember::setPFamily(String* pFamily) {
    this->pFamily = pFamily;
}

String*
SamiMember::getPTags() {
    return pTags;
}
void
SamiMember::setPTags(String* pTags) {
    this->pTags = pTags;
}

String*
SamiMember::getPMessage() {
    return pMessage;
}
void
SamiMember::setPMessage(String* pMessage) {
    this->pMessage = pMessage;
}

String*
SamiMember::getPLocation() {
    return pLocation;
}
void
SamiMember::setPLocation(String* pLocation) {
    this->pLocation = pLocation;
}

String*
SamiMember::getPPictureUrl() {
    return pPicture_url;
}
void
SamiMember::setPPictureUrl(String* pPicture_url) {
    this->pPicture_url = pPicture_url;
}

String*
SamiMember::getPProfileUrl() {
    return pProfile_url;
}
void
SamiMember::setPProfileUrl(String* pProfile_url) {
    this->pProfile_url = pProfile_url;
}

String*
SamiMember::getPEstimatedLocation() {
    return pEstimated_location;
}
void
SamiMember::setPEstimatedLocation(String* pEstimated_location) {
    this->pEstimated_location = pEstimated_location;
}

String*
SamiMember::getPEstimatedZip() {
    return pEstimated_zip;
}
void
SamiMember::setPEstimatedZip(String* pEstimated_zip) {
    this->pEstimated_zip = pEstimated_zip;
}

String*
SamiMember::getPRegisterIpAddr() {
    return pRegister_ip_addr;
}
void
SamiMember::setPRegisterIpAddr(String* pRegister_ip_addr) {
    this->pRegister_ip_addr = pRegister_ip_addr;
}

Boolean*
SamiMember::getPDataEstimated() {
    return pData_estimated;
}
void
SamiMember::setPDataEstimated(Boolean* pData_estimated) {
    this->pData_estimated = pData_estimated;
}

Boolean*
SamiMember::getPGenuineEmail() {
    return pGenuine_email;
}
void
SamiMember::setPGenuineEmail(Boolean* pGenuine_email) {
    this->pGenuine_email = pGenuine_email;
}



} /* namespace Swagger */

