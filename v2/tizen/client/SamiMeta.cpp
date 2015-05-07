
#include "SamiMeta.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMeta::SamiMeta() {
    init();
}

SamiMeta::~SamiMeta() {
    this->cleanup();
}

void
SamiMeta::init() {
    pSort_order = null;
    pMore_results = null;
    pMessage = null;
    pSorted_by = null;
    
}

void
SamiMeta::cleanup() {
    if(pSort_order != null) {
        
        delete pSort_order;
        pSort_order = null;
    }
    if(pMore_results != null) {
        
        delete pMore_results;
        pMore_results = null;
    }
    if(pMessage != null) {
        
        delete pMessage;
        pMessage = null;
    }
    if(pSorted_by != null) {
        pSorted_by->RemoveAll(true);
        delete pSorted_by;
        pSorted_by = null;
    }
    
}


SamiMeta*
SamiMeta::fromJson(String* json) {
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
SamiMeta::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pSort_orderKey = new JsonString(L"sort_order");
        IJsonValue* pSort_orderVal = null;
        pJsonObject->GetValue(pSort_orderKey, pSort_orderVal);
        if(pSort_orderVal != null) {
            
            pSort_order = new String();
            jsonToValue(pSort_order, pSort_orderVal, L"String", L"String");
        }
        delete pSort_orderKey;
        JsonString* pMore_resultsKey = new JsonString(L"more_results");
        IJsonValue* pMore_resultsVal = null;
        pJsonObject->GetValue(pMore_resultsKey, pMore_resultsVal);
        if(pMore_resultsVal != null) {
            
            pMore_results = new Boolean(false);
            jsonToValue(pMore_results, pMore_resultsVal, L"Boolean", L"Boolean");
        }
        delete pMore_resultsKey;
        JsonString* pMessageKey = new JsonString(L"message");
        IJsonValue* pMessageVal = null;
        pJsonObject->GetValue(pMessageKey, pMessageVal);
        if(pMessageVal != null) {
            
            pMessage = new String();
            jsonToValue(pMessage, pMessageVal, L"String", L"String");
        }
        delete pMessageKey;
        JsonString* pSorted_byKey = new JsonString(L"sorted_by");
        IJsonValue* pSorted_byVal = null;
        pJsonObject->GetValue(pSorted_byKey, pSorted_byVal);
        if(pSorted_byVal != null) {
            pSorted_by = new ArrayList();
            
            jsonToValue(pSorted_by, pSorted_byVal, L"IList", L"String");
        }
        delete pSorted_byKey;
        
    }
}

SamiMeta::SamiMeta(String* json) {
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
SamiMeta::asJson ()
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
SamiMeta::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pSort_orderKey = new JsonString(L"sort_order");
    pJsonObject->Add(pSort_orderKey, toJson(getPSortOrder(), "String", ""));

    
    JsonString *pMore_resultsKey = new JsonString(L"more_results");
    pJsonObject->Add(pMore_resultsKey, toJson(getPMoreResults(), "Boolean", ""));

    
    JsonString *pMessageKey = new JsonString(L"message");
    pJsonObject->Add(pMessageKey, toJson(getPMessage(), "String", ""));

    
    JsonString *pSorted_byKey = new JsonString(L"sorted_by");
    pJsonObject->Add(pSorted_byKey, toJson(getPSortedBy(), "String", "array"));

    
    return pJsonObject;
}

String*
SamiMeta::getPSortOrder() {
    return pSort_order;
}
void
SamiMeta::setPSortOrder(String* pSort_order) {
    this->pSort_order = pSort_order;
}

Boolean*
SamiMeta::getPMoreResults() {
    return pMore_results;
}
void
SamiMeta::setPMoreResults(Boolean* pMore_results) {
    this->pMore_results = pMore_results;
}

String*
SamiMeta::getPMessage() {
    return pMessage;
}
void
SamiMeta::setPMessage(String* pMessage) {
    this->pMessage = pMessage;
}

IList*
SamiMeta::getPSortedBy() {
    return pSorted_by;
}
void
SamiMeta::setPSortedBy(IList* pSorted_by) {
    this->pSorted_by = pSorted_by;
}



} /* namespace Swagger */

