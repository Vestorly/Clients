
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
    p_id = null;
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
    pAssets = null;
    pNum_clients = null;
    
}

void
SamiAdvisor::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
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
    if(pAssets != null) {
        
        delete pAssets;
        pAssets = null;
    }
    if(pNum_clients != null) {
        
        delete pNum_clients;
        pNum_clients = null;
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
        JsonString* p_idKey = new JsonString(L"_id");
        IJsonValue* p_idVal = null;
        pJsonObject->GetValue(p_idKey, p_idVal);
        if(p_idVal != null) {
            
            p_id = new String();
            jsonToValue(p_id, p_idVal, L"String", L"String");
        }
        delete p_idKey;
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
        JsonString* pAssetsKey = new JsonString(L"assets");
        IJsonValue* pAssetsVal = null;
        pJsonObject->GetValue(pAssetsKey, pAssetsVal);
        if(pAssetsVal != null) {
            
            pAssets = new String();
            jsonToValue(pAssets, pAssetsVal, L"String", L"String");
        }
        delete pAssetsKey;
        JsonString* pNum_clientsKey = new JsonString(L"num_clients");
        IJsonValue* pNum_clientsVal = null;
        pJsonObject->GetValue(pNum_clientsKey, pNum_clientsVal);
        if(pNum_clientsVal != null) {
            
            pNum_clients = new Integer();
            jsonToValue(pNum_clients, pNum_clientsVal, L"Integer", L"Integer");
        }
        delete pNum_clientsKey;
        
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

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(get_id(), "String", ""));

    
    JsonString *pCompanyKey = new JsonString(L"company");
    pJsonObject->Add(pCompanyKey, toJson(getCompany(), "String", ""));

    
    JsonString *pAddressKey = new JsonString(L"address");
    pJsonObject->Add(pAddressKey, toJson(getAddress(), "String", ""));

    
    JsonString *pCityKey = new JsonString(L"city");
    pJsonObject->Add(pCityKey, toJson(getCity(), "String", ""));

    
    JsonString *pStateKey = new JsonString(L"state");
    pJsonObject->Add(pStateKey, toJson(getState(), "String", ""));

    
    JsonString *pZipKey = new JsonString(L"zip");
    pJsonObject->Add(pZipKey, toJson(getZip(), "String", ""));

    
    JsonString *pFirst_nameKey = new JsonString(L"first_name");
    pJsonObject->Add(pFirst_nameKey, toJson(getFirst_name(), "String", ""));

    
    JsonString *pLast_nameKey = new JsonString(L"last_name");
    pJsonObject->Add(pLast_nameKey, toJson(getLast_name(), "String", ""));

    
    JsonString *pReg_numberKey = new JsonString(L"reg_number");
    pJsonObject->Add(pReg_numberKey, toJson(getReg_number(), "String", ""));

    
    JsonString *pAccount_typeKey = new JsonString(L"account_type");
    pJsonObject->Add(pAccount_typeKey, toJson(getAccount_type(), "String", ""));

    
    JsonString *pAdvisor_employeesKey = new JsonString(L"advisor_employees");
    pJsonObject->Add(pAdvisor_employeesKey, toJson(getAdvisor_employees(), "String", ""));

    
    JsonString *pAssetsKey = new JsonString(L"assets");
    pJsonObject->Add(pAssetsKey, toJson(getAssets(), "String", ""));

    
    JsonString *pNum_clientsKey = new JsonString(L"num_clients");
    pJsonObject->Add(pNum_clientsKey, toJson(getNum_clients(), "Integer", ""));

    
    return pJsonObject;
}

String*
SamiAdvisor::get_id() {
    return p_id;
}
void
SamiAdvisor::set_id(String* p_id) {
    this->p_id = p_id;
}

String*
SamiAdvisor::getCompany() {
    return pCompany;
}
void
SamiAdvisor::setCompany(String* pCompany) {
    this->pCompany = pCompany;
}

String*
SamiAdvisor::getAddress() {
    return pAddress;
}
void
SamiAdvisor::setAddress(String* pAddress) {
    this->pAddress = pAddress;
}

String*
SamiAdvisor::getCity() {
    return pCity;
}
void
SamiAdvisor::setCity(String* pCity) {
    this->pCity = pCity;
}

String*
SamiAdvisor::getState() {
    return pState;
}
void
SamiAdvisor::setState(String* pState) {
    this->pState = pState;
}

String*
SamiAdvisor::getZip() {
    return pZip;
}
void
SamiAdvisor::setZip(String* pZip) {
    this->pZip = pZip;
}

String*
SamiAdvisor::getFirst_name() {
    return pFirst_name;
}
void
SamiAdvisor::setFirst_name(String* pFirst_name) {
    this->pFirst_name = pFirst_name;
}

String*
SamiAdvisor::getLast_name() {
    return pLast_name;
}
void
SamiAdvisor::setLast_name(String* pLast_name) {
    this->pLast_name = pLast_name;
}

String*
SamiAdvisor::getReg_number() {
    return pReg_number;
}
void
SamiAdvisor::setReg_number(String* pReg_number) {
    this->pReg_number = pReg_number;
}

String*
SamiAdvisor::getAccount_type() {
    return pAccount_type;
}
void
SamiAdvisor::setAccount_type(String* pAccount_type) {
    this->pAccount_type = pAccount_type;
}

String*
SamiAdvisor::getAdvisor_employees() {
    return pAdvisor_employees;
}
void
SamiAdvisor::setAdvisor_employees(String* pAdvisor_employees) {
    this->pAdvisor_employees = pAdvisor_employees;
}

String*
SamiAdvisor::getAssets() {
    return pAssets;
}
void
SamiAdvisor::setAssets(String* pAssets) {
    this->pAssets = pAssets;
}

Integer*
SamiAdvisor::getNum_clients() {
    return pNum_clients;
}
void
SamiAdvisor::setNum_clients(Integer* pNum_clients) {
    this->pNum_clients = pNum_clients;
}



} /* namespace Swagger */

