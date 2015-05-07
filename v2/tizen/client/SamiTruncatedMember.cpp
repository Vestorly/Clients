
#include "SamiTruncatedMember.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiTruncatedMember::SamiTruncatedMember() {
    init();
}

SamiTruncatedMember::~SamiTruncatedMember() {
    this->cleanup();
}

void
SamiTruncatedMember::init() {
    p_id = null;
    pFirst_name = null;
    pLast_name = null;
    pEmail = null;
    pPicture_url = null;
    pAdded_on = null;
    
}

void
SamiTruncatedMember::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pFirst_name != null) {
        
        delete pFirst_name;
        pFirst_name = null;
    }
    if(pLast_name != null) {
        
        delete pLast_name;
        pLast_name = null;
    }
    if(pEmail != null) {
        
        delete pEmail;
        pEmail = null;
    }
    if(pPicture_url != null) {
        
        delete pPicture_url;
        pPicture_url = null;
    }
    if(pAdded_on != null) {
        
        delete pAdded_on;
        pAdded_on = null;
    }
    
}


SamiTruncatedMember*
SamiTruncatedMember::fromJson(String* json) {
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
SamiTruncatedMember::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pEmailKey = new JsonString(L"email");
        IJsonValue* pEmailVal = null;
        pJsonObject->GetValue(pEmailKey, pEmailVal);
        if(pEmailVal != null) {
            
            pEmail = new String();
            jsonToValue(pEmail, pEmailVal, L"String", L"String");
        }
        delete pEmailKey;
        JsonString* pPicture_urlKey = new JsonString(L"picture_url");
        IJsonValue* pPicture_urlVal = null;
        pJsonObject->GetValue(pPicture_urlKey, pPicture_urlVal);
        if(pPicture_urlVal != null) {
            
            pPicture_url = new String();
            jsonToValue(pPicture_url, pPicture_urlVal, L"String", L"String");
        }
        delete pPicture_urlKey;
        JsonString* pAdded_onKey = new JsonString(L"added_on");
        IJsonValue* pAdded_onVal = null;
        pJsonObject->GetValue(pAdded_onKey, pAdded_onVal);
        if(pAdded_onVal != null) {
            
            pAdded_on = new String();
            jsonToValue(pAdded_on, pAdded_onVal, L"String", L"String");
        }
        delete pAdded_onKey;
        
    }
}

SamiTruncatedMember::SamiTruncatedMember(String* json) {
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
SamiTruncatedMember::asJson ()
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
SamiTruncatedMember::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pFirst_nameKey = new JsonString(L"first_name");
    pJsonObject->Add(pFirst_nameKey, toJson(getPFirstName(), "String", ""));

    
    JsonString *pLast_nameKey = new JsonString(L"last_name");
    pJsonObject->Add(pLast_nameKey, toJson(getPLastName(), "String", ""));

    
    JsonString *pEmailKey = new JsonString(L"email");
    pJsonObject->Add(pEmailKey, toJson(getPEmail(), "String", ""));

    
    JsonString *pPicture_urlKey = new JsonString(L"picture_url");
    pJsonObject->Add(pPicture_urlKey, toJson(getPPictureUrl(), "String", ""));

    
    JsonString *pAdded_onKey = new JsonString(L"added_on");
    pJsonObject->Add(pAdded_onKey, toJson(getPAddedOn(), "String", ""));

    
    return pJsonObject;
}

String*
SamiTruncatedMember::getPId() {
    return p_id;
}
void
SamiTruncatedMember::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiTruncatedMember::getPFirstName() {
    return pFirst_name;
}
void
SamiTruncatedMember::setPFirstName(String* pFirst_name) {
    this->pFirst_name = pFirst_name;
}

String*
SamiTruncatedMember::getPLastName() {
    return pLast_name;
}
void
SamiTruncatedMember::setPLastName(String* pLast_name) {
    this->pLast_name = pLast_name;
}

String*
SamiTruncatedMember::getPEmail() {
    return pEmail;
}
void
SamiTruncatedMember::setPEmail(String* pEmail) {
    this->pEmail = pEmail;
}

String*
SamiTruncatedMember::getPPictureUrl() {
    return pPicture_url;
}
void
SamiTruncatedMember::setPPictureUrl(String* pPicture_url) {
    this->pPicture_url = pPicture_url;
}

String*
SamiTruncatedMember::getPAddedOn() {
    return pAdded_on;
}
void
SamiTruncatedMember::setPAddedOn(String* pAdded_on) {
    this->pAdded_on = pAdded_on;
}



} /* namespace Swagger */

