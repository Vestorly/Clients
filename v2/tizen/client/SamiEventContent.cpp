
#include "SamiEventContent.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiEventContent::SamiEventContent() {
    init();
}

SamiEventContent::~SamiEventContent() {
    this->cleanup();
}

void
SamiEventContent::init() {
    p_id = null;
    pContent_field = null;
    pContent_id = null;
    pContent_type = null;
    pCreated_at = null;
    pSlug = null;
    pUpdated_at = null;
    
}

void
SamiEventContent::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pContent_field != null) {
        
        delete pContent_field;
        pContent_field = null;
    }
    if(pContent_id != null) {
        
        delete pContent_id;
        pContent_id = null;
    }
    if(pContent_type != null) {
        
        delete pContent_type;
        pContent_type = null;
    }
    if(pCreated_at != null) {
        
        delete pCreated_at;
        pCreated_at = null;
    }
    if(pSlug != null) {
        
        delete pSlug;
        pSlug = null;
    }
    if(pUpdated_at != null) {
        
        delete pUpdated_at;
        pUpdated_at = null;
    }
    
}


SamiEventContent*
SamiEventContent::fromJson(String* json) {
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
SamiEventContent::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pContent_fieldKey = new JsonString(L"content_field");
        IJsonValue* pContent_fieldVal = null;
        pJsonObject->GetValue(pContent_fieldKey, pContent_fieldVal);
        if(pContent_fieldVal != null) {
            
            pContent_field = new String();
            jsonToValue(pContent_field, pContent_fieldVal, L"String", L"String");
        }
        delete pContent_fieldKey;
        JsonString* pContent_idKey = new JsonString(L"content_id");
        IJsonValue* pContent_idVal = null;
        pJsonObject->GetValue(pContent_idKey, pContent_idVal);
        if(pContent_idVal != null) {
            
            pContent_id = new String();
            jsonToValue(pContent_id, pContent_idVal, L"String", L"String");
        }
        delete pContent_idKey;
        JsonString* pContent_typeKey = new JsonString(L"content_type");
        IJsonValue* pContent_typeVal = null;
        pJsonObject->GetValue(pContent_typeKey, pContent_typeVal);
        if(pContent_typeVal != null) {
            
            pContent_type = new String();
            jsonToValue(pContent_type, pContent_typeVal, L"String", L"String");
        }
        delete pContent_typeKey;
        JsonString* pCreated_atKey = new JsonString(L"created_at");
        IJsonValue* pCreated_atVal = null;
        pJsonObject->GetValue(pCreated_atKey, pCreated_atVal);
        if(pCreated_atVal != null) {
            
            pCreated_at = new String();
            jsonToValue(pCreated_at, pCreated_atVal, L"String", L"String");
        }
        delete pCreated_atKey;
        JsonString* pSlugKey = new JsonString(L"slug");
        IJsonValue* pSlugVal = null;
        pJsonObject->GetValue(pSlugKey, pSlugVal);
        if(pSlugVal != null) {
            
            pSlug = new String();
            jsonToValue(pSlug, pSlugVal, L"String", L"String");
        }
        delete pSlugKey;
        JsonString* pUpdated_atKey = new JsonString(L"updated_at");
        IJsonValue* pUpdated_atVal = null;
        pJsonObject->GetValue(pUpdated_atKey, pUpdated_atVal);
        if(pUpdated_atVal != null) {
            
            pUpdated_at = new String();
            jsonToValue(pUpdated_at, pUpdated_atVal, L"String", L"String");
        }
        delete pUpdated_atKey;
        
    }
}

SamiEventContent::SamiEventContent(String* json) {
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
SamiEventContent::asJson ()
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
SamiEventContent::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pContent_fieldKey = new JsonString(L"content_field");
    pJsonObject->Add(pContent_fieldKey, toJson(getPContentField(), "String", ""));

    
    JsonString *pContent_idKey = new JsonString(L"content_id");
    pJsonObject->Add(pContent_idKey, toJson(getPContentId(), "String", ""));

    
    JsonString *pContent_typeKey = new JsonString(L"content_type");
    pJsonObject->Add(pContent_typeKey, toJson(getPContentType(), "String", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "String", ""));

    
    JsonString *pSlugKey = new JsonString(L"slug");
    pJsonObject->Add(pSlugKey, toJson(getPSlug(), "String", ""));

    
    JsonString *pUpdated_atKey = new JsonString(L"updated_at");
    pJsonObject->Add(pUpdated_atKey, toJson(getPUpdatedAt(), "String", ""));

    
    return pJsonObject;
}

String*
SamiEventContent::getPId() {
    return p_id;
}
void
SamiEventContent::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiEventContent::getPContentField() {
    return pContent_field;
}
void
SamiEventContent::setPContentField(String* pContent_field) {
    this->pContent_field = pContent_field;
}

String*
SamiEventContent::getPContentId() {
    return pContent_id;
}
void
SamiEventContent::setPContentId(String* pContent_id) {
    this->pContent_id = pContent_id;
}

String*
SamiEventContent::getPContentType() {
    return pContent_type;
}
void
SamiEventContent::setPContentType(String* pContent_type) {
    this->pContent_type = pContent_type;
}

String*
SamiEventContent::getPCreatedAt() {
    return pCreated_at;
}
void
SamiEventContent::setPCreatedAt(String* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

String*
SamiEventContent::getPSlug() {
    return pSlug;
}
void
SamiEventContent::setPSlug(String* pSlug) {
    this->pSlug = pSlug;
}

String*
SamiEventContent::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiEventContent::setPUpdatedAt(String* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}



} /* namespace Swagger */

