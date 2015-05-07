
#include "SamiMemberEvent.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMemberEvent::SamiMemberEvent() {
    init();
}

SamiMemberEvent::~SamiMemberEvent() {
    this->cleanup();
}

void
SamiMemberEvent::init() {
    p_id = null;
    pCreated_at = null;
    pType = null;
    pSource = null;
    pReferer = null;
    pOriginal_url = null;
    pOriginator_email = null;
    pOriginator_name = null;
    pParent_originator_id = null;
    pParent_event_id = null;
    pOriginator_type = null;
    pOriginator_group_id = null;
    pEvent_type = null;
    pEvent_source = null;
    pContent_url = null;
    pEvent_date = null;
    pUsername = null;
    pMember_id = null;
    pOriginator_id = null;
    pSubject_id = null;
    
}

void
SamiMemberEvent::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pCreated_at != null) {
        
        delete pCreated_at;
        pCreated_at = null;
    }
    if(pType != null) {
        
        delete pType;
        pType = null;
    }
    if(pSource != null) {
        
        delete pSource;
        pSource = null;
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
    if(pOriginator_name != null) {
        
        delete pOriginator_name;
        pOriginator_name = null;
    }
    if(pParent_originator_id != null) {
        
        delete pParent_originator_id;
        pParent_originator_id = null;
    }
    if(pParent_event_id != null) {
        
        delete pParent_event_id;
        pParent_event_id = null;
    }
    if(pOriginator_type != null) {
        
        delete pOriginator_type;
        pOriginator_type = null;
    }
    if(pOriginator_group_id != null) {
        
        delete pOriginator_group_id;
        pOriginator_group_id = null;
    }
    if(pEvent_type != null) {
        
        delete pEvent_type;
        pEvent_type = null;
    }
    if(pEvent_source != null) {
        
        delete pEvent_source;
        pEvent_source = null;
    }
    if(pContent_url != null) {
        
        delete pContent_url;
        pContent_url = null;
    }
    if(pEvent_date != null) {
        
        delete pEvent_date;
        pEvent_date = null;
    }
    if(pUsername != null) {
        
        delete pUsername;
        pUsername = null;
    }
    if(pMember_id != null) {
        
        delete pMember_id;
        pMember_id = null;
    }
    if(pOriginator_id != null) {
        
        delete pOriginator_id;
        pOriginator_id = null;
    }
    if(pSubject_id != null) {
        
        delete pSubject_id;
        pSubject_id = null;
    }
    
}


SamiMemberEvent*
SamiMemberEvent::fromJson(String* json) {
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
SamiMemberEvent::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pCreated_atKey = new JsonString(L"created_at");
        IJsonValue* pCreated_atVal = null;
        pJsonObject->GetValue(pCreated_atKey, pCreated_atVal);
        if(pCreated_atVal != null) {
            
            pCreated_at = new String();
            jsonToValue(pCreated_at, pCreated_atVal, L"String", L"String");
        }
        delete pCreated_atKey;
        JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
        JsonString* pSourceKey = new JsonString(L"source");
        IJsonValue* pSourceVal = null;
        pJsonObject->GetValue(pSourceKey, pSourceVal);
        if(pSourceVal != null) {
            
            pSource = new String();
            jsonToValue(pSource, pSourceVal, L"String", L"String");
        }
        delete pSourceKey;
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
        JsonString* pOriginator_nameKey = new JsonString(L"originator_name");
        IJsonValue* pOriginator_nameVal = null;
        pJsonObject->GetValue(pOriginator_nameKey, pOriginator_nameVal);
        if(pOriginator_nameVal != null) {
            
            pOriginator_name = new String();
            jsonToValue(pOriginator_name, pOriginator_nameVal, L"String", L"String");
        }
        delete pOriginator_nameKey;
        JsonString* pParent_originator_idKey = new JsonString(L"parent_originator_id");
        IJsonValue* pParent_originator_idVal = null;
        pJsonObject->GetValue(pParent_originator_idKey, pParent_originator_idVal);
        if(pParent_originator_idVal != null) {
            
            pParent_originator_id = new String();
            jsonToValue(pParent_originator_id, pParent_originator_idVal, L"String", L"String");
        }
        delete pParent_originator_idKey;
        JsonString* pParent_event_idKey = new JsonString(L"parent_event_id");
        IJsonValue* pParent_event_idVal = null;
        pJsonObject->GetValue(pParent_event_idKey, pParent_event_idVal);
        if(pParent_event_idVal != null) {
            
            pParent_event_id = new String();
            jsonToValue(pParent_event_id, pParent_event_idVal, L"String", L"String");
        }
        delete pParent_event_idKey;
        JsonString* pOriginator_typeKey = new JsonString(L"originator_type");
        IJsonValue* pOriginator_typeVal = null;
        pJsonObject->GetValue(pOriginator_typeKey, pOriginator_typeVal);
        if(pOriginator_typeVal != null) {
            
            pOriginator_type = new String();
            jsonToValue(pOriginator_type, pOriginator_typeVal, L"String", L"String");
        }
        delete pOriginator_typeKey;
        JsonString* pOriginator_group_idKey = new JsonString(L"originator_group_id");
        IJsonValue* pOriginator_group_idVal = null;
        pJsonObject->GetValue(pOriginator_group_idKey, pOriginator_group_idVal);
        if(pOriginator_group_idVal != null) {
            
            pOriginator_group_id = new String();
            jsonToValue(pOriginator_group_id, pOriginator_group_idVal, L"String", L"String");
        }
        delete pOriginator_group_idKey;
        JsonString* pEvent_typeKey = new JsonString(L"event_type");
        IJsonValue* pEvent_typeVal = null;
        pJsonObject->GetValue(pEvent_typeKey, pEvent_typeVal);
        if(pEvent_typeVal != null) {
            
            pEvent_type = new String();
            jsonToValue(pEvent_type, pEvent_typeVal, L"String", L"String");
        }
        delete pEvent_typeKey;
        JsonString* pEvent_sourceKey = new JsonString(L"event_source");
        IJsonValue* pEvent_sourceVal = null;
        pJsonObject->GetValue(pEvent_sourceKey, pEvent_sourceVal);
        if(pEvent_sourceVal != null) {
            
            pEvent_source = new String();
            jsonToValue(pEvent_source, pEvent_sourceVal, L"String", L"String");
        }
        delete pEvent_sourceKey;
        JsonString* pContent_urlKey = new JsonString(L"content_url");
        IJsonValue* pContent_urlVal = null;
        pJsonObject->GetValue(pContent_urlKey, pContent_urlVal);
        if(pContent_urlVal != null) {
            
            pContent_url = new String();
            jsonToValue(pContent_url, pContent_urlVal, L"String", L"String");
        }
        delete pContent_urlKey;
        JsonString* pEvent_dateKey = new JsonString(L"event_date");
        IJsonValue* pEvent_dateVal = null;
        pJsonObject->GetValue(pEvent_dateKey, pEvent_dateVal);
        if(pEvent_dateVal != null) {
            
            pEvent_date = new String();
            jsonToValue(pEvent_date, pEvent_dateVal, L"String", L"String");
        }
        delete pEvent_dateKey;
        JsonString* pUsernameKey = new JsonString(L"username");
        IJsonValue* pUsernameVal = null;
        pJsonObject->GetValue(pUsernameKey, pUsernameVal);
        if(pUsernameVal != null) {
            
            pUsername = new String();
            jsonToValue(pUsername, pUsernameVal, L"String", L"String");
        }
        delete pUsernameKey;
        JsonString* pMember_idKey = new JsonString(L"member_id");
        IJsonValue* pMember_idVal = null;
        pJsonObject->GetValue(pMember_idKey, pMember_idVal);
        if(pMember_idVal != null) {
            
            pMember_id = new String();
            jsonToValue(pMember_id, pMember_idVal, L"String", L"String");
        }
        delete pMember_idKey;
        JsonString* pOriginator_idKey = new JsonString(L"originator_id");
        IJsonValue* pOriginator_idVal = null;
        pJsonObject->GetValue(pOriginator_idKey, pOriginator_idVal);
        if(pOriginator_idVal != null) {
            
            pOriginator_id = new String();
            jsonToValue(pOriginator_id, pOriginator_idVal, L"String", L"String");
        }
        delete pOriginator_idKey;
        JsonString* pSubject_idKey = new JsonString(L"subject_id");
        IJsonValue* pSubject_idVal = null;
        pJsonObject->GetValue(pSubject_idKey, pSubject_idVal);
        if(pSubject_idVal != null) {
            
            pSubject_id = new String();
            jsonToValue(pSubject_id, pSubject_idVal, L"String", L"String");
        }
        delete pSubject_idKey;
        
    }
}

SamiMemberEvent::SamiMemberEvent(String* json) {
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
SamiMemberEvent::asJson ()
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
SamiMemberEvent::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "String", ""));

    
    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    
    JsonString *pSourceKey = new JsonString(L"source");
    pJsonObject->Add(pSourceKey, toJson(getPSource(), "String", ""));

    
    JsonString *pRefererKey = new JsonString(L"referer");
    pJsonObject->Add(pRefererKey, toJson(getPReferer(), "String", ""));

    
    JsonString *pOriginal_urlKey = new JsonString(L"original_url");
    pJsonObject->Add(pOriginal_urlKey, toJson(getPOriginalUrl(), "String", ""));

    
    JsonString *pOriginator_emailKey = new JsonString(L"originator_email");
    pJsonObject->Add(pOriginator_emailKey, toJson(getPOriginatorEmail(), "String", ""));

    
    JsonString *pOriginator_nameKey = new JsonString(L"originator_name");
    pJsonObject->Add(pOriginator_nameKey, toJson(getPOriginatorName(), "String", ""));

    
    JsonString *pParent_originator_idKey = new JsonString(L"parent_originator_id");
    pJsonObject->Add(pParent_originator_idKey, toJson(getPParentOriginatorId(), "String", ""));

    
    JsonString *pParent_event_idKey = new JsonString(L"parent_event_id");
    pJsonObject->Add(pParent_event_idKey, toJson(getPParentEventId(), "String", ""));

    
    JsonString *pOriginator_typeKey = new JsonString(L"originator_type");
    pJsonObject->Add(pOriginator_typeKey, toJson(getPOriginatorType(), "String", ""));

    
    JsonString *pOriginator_group_idKey = new JsonString(L"originator_group_id");
    pJsonObject->Add(pOriginator_group_idKey, toJson(getPOriginatorGroupId(), "String", ""));

    
    JsonString *pEvent_typeKey = new JsonString(L"event_type");
    pJsonObject->Add(pEvent_typeKey, toJson(getPEventType(), "String", ""));

    
    JsonString *pEvent_sourceKey = new JsonString(L"event_source");
    pJsonObject->Add(pEvent_sourceKey, toJson(getPEventSource(), "String", ""));

    
    JsonString *pContent_urlKey = new JsonString(L"content_url");
    pJsonObject->Add(pContent_urlKey, toJson(getPContentUrl(), "String", ""));

    
    JsonString *pEvent_dateKey = new JsonString(L"event_date");
    pJsonObject->Add(pEvent_dateKey, toJson(getPEventDate(), "String", ""));

    
    JsonString *pUsernameKey = new JsonString(L"username");
    pJsonObject->Add(pUsernameKey, toJson(getPUsername(), "String", ""));

    
    JsonString *pMember_idKey = new JsonString(L"member_id");
    pJsonObject->Add(pMember_idKey, toJson(getPMemberId(), "String", ""));

    
    JsonString *pOriginator_idKey = new JsonString(L"originator_id");
    pJsonObject->Add(pOriginator_idKey, toJson(getPOriginatorId(), "String", ""));

    
    JsonString *pSubject_idKey = new JsonString(L"subject_id");
    pJsonObject->Add(pSubject_idKey, toJson(getPSubjectId(), "String", ""));

    
    return pJsonObject;
}

String*
SamiMemberEvent::getPId() {
    return p_id;
}
void
SamiMemberEvent::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiMemberEvent::getPCreatedAt() {
    return pCreated_at;
}
void
SamiMemberEvent::setPCreatedAt(String* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

String*
SamiMemberEvent::getPType() {
    return pType;
}
void
SamiMemberEvent::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiMemberEvent::getPSource() {
    return pSource;
}
void
SamiMemberEvent::setPSource(String* pSource) {
    this->pSource = pSource;
}

String*
SamiMemberEvent::getPReferer() {
    return pReferer;
}
void
SamiMemberEvent::setPReferer(String* pReferer) {
    this->pReferer = pReferer;
}

String*
SamiMemberEvent::getPOriginalUrl() {
    return pOriginal_url;
}
void
SamiMemberEvent::setPOriginalUrl(String* pOriginal_url) {
    this->pOriginal_url = pOriginal_url;
}

String*
SamiMemberEvent::getPOriginatorEmail() {
    return pOriginator_email;
}
void
SamiMemberEvent::setPOriginatorEmail(String* pOriginator_email) {
    this->pOriginator_email = pOriginator_email;
}

String*
SamiMemberEvent::getPOriginatorName() {
    return pOriginator_name;
}
void
SamiMemberEvent::setPOriginatorName(String* pOriginator_name) {
    this->pOriginator_name = pOriginator_name;
}

String*
SamiMemberEvent::getPParentOriginatorId() {
    return pParent_originator_id;
}
void
SamiMemberEvent::setPParentOriginatorId(String* pParent_originator_id) {
    this->pParent_originator_id = pParent_originator_id;
}

String*
SamiMemberEvent::getPParentEventId() {
    return pParent_event_id;
}
void
SamiMemberEvent::setPParentEventId(String* pParent_event_id) {
    this->pParent_event_id = pParent_event_id;
}

String*
SamiMemberEvent::getPOriginatorType() {
    return pOriginator_type;
}
void
SamiMemberEvent::setPOriginatorType(String* pOriginator_type) {
    this->pOriginator_type = pOriginator_type;
}

String*
SamiMemberEvent::getPOriginatorGroupId() {
    return pOriginator_group_id;
}
void
SamiMemberEvent::setPOriginatorGroupId(String* pOriginator_group_id) {
    this->pOriginator_group_id = pOriginator_group_id;
}

String*
SamiMemberEvent::getPEventType() {
    return pEvent_type;
}
void
SamiMemberEvent::setPEventType(String* pEvent_type) {
    this->pEvent_type = pEvent_type;
}

String*
SamiMemberEvent::getPEventSource() {
    return pEvent_source;
}
void
SamiMemberEvent::setPEventSource(String* pEvent_source) {
    this->pEvent_source = pEvent_source;
}

String*
SamiMemberEvent::getPContentUrl() {
    return pContent_url;
}
void
SamiMemberEvent::setPContentUrl(String* pContent_url) {
    this->pContent_url = pContent_url;
}

String*
SamiMemberEvent::getPEventDate() {
    return pEvent_date;
}
void
SamiMemberEvent::setPEventDate(String* pEvent_date) {
    this->pEvent_date = pEvent_date;
}

String*
SamiMemberEvent::getPUsername() {
    return pUsername;
}
void
SamiMemberEvent::setPUsername(String* pUsername) {
    this->pUsername = pUsername;
}

String*
SamiMemberEvent::getPMemberId() {
    return pMember_id;
}
void
SamiMemberEvent::setPMemberId(String* pMember_id) {
    this->pMember_id = pMember_id;
}

String*
SamiMemberEvent::getPOriginatorId() {
    return pOriginator_id;
}
void
SamiMemberEvent::setPOriginatorId(String* pOriginator_id) {
    this->pOriginator_id = pOriginator_id;
}

String*
SamiMemberEvent::getPSubjectId() {
    return pSubject_id;
}
void
SamiMemberEvent::setPSubjectId(String* pSubject_id) {
    this->pSubject_id = pSubject_id;
}



} /* namespace Swagger */

