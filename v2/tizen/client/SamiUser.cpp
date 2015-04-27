
#include "SamiUser.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUser::SamiUser() {
    init();
}

SamiUser::~SamiUser() {
    this->cleanup();
}

void
SamiUser::init() {
    p_id = null;
    pCompany = null;
    pPicture_url = null;
    pWebsite = null;
    pUser_type = null;
    pSlug = null;
    pName = null;
    pUsername = null;
    pFirst_name = null;
    pLast_name = null;
    pNew_user = null;
    pShow_tour = null;
    pPlan_setup = null;
    pPlan_expired = null;
    pPlan_status = null;
    pPlan_id = null;
    pPlan_stripe = null;
    
}

void
SamiUser::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pCompany != null) {
        
        delete pCompany;
        pCompany = null;
    }
    if(pPicture_url != null) {
        
        delete pPicture_url;
        pPicture_url = null;
    }
    if(pWebsite != null) {
        
        delete pWebsite;
        pWebsite = null;
    }
    if(pUser_type != null) {
        
        delete pUser_type;
        pUser_type = null;
    }
    if(pSlug != null) {
        
        delete pSlug;
        pSlug = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pUsername != null) {
        
        delete pUsername;
        pUsername = null;
    }
    if(pFirst_name != null) {
        
        delete pFirst_name;
        pFirst_name = null;
    }
    if(pLast_name != null) {
        
        delete pLast_name;
        pLast_name = null;
    }
    if(pNew_user != null) {
        
        delete pNew_user;
        pNew_user = null;
    }
    if(pShow_tour != null) {
        
        delete pShow_tour;
        pShow_tour = null;
    }
    if(pPlan_setup != null) {
        
        delete pPlan_setup;
        pPlan_setup = null;
    }
    if(pPlan_expired != null) {
        
        delete pPlan_expired;
        pPlan_expired = null;
    }
    if(pPlan_status != null) {
        
        delete pPlan_status;
        pPlan_status = null;
    }
    if(pPlan_id != null) {
        
        delete pPlan_id;
        pPlan_id = null;
    }
    if(pPlan_stripe != null) {
        
        delete pPlan_stripe;
        pPlan_stripe = null;
    }
    
}


SamiUser*
SamiUser::fromJson(String* json) {
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
SamiUser::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pPicture_urlKey = new JsonString(L"picture_url");
        IJsonValue* pPicture_urlVal = null;
        pJsonObject->GetValue(pPicture_urlKey, pPicture_urlVal);
        if(pPicture_urlVal != null) {
            
            pPicture_url = new String();
            jsonToValue(pPicture_url, pPicture_urlVal, L"String", L"String");
        }
        delete pPicture_urlKey;
        JsonString* pWebsiteKey = new JsonString(L"website");
        IJsonValue* pWebsiteVal = null;
        pJsonObject->GetValue(pWebsiteKey, pWebsiteVal);
        if(pWebsiteVal != null) {
            
            pWebsite = new String();
            jsonToValue(pWebsite, pWebsiteVal, L"String", L"String");
        }
        delete pWebsiteKey;
        JsonString* pUser_typeKey = new JsonString(L"user_type");
        IJsonValue* pUser_typeVal = null;
        pJsonObject->GetValue(pUser_typeKey, pUser_typeVal);
        if(pUser_typeVal != null) {
            
            pUser_type = new String();
            jsonToValue(pUser_type, pUser_typeVal, L"String", L"String");
        }
        delete pUser_typeKey;
        JsonString* pSlugKey = new JsonString(L"slug");
        IJsonValue* pSlugVal = null;
        pJsonObject->GetValue(pSlugKey, pSlugVal);
        if(pSlugVal != null) {
            
            pSlug = new String();
            jsonToValue(pSlug, pSlugVal, L"String", L"String");
        }
        delete pSlugKey;
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pUsernameKey = new JsonString(L"username");
        IJsonValue* pUsernameVal = null;
        pJsonObject->GetValue(pUsernameKey, pUsernameVal);
        if(pUsernameVal != null) {
            
            pUsername = new String();
            jsonToValue(pUsername, pUsernameVal, L"String", L"String");
        }
        delete pUsernameKey;
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
        JsonString* pNew_userKey = new JsonString(L"new_user");
        IJsonValue* pNew_userVal = null;
        pJsonObject->GetValue(pNew_userKey, pNew_userVal);
        if(pNew_userVal != null) {
            
            pNew_user = new Boolean(false);
            jsonToValue(pNew_user, pNew_userVal, L"Boolean", L"Boolean");
        }
        delete pNew_userKey;
        JsonString* pShow_tourKey = new JsonString(L"show_tour");
        IJsonValue* pShow_tourVal = null;
        pJsonObject->GetValue(pShow_tourKey, pShow_tourVal);
        if(pShow_tourVal != null) {
            
            pShow_tour = new Boolean(false);
            jsonToValue(pShow_tour, pShow_tourVal, L"Boolean", L"Boolean");
        }
        delete pShow_tourKey;
        JsonString* pPlan_setupKey = new JsonString(L"plan_setup");
        IJsonValue* pPlan_setupVal = null;
        pJsonObject->GetValue(pPlan_setupKey, pPlan_setupVal);
        if(pPlan_setupVal != null) {
            
            pPlan_setup = new Boolean(false);
            jsonToValue(pPlan_setup, pPlan_setupVal, L"Boolean", L"Boolean");
        }
        delete pPlan_setupKey;
        JsonString* pPlan_expiredKey = new JsonString(L"plan_expired");
        IJsonValue* pPlan_expiredVal = null;
        pJsonObject->GetValue(pPlan_expiredKey, pPlan_expiredVal);
        if(pPlan_expiredVal != null) {
            
            pPlan_expired = new Boolean(false);
            jsonToValue(pPlan_expired, pPlan_expiredVal, L"Boolean", L"Boolean");
        }
        delete pPlan_expiredKey;
        JsonString* pPlan_statusKey = new JsonString(L"plan_status");
        IJsonValue* pPlan_statusVal = null;
        pJsonObject->GetValue(pPlan_statusKey, pPlan_statusVal);
        if(pPlan_statusVal != null) {
            
            pPlan_status = new String();
            jsonToValue(pPlan_status, pPlan_statusVal, L"String", L"String");
        }
        delete pPlan_statusKey;
        JsonString* pPlan_idKey = new JsonString(L"plan_id");
        IJsonValue* pPlan_idVal = null;
        pJsonObject->GetValue(pPlan_idKey, pPlan_idVal);
        if(pPlan_idVal != null) {
            
            pPlan_id = new String();
            jsonToValue(pPlan_id, pPlan_idVal, L"String", L"String");
        }
        delete pPlan_idKey;
        JsonString* pPlan_stripeKey = new JsonString(L"plan_stripe");
        IJsonValue* pPlan_stripeVal = null;
        pJsonObject->GetValue(pPlan_stripeKey, pPlan_stripeVal);
        if(pPlan_stripeVal != null) {
            
            pPlan_stripe = new Boolean(false);
            jsonToValue(pPlan_stripe, pPlan_stripeVal, L"Boolean", L"Boolean");
        }
        delete pPlan_stripeKey;
        
    }
}

SamiUser::SamiUser(String* json) {
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
SamiUser::asJson ()
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
SamiUser::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pCompanyKey = new JsonString(L"company");
    pJsonObject->Add(pCompanyKey, toJson(getPCompany(), "String", ""));

    
    JsonString *pPicture_urlKey = new JsonString(L"picture_url");
    pJsonObject->Add(pPicture_urlKey, toJson(getPPictureUrl(), "String", ""));

    
    JsonString *pWebsiteKey = new JsonString(L"website");
    pJsonObject->Add(pWebsiteKey, toJson(getPWebsite(), "String", ""));

    
    JsonString *pUser_typeKey = new JsonString(L"user_type");
    pJsonObject->Add(pUser_typeKey, toJson(getPUserType(), "String", ""));

    
    JsonString *pSlugKey = new JsonString(L"slug");
    pJsonObject->Add(pSlugKey, toJson(getPSlug(), "String", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pUsernameKey = new JsonString(L"username");
    pJsonObject->Add(pUsernameKey, toJson(getPUsername(), "String", ""));

    
    JsonString *pFirst_nameKey = new JsonString(L"first_name");
    pJsonObject->Add(pFirst_nameKey, toJson(getPFirstName(), "String", ""));

    
    JsonString *pLast_nameKey = new JsonString(L"last_name");
    pJsonObject->Add(pLast_nameKey, toJson(getPLastName(), "String", ""));

    
    JsonString *pNew_userKey = new JsonString(L"new_user");
    pJsonObject->Add(pNew_userKey, toJson(getPNewUser(), "Boolean", ""));

    
    JsonString *pShow_tourKey = new JsonString(L"show_tour");
    pJsonObject->Add(pShow_tourKey, toJson(getPShowTour(), "Boolean", ""));

    
    JsonString *pPlan_setupKey = new JsonString(L"plan_setup");
    pJsonObject->Add(pPlan_setupKey, toJson(getPPlanSetup(), "Boolean", ""));

    
    JsonString *pPlan_expiredKey = new JsonString(L"plan_expired");
    pJsonObject->Add(pPlan_expiredKey, toJson(getPPlanExpired(), "Boolean", ""));

    
    JsonString *pPlan_statusKey = new JsonString(L"plan_status");
    pJsonObject->Add(pPlan_statusKey, toJson(getPPlanStatus(), "String", ""));

    
    JsonString *pPlan_idKey = new JsonString(L"plan_id");
    pJsonObject->Add(pPlan_idKey, toJson(getPPlanId(), "String", ""));

    
    JsonString *pPlan_stripeKey = new JsonString(L"plan_stripe");
    pJsonObject->Add(pPlan_stripeKey, toJson(getPPlanStripe(), "Boolean", ""));

    
    return pJsonObject;
}

String*
SamiUser::getPId() {
    return p_id;
}
void
SamiUser::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiUser::getPCompany() {
    return pCompany;
}
void
SamiUser::setPCompany(String* pCompany) {
    this->pCompany = pCompany;
}

String*
SamiUser::getPPictureUrl() {
    return pPicture_url;
}
void
SamiUser::setPPictureUrl(String* pPicture_url) {
    this->pPicture_url = pPicture_url;
}

String*
SamiUser::getPWebsite() {
    return pWebsite;
}
void
SamiUser::setPWebsite(String* pWebsite) {
    this->pWebsite = pWebsite;
}

String*
SamiUser::getPUserType() {
    return pUser_type;
}
void
SamiUser::setPUserType(String* pUser_type) {
    this->pUser_type = pUser_type;
}

String*
SamiUser::getPSlug() {
    return pSlug;
}
void
SamiUser::setPSlug(String* pSlug) {
    this->pSlug = pSlug;
}

String*
SamiUser::getPName() {
    return pName;
}
void
SamiUser::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiUser::getPUsername() {
    return pUsername;
}
void
SamiUser::setPUsername(String* pUsername) {
    this->pUsername = pUsername;
}

String*
SamiUser::getPFirstName() {
    return pFirst_name;
}
void
SamiUser::setPFirstName(String* pFirst_name) {
    this->pFirst_name = pFirst_name;
}

String*
SamiUser::getPLastName() {
    return pLast_name;
}
void
SamiUser::setPLastName(String* pLast_name) {
    this->pLast_name = pLast_name;
}

Boolean*
SamiUser::getPNewUser() {
    return pNew_user;
}
void
SamiUser::setPNewUser(Boolean* pNew_user) {
    this->pNew_user = pNew_user;
}

Boolean*
SamiUser::getPShowTour() {
    return pShow_tour;
}
void
SamiUser::setPShowTour(Boolean* pShow_tour) {
    this->pShow_tour = pShow_tour;
}

Boolean*
SamiUser::getPPlanSetup() {
    return pPlan_setup;
}
void
SamiUser::setPPlanSetup(Boolean* pPlan_setup) {
    this->pPlan_setup = pPlan_setup;
}

Boolean*
SamiUser::getPPlanExpired() {
    return pPlan_expired;
}
void
SamiUser::setPPlanExpired(Boolean* pPlan_expired) {
    this->pPlan_expired = pPlan_expired;
}

String*
SamiUser::getPPlanStatus() {
    return pPlan_status;
}
void
SamiUser::setPPlanStatus(String* pPlan_status) {
    this->pPlan_status = pPlan_status;
}

String*
SamiUser::getPPlanId() {
    return pPlan_id;
}
void
SamiUser::setPPlanId(String* pPlan_id) {
    this->pPlan_id = pPlan_id;
}

Boolean*
SamiUser::getPPlanStripe() {
    return pPlan_stripe;
}
void
SamiUser::setPPlanStripe(Boolean* pPlan_stripe) {
    this->pPlan_stripe = pPlan_stripe;
}



} /* namespace Swagger */

