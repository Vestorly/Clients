
#include "SamiMembers.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMembers::SamiMembers() {
    init();
}

SamiMembers::~SamiMembers() {
    this->cleanup();
}

void
SamiMembers::init() {
    pPosts = null;
    pMore_results = null;
    
}

void
SamiMembers::cleanup() {
    if(pPosts != null) {
        pPosts->RemoveAll(true);
        delete pPosts;
        pPosts = null;
    }
    if(pMore_results != null) {
        
        delete pMore_results;
        pMore_results = null;
    }
    
}


SamiMembers*
SamiMembers::fromJson(String* json) {
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
SamiMembers::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pPostsKey = new JsonString(L"posts");
        IJsonValue* pPostsVal = null;
        pJsonObject->GetValue(pPostsKey, pPostsVal);
        if(pPostsVal != null) {
            pPosts = new ArrayList();
            
            jsonToValue(pPosts, pPostsVal, L"IList", L"SamiMember");
        }
        delete pPostsKey;
        JsonString* pMore_resultsKey = new JsonString(L"more_results");
        IJsonValue* pMore_resultsVal = null;
        pJsonObject->GetValue(pMore_resultsKey, pMore_resultsVal);
        if(pMore_resultsVal != null) {
            
            pMore_results = new Boolean(false);
            jsonToValue(pMore_results, pMore_resultsVal, L"Boolean", L"Boolean");
        }
        delete pMore_resultsKey;
        
    }
}

SamiMembers::SamiMembers(String* json) {
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
SamiMembers::asJson ()
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
SamiMembers::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pPostsKey = new JsonString(L"posts");
    pJsonObject->Add(pPostsKey, toJson(getPPosts(), "SamiMember", "array"));

    
    JsonString *pMore_resultsKey = new JsonString(L"more_results");
    pJsonObject->Add(pMore_resultsKey, toJson(getPMoreResults(), "Boolean", ""));

    
    return pJsonObject;
}

IList*
SamiMembers::getPPosts() {
    return pPosts;
}
void
SamiMembers::setPPosts(IList* pPosts) {
    this->pPosts = pPosts;
}

Boolean*
SamiMembers::getPMoreResults() {
    return pMore_results;
}
void
SamiMembers::setPMoreResults(Boolean* pMore_results) {
    this->pMore_results = pMore_results;
}



} /* namespace Swagger */

