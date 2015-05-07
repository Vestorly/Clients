
#include "SamiMemberReport.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMemberReport::SamiMemberReport() {
    init();
}

SamiMemberReport::~SamiMemberReport() {
    this->cleanup();
}

void
SamiMemberReport::init() {
    pDay = null;
    pEvent_count = null;
    pOriginator_group_id = null;
    pParent_originator_id = null;
    pSource = null;
    pType = null;
    pYear = null;
    
}

void
SamiMemberReport::cleanup() {
    if(pDay != null) {
        
        delete pDay;
        pDay = null;
    }
    if(pEvent_count != null) {
        
        delete pEvent_count;
        pEvent_count = null;
    }
    if(pOriginator_group_id != null) {
        
        delete pOriginator_group_id;
        pOriginator_group_id = null;
    }
    if(pParent_originator_id != null) {
        
        delete pParent_originator_id;
        pParent_originator_id = null;
    }
    if(pSource != null) {
        
        delete pSource;
        pSource = null;
    }
    if(pType != null) {
        
        delete pType;
        pType = null;
    }
    if(pYear != null) {
        
        delete pYear;
        pYear = null;
    }
    
}


SamiMemberReport*
SamiMemberReport::fromJson(String* json) {
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
SamiMemberReport::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDayKey = new JsonString(L"day");
        IJsonValue* pDayVal = null;
        pJsonObject->GetValue(pDayKey, pDayVal);
        if(pDayVal != null) {
            
            pDay = new Integer();
            jsonToValue(pDay, pDayVal, L"Integer", L"Integer");
        }
        delete pDayKey;
        JsonString* pEvent_countKey = new JsonString(L"event_count");
        IJsonValue* pEvent_countVal = null;
        pJsonObject->GetValue(pEvent_countKey, pEvent_countVal);
        if(pEvent_countVal != null) {
            
            pEvent_count = new Integer();
            jsonToValue(pEvent_count, pEvent_countVal, L"Integer", L"Integer");
        }
        delete pEvent_countKey;
        JsonString* pOriginator_group_idKey = new JsonString(L"originator_group_id");
        IJsonValue* pOriginator_group_idVal = null;
        pJsonObject->GetValue(pOriginator_group_idKey, pOriginator_group_idVal);
        if(pOriginator_group_idVal != null) {
            
            pOriginator_group_id = new String();
            jsonToValue(pOriginator_group_id, pOriginator_group_idVal, L"String", L"String");
        }
        delete pOriginator_group_idKey;
        JsonString* pParent_originator_idKey = new JsonString(L"parent_originator_id");
        IJsonValue* pParent_originator_idVal = null;
        pJsonObject->GetValue(pParent_originator_idKey, pParent_originator_idVal);
        if(pParent_originator_idVal != null) {
            
            pParent_originator_id = new String();
            jsonToValue(pParent_originator_id, pParent_originator_idVal, L"String", L"String");
        }
        delete pParent_originator_idKey;
        JsonString* pSourceKey = new JsonString(L"source");
        IJsonValue* pSourceVal = null;
        pJsonObject->GetValue(pSourceKey, pSourceVal);
        if(pSourceVal != null) {
            
            pSource = new String();
            jsonToValue(pSource, pSourceVal, L"String", L"String");
        }
        delete pSourceKey;
        JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
        JsonString* pYearKey = new JsonString(L"year");
        IJsonValue* pYearVal = null;
        pJsonObject->GetValue(pYearKey, pYearVal);
        if(pYearVal != null) {
            
            pYear = new Integer();
            jsonToValue(pYear, pYearVal, L"Integer", L"Integer");
        }
        delete pYearKey;
        
    }
}

SamiMemberReport::SamiMemberReport(String* json) {
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
SamiMemberReport::asJson ()
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
SamiMemberReport::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pDayKey = new JsonString(L"day");
    pJsonObject->Add(pDayKey, toJson(getPDay(), "Integer", ""));

    
    JsonString *pEvent_countKey = new JsonString(L"event_count");
    pJsonObject->Add(pEvent_countKey, toJson(getPEventCount(), "Integer", ""));

    
    JsonString *pOriginator_group_idKey = new JsonString(L"originator_group_id");
    pJsonObject->Add(pOriginator_group_idKey, toJson(getPOriginatorGroupId(), "String", ""));

    
    JsonString *pParent_originator_idKey = new JsonString(L"parent_originator_id");
    pJsonObject->Add(pParent_originator_idKey, toJson(getPParentOriginatorId(), "String", ""));

    
    JsonString *pSourceKey = new JsonString(L"source");
    pJsonObject->Add(pSourceKey, toJson(getPSource(), "String", ""));

    
    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    
    JsonString *pYearKey = new JsonString(L"year");
    pJsonObject->Add(pYearKey, toJson(getPYear(), "Integer", ""));

    
    return pJsonObject;
}

Integer*
SamiMemberReport::getPDay() {
    return pDay;
}
void
SamiMemberReport::setPDay(Integer* pDay) {
    this->pDay = pDay;
}

Integer*
SamiMemberReport::getPEventCount() {
    return pEvent_count;
}
void
SamiMemberReport::setPEventCount(Integer* pEvent_count) {
    this->pEvent_count = pEvent_count;
}

String*
SamiMemberReport::getPOriginatorGroupId() {
    return pOriginator_group_id;
}
void
SamiMemberReport::setPOriginatorGroupId(String* pOriginator_group_id) {
    this->pOriginator_group_id = pOriginator_group_id;
}

String*
SamiMemberReport::getPParentOriginatorId() {
    return pParent_originator_id;
}
void
SamiMemberReport::setPParentOriginatorId(String* pParent_originator_id) {
    this->pParent_originator_id = pParent_originator_id;
}

String*
SamiMemberReport::getPSource() {
    return pSource;
}
void
SamiMemberReport::setPSource(String* pSource) {
    this->pSource = pSource;
}

String*
SamiMemberReport::getPType() {
    return pType;
}
void
SamiMemberReport::setPType(String* pType) {
    this->pType = pType;
}

Integer*
SamiMemberReport::getPYear() {
    return pYear;
}
void
SamiMemberReport::setPYear(Integer* pYear) {
    this->pYear = pYear;
}



} /* namespace Swagger */

