
#include "SamiPosts.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPosts::SamiPosts() {
    init();
}

SamiPosts::~SamiPosts() {
    this->cleanup();
}

void
SamiPosts::init() {
    pPosts = null;
    
}

void
SamiPosts::cleanup() {
    if(pPosts != null) {
        pPosts->RemoveAll(true);
        delete pPosts;
        pPosts = null;
    }
    
}


SamiPosts*
SamiPosts::fromJson(String* json) {
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
SamiPosts::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pPostsKey = new JsonString(L"posts");
        IJsonValue* pPostsVal = null;
        pJsonObject->GetValue(pPostsKey, pPostsVal);
        if(pPostsVal != null) {
            pPosts = new ArrayList();
            
            jsonToValue(pPosts, pPostsVal, L"IList", L"SamiPost");
        }
        delete pPostsKey;
        
    }
}

SamiPosts::SamiPosts(String* json) {
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
SamiPosts::asJson ()
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
SamiPosts::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pPostsKey = new JsonString(L"posts");
    pJsonObject->Add(pPostsKey, toJson(getPPosts(), "SamiPost", "array"));

    
    return pJsonObject;
}

IList*
SamiPosts::getPPosts() {
    return pPosts;
}
void
SamiPosts::setPPosts(IList* pPosts) {
    this->pPosts = pPosts;
}



} /* namespace Swagger */

