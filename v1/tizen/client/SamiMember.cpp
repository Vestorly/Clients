
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
    pJsonObject->Add(p_idKey, toJson(get_id(), "String", ""));

    
    JsonString *pEmailKey = new JsonString(L"email");
    pJsonObject->Add(pEmailKey, toJson(getEmail(), "String", ""));

    
    JsonString *pFirst_nameKey = new JsonString(L"first_name");
    pJsonObject->Add(pFirst_nameKey, toJson(getFirst_name(), "String", ""));

    
    JsonString *pLast_nameKey = new JsonString(L"last_name");
    pJsonObject->Add(pLast_nameKey, toJson(getLast_name(), "String", ""));

    
    JsonString *pPhoneKey = new JsonString(L"phone");
    pJsonObject->Add(pPhoneKey, toJson(getPhone(), "String", ""));

    
    JsonString *pAddressKey = new JsonString(L"address");
    pJsonObject->Add(pAddressKey, toJson(getAddress(), "String", ""));

    
    JsonString *pCityKey = new JsonString(L"city");
    pJsonObject->Add(pCityKey, toJson(getCity(), "String", ""));

    
    JsonString *pStateKey = new JsonString(L"state");
    pJsonObject->Add(pStateKey, toJson(getState(), "String", ""));

    
    JsonString *pZipKey = new JsonString(L"zip");
    pJsonObject->Add(pZipKey, toJson(getZip(), "String", ""));

    
    JsonString *pGenderKey = new JsonString(L"gender");
    pJsonObject->Add(pGenderKey, toJson(getGender(), "String", ""));

    
    JsonString *pAgeKey = new JsonString(L"age");
    pJsonObject->Add(pAgeKey, toJson(getAge(), "String", ""));

    
    JsonString *pEducationKey = new JsonString(L"education");
    pJsonObject->Add(pEducationKey, toJson(getEducation(), "String", ""));

    
    JsonString *pHigh_net_worthKey = new JsonString(L"high_net_worth");
    pJsonObject->Add(pHigh_net_worthKey, toJson(getHigh_net_worth(), "Boolean", ""));

    
    JsonString *pHome_market_valueKey = new JsonString(L"home_market_value");
    pJsonObject->Add(pHome_market_valueKey, toJson(getHome_market_value(), "String", ""));

    
    JsonString *pHome_owner_statusKey = new JsonString(L"home_owner_status");
    pJsonObject->Add(pHome_owner_statusKey, toJson(getHome_owner_status(), "String", ""));

    
    JsonString *pHousehold_incomeKey = new JsonString(L"household_income");
    pJsonObject->Add(pHousehold_incomeKey, toJson(getHousehold_income(), "String", ""));

    
    JsonString *pMarital_statusKey = new JsonString(L"marital_status");
    pJsonObject->Add(pMarital_statusKey, toJson(getMarital_status(), "String", ""));

    
    JsonString *pOccupationKey = new JsonString(L"occupation");
    pJsonObject->Add(pOccupationKey, toJson(getOccupation(), "String", ""));

    
    JsonString *pHometownKey = new JsonString(L"hometown");
    pJsonObject->Add(pHometownKey, toJson(getHometown(), "String", ""));

    
    JsonString *pFamilyKey = new JsonString(L"family");
    pJsonObject->Add(pFamilyKey, toJson(getFamily(), "String", ""));

    
    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getTags(), "String", ""));

    
    JsonString *pMessageKey = new JsonString(L"message");
    pJsonObject->Add(pMessageKey, toJson(getMessage(), "String", ""));

    
    JsonString *pLocationKey = new JsonString(L"location");
    pJsonObject->Add(pLocationKey, toJson(getLocation(), "String", ""));

    
    JsonString *pPicture_urlKey = new JsonString(L"picture_url");
    pJsonObject->Add(pPicture_urlKey, toJson(getPicture_url(), "String", ""));

    
    JsonString *pProfile_urlKey = new JsonString(L"profile_url");
    pJsonObject->Add(pProfile_urlKey, toJson(getProfile_url(), "String", ""));

    
    JsonString *pEstimated_locationKey = new JsonString(L"estimated_location");
    pJsonObject->Add(pEstimated_locationKey, toJson(getEstimated_location(), "String", ""));

    
    JsonString *pEstimated_zipKey = new JsonString(L"estimated_zip");
    pJsonObject->Add(pEstimated_zipKey, toJson(getEstimated_zip(), "String", ""));

    
    JsonString *pRegister_ip_addrKey = new JsonString(L"register_ip_addr");
    pJsonObject->Add(pRegister_ip_addrKey, toJson(getRegister_ip_addr(), "String", ""));

    
    JsonString *pData_estimatedKey = new JsonString(L"data_estimated");
    pJsonObject->Add(pData_estimatedKey, toJson(getData_estimated(), "Boolean", ""));

    
    JsonString *pGenuine_emailKey = new JsonString(L"genuine_email");
    pJsonObject->Add(pGenuine_emailKey, toJson(getGenuine_email(), "Boolean", ""));

    
    return pJsonObject;
}

String*
SamiMember::get_id() {
    return p_id;
}
void
SamiMember::set_id(String* p_id) {
    this->p_id = p_id;
}

String*
SamiMember::getEmail() {
    return pEmail;
}
void
SamiMember::setEmail(String* pEmail) {
    this->pEmail = pEmail;
}

String*
SamiMember::getFirst_name() {
    return pFirst_name;
}
void
SamiMember::setFirst_name(String* pFirst_name) {
    this->pFirst_name = pFirst_name;
}

String*
SamiMember::getLast_name() {
    return pLast_name;
}
void
SamiMember::setLast_name(String* pLast_name) {
    this->pLast_name = pLast_name;
}

String*
SamiMember::getPhone() {
    return pPhone;
}
void
SamiMember::setPhone(String* pPhone) {
    this->pPhone = pPhone;
}

String*
SamiMember::getAddress() {
    return pAddress;
}
void
SamiMember::setAddress(String* pAddress) {
    this->pAddress = pAddress;
}

String*
SamiMember::getCity() {
    return pCity;
}
void
SamiMember::setCity(String* pCity) {
    this->pCity = pCity;
}

String*
SamiMember::getState() {
    return pState;
}
void
SamiMember::setState(String* pState) {
    this->pState = pState;
}

String*
SamiMember::getZip() {
    return pZip;
}
void
SamiMember::setZip(String* pZip) {
    this->pZip = pZip;
}

String*
SamiMember::getGender() {
    return pGender;
}
void
SamiMember::setGender(String* pGender) {
    this->pGender = pGender;
}

String*
SamiMember::getAge() {
    return pAge;
}
void
SamiMember::setAge(String* pAge) {
    this->pAge = pAge;
}

String*
SamiMember::getEducation() {
    return pEducation;
}
void
SamiMember::setEducation(String* pEducation) {
    this->pEducation = pEducation;
}

Boolean*
SamiMember::getHigh_net_worth() {
    return pHigh_net_worth;
}
void
SamiMember::setHigh_net_worth(Boolean* pHigh_net_worth) {
    this->pHigh_net_worth = pHigh_net_worth;
}

String*
SamiMember::getHome_market_value() {
    return pHome_market_value;
}
void
SamiMember::setHome_market_value(String* pHome_market_value) {
    this->pHome_market_value = pHome_market_value;
}

String*
SamiMember::getHome_owner_status() {
    return pHome_owner_status;
}
void
SamiMember::setHome_owner_status(String* pHome_owner_status) {
    this->pHome_owner_status = pHome_owner_status;
}

String*
SamiMember::getHousehold_income() {
    return pHousehold_income;
}
void
SamiMember::setHousehold_income(String* pHousehold_income) {
    this->pHousehold_income = pHousehold_income;
}

String*
SamiMember::getMarital_status() {
    return pMarital_status;
}
void
SamiMember::setMarital_status(String* pMarital_status) {
    this->pMarital_status = pMarital_status;
}

String*
SamiMember::getOccupation() {
    return pOccupation;
}
void
SamiMember::setOccupation(String* pOccupation) {
    this->pOccupation = pOccupation;
}

String*
SamiMember::getHometown() {
    return pHometown;
}
void
SamiMember::setHometown(String* pHometown) {
    this->pHometown = pHometown;
}

String*
SamiMember::getFamily() {
    return pFamily;
}
void
SamiMember::setFamily(String* pFamily) {
    this->pFamily = pFamily;
}

String*
SamiMember::getTags() {
    return pTags;
}
void
SamiMember::setTags(String* pTags) {
    this->pTags = pTags;
}

String*
SamiMember::getMessage() {
    return pMessage;
}
void
SamiMember::setMessage(String* pMessage) {
    this->pMessage = pMessage;
}

String*
SamiMember::getLocation() {
    return pLocation;
}
void
SamiMember::setLocation(String* pLocation) {
    this->pLocation = pLocation;
}

String*
SamiMember::getPicture_url() {
    return pPicture_url;
}
void
SamiMember::setPicture_url(String* pPicture_url) {
    this->pPicture_url = pPicture_url;
}

String*
SamiMember::getProfile_url() {
    return pProfile_url;
}
void
SamiMember::setProfile_url(String* pProfile_url) {
    this->pProfile_url = pProfile_url;
}

String*
SamiMember::getEstimated_location() {
    return pEstimated_location;
}
void
SamiMember::setEstimated_location(String* pEstimated_location) {
    this->pEstimated_location = pEstimated_location;
}

String*
SamiMember::getEstimated_zip() {
    return pEstimated_zip;
}
void
SamiMember::setEstimated_zip(String* pEstimated_zip) {
    this->pEstimated_zip = pEstimated_zip;
}

String*
SamiMember::getRegister_ip_addr() {
    return pRegister_ip_addr;
}
void
SamiMember::setRegister_ip_addr(String* pRegister_ip_addr) {
    this->pRegister_ip_addr = pRegister_ip_addr;
}

Boolean*
SamiMember::getData_estimated() {
    return pData_estimated;
}
void
SamiMember::setData_estimated(Boolean* pData_estimated) {
    this->pData_estimated = pData_estimated;
}

Boolean*
SamiMember::getGenuine_email() {
    return pGenuine_email;
}
void
SamiMember::setGenuine_email(Boolean* pGenuine_email) {
    this->pGenuine_email = pGenuine_email;
}



} /* namespace Swagger */

