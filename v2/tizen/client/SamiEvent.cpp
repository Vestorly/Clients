
#include "SamiEvent.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiEvent::SamiEvent() {
    init();
}

SamiEvent::~SamiEvent() {
    this->cleanup();
}

void
SamiEvent::init() {
    p_id = null;
    pType = null;
    pReferer = null;
    pOriginal_url = null;
    pOriginator_email = null;
    pSubject_email = null;
    pParent_event_id = null;
    pOriginator_id = null;
    pAdvisor_id = null;
    pSubject_id = null;
    pEvent_content = null;
    pCreated_at = null;
    
}

void
SamiEvent::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pType != null) {
        
        delete pType;
        pType = null;
    }
    if(pReferer != null) {
        
        delete pReferer;
        pReferer = null;
    }
    if(pOriginal_url != null) {
        
        delete pOriginal_url;
        pOriginal_url = null;
    }
    if(pOriginator_email != null) {
        
        delete pOriginator_email;
        pOriginator_email = null;
    }
    if(pSubject_email != null) {
        
        delete pSubject_email;
        pSubject_email = null;
    }
    if(pParent_event_id != null) {
        
        delete pParent_event_id;
        pParent_event_id = null;
    }
    if(pOriginator_id != null) {
        
        delete pOriginator_id;
        pOriginator_id = null;
    }
    if(pAdvisor_id != null) {
        
        delete pAdvisor_id;
        pAdvisor_id = null;
    }
    if(pSubject_id != null) {
        
        delete pSubject_id;
        pSubject_id = null;
    }
    if(pEvent_content != null) {
        
        delete pEvent_content;
        pEvent_content = null;
    }
    if(pCreated_at != null) {
        
        delete pCreated_at;
        pCreated_at = null;
    }
    
}


SamiEvent*
SamiEvent::fromJson(String* json) {
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
SamiEvent::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
        JsonString* pRefererKey = new JsonString(L"referer");
        IJsonValue* pRefererVal = null;
        pJsonObject->GetValue(pRefererKey, pRefererVal);
        if(pRefererVal != null) {
            
            pReferer = new String();
            jsonToValue(pReferer, pRefererVal, L"String", L"String");
        }
        delete pRefererKey;
        JsonString* pOriginal_urlKey = new JsonString(L"original_url");
        IJsonValue* pOriginal_urlVal = null;
        pJsonObject->GetValue(pOriginal_urlKey, pOriginal_urlVal);
        if(pOriginal_urlVal != null) {
            
            pOriginal_url = new String();
            jsonToValue(pOriginal_url, pOriginal_urlVal, L"String", L"String");
        }
        delete pOriginal_urlKey;
        JsonString* pOriginator_emailKey = new JsonString(L"originator_email");
        IJsonValue* pOriginator_emailVal = null;
        pJsonObject->GetValue(pOriginator_emailKey, pOriginator_emailVal);
        if(pOriginator_emailVal != null) {
            
            pOriginator_email = new String();
            jsonToValue(pOriginator_email, pOriginator_emailVal, L"String", L"String");
        }
        delete pOriginator_emailKey;
        JsonString* pSubject_emailKey = new JsonString(L"subject_email");
        IJsonValue* pSubject_emailVal = null;
        pJsonObject->GetValue(pSubject_emailKey, pSubject_emailVal);
        if(pSubject_emailVal != null) {
            
            pSubject_email = new String();
            jsonToValue(pSubject_email, pSubject_emailVal, L"String", L"String");
        }
        delete pSubject_emailKey;
        JsonString* pParent_event_idKey = new JsonString(L"parent_event_id");
        IJsonValue* pParent_event_idVal = null;
        pJsonObject->GetValue(pParent_event_idKey, pParent_event_idVal);
        if(pParent_event_idVal != null) {
            
            pParent_event_id = new String();
            jsonToValue(pParent_event_id, pParent_event_idVal, L"String", L"String");
        }
        delete pParent_event_idKey;
        JsonString* pOriginator_idKey = new JsonString(L"originator_id");
        IJsonValue* pOriginator_idVal = null;
        pJsonObject->GetValue(pOriginator_idKey, pOriginator_idVal);
        if(pOriginator_idVal != null) {
            
            pOriginator_id = new String();
            jsonToValue(pOriginator_id, pOriginator_idVal, L"String", L"String");
        }
        delete pOriginator_idKey;
        JsonString* pAdvisor_idKey = new JsonString(L"advisor_id");
        IJsonValue* pAdvisor_idVal = null;
        pJsonObject->GetValue(pAdvisor_idKey, pAdvisor_idVal);
        if(pAdvisor_idVal != null) {
            
            pAdvisor_id = new String();
            jsonToValue(pAdvisor_id, pAdvisor_idVal, L"String", L"String");
        }
        delete pAdvisor_idKey;
        JsonString* pSubject_idKey = new JsonString(L"subject_id");
        IJsonValue* pSubject_idVal = null;
        pJsonObject->GetValue(pSubject_idKey, pSubject_idVal);
        if(pSubject_idVal != null) {
            
            pSubject_id = new String();
            jsonToValue(pSubject_id, pSubject_idVal, L"String", L"String");
        }
        delete pSubject_idKey;
        JsonString* pEvent_contentKey = new JsonString(L"event_content");
        IJsonValue* pEvent_contentVal = null;
        pJsonObject->GetValue(pEvent_contentKey, pEvent_contentVal);
        if(pEvent_contentVal != null) {
            
            pEvent_content = new SamiEventContent();
            jsonToValue(pEvent_content, pEvent_contentVal, L"SamiEventContent", L"SamiEventContent");
        }
        delete pEvent_contentKey;
        JsonString* pCreated_atKey = new JsonString(L"created_at");
        IJsonValue* pCreated_atVal = null;
        pJsonObject->GetValue(pCreated_atKey, pCreated_atVal);
        if(pCreated_atVal != null) {
            
            pCreated_at = new String();
            jsonToValue(pCreated_at, pCreated_atVal, L"String", L"String");
        }
        delete pCreated_atKey;
        
    }
}

SamiEvent::SamiEvent(String* json) {
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
SamiEvent::asJson ()
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
SamiEvent::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    
    JsonString *pRefererKey = new JsonString(L"referer");
    pJsonObject->Add(pRefererKey, toJson(getPReferer(), "String", ""));

    
    JsonString *pOriginal_urlKey = new JsonString(L"original_url");
    pJsonObject->Add(pOriginal_urlKey, toJson(getPOriginalUrl(), "String", ""));

    
    JsonString *pOriginator_emailKey = new JsonString(L"originator_email");
    pJsonObject->Add(pOriginator_emailKey, toJson(getPOriginatorEmail(), "String", ""));

    
    JsonString *pSubject_emailKey = new JsonString(L"subject_email");
    pJsonObject->Add(pSubject_emailKey, toJson(getPSubjectEmail(), "String", ""));

    
    JsonString *pParent_event_idKey = new JsonString(L"parent_event_id");
    pJsonObject->Add(pParent_event_idKey, toJson(getPParentEventId(), "String", ""));

    
    JsonString *pOriginator_idKey = new JsonString(L"originator_id");
    pJsonObject->Add(pOriginator_idKey, toJson(getPOriginatorId(), "String", ""));

    
    JsonString *pAdvisor_idKey = new JsonString(L"advisor_id");
    pJsonObject->Add(pAdvisor_idKey, toJson(getPAdvisorId(), "String", ""));

    
    JsonString *pSubject_idKey = new JsonString(L"subject_id");
    pJsonObject->Add(pSubject_idKey, toJson(getPSubjectId(), "String", ""));

    
    JsonString *pEvent_contentKey = new JsonString(L"event_content");
    pJsonObject->Add(pEvent_contentKey, toJson(getPEventContent(), "SamiEventContent", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "String", ""));

    
    return pJsonObject;
}

String*
SamiEvent::getPId() {
    return p_id;
}
void
SamiEvent::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiEvent::getPType() {
    return pType;
}
void
SamiEvent::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiEvent::getPReferer() {
    return pReferer;
}
void
SamiEvent::setPReferer(String* pReferer) {
    this->pReferer = pReferer;
}

String*
SamiEvent::getPOriginalUrl() {
    return pOriginal_url;
}
void
SamiEvent::setPOriginalUrl(String* pOriginal_url) {
    this->pOriginal_url = pOriginal_url;
}

String*
SamiEvent::getPOriginatorEmail() {
    return pOriginator_email;
}
void
SamiEvent::setPOriginatorEmail(String* pOriginator_email) {
    this->pOriginator_email = pOriginator_email;
}

String*
SamiEvent::getPSubjectEmail() {
    return pSubject_email;
}
void
SamiEvent::setPSubjectEmail(String* pSubject_email) {
    this->pSubject_email = pSubject_email;
}

String*
SamiEvent::getPParentEventId() {
    return pParent_event_id;
}
void
SamiEvent::setPParentEventId(String* pParent_event_id) {
    this->pParent_event_id = pParent_event_id;
}

String*
SamiEvent::getPOriginatorId() {
    return pOriginator_id;
}
void
SamiEvent::setPOriginatorId(String* pOriginator_id) {
    this->pOriginator_id = pOriginator_id;
}

String*
SamiEvent::getPAdvisorId() {
    return pAdvisor_id;
}
void
SamiEvent::setPAdvisorId(String* pAdvisor_id) {
    this->pAdvisor_id = pAdvisor_id;
}

String*
SamiEvent::getPSubjectId() {
    return pSubject_id;
}
void
SamiEvent::setPSubjectId(String* pSubject_id) {
    this->pSubject_id = pSubject_id;
}

SamiEventContent*
SamiEvent::getPEventContent() {
    return pEvent_content;
}
void
SamiEvent::setPEventContent(SamiEventContent* pEvent_content) {
    this->pEvent_content = pEvent_content;
}

String*
SamiEvent::getPCreatedAt() {
    return pCreated_at;
}
void
SamiEvent::setPCreatedAt(String* pCreated_at) {
    this->pCreated_at = pCreated_at;
}



} /* namespace Swagger */

