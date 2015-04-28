
#include "SamiPostresponse.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPostresponse::SamiPostresponse() {
    init();
}

SamiPostresponse::~SamiPostresponse() {
    this->cleanup();
}

void
SamiPostresponse::init() {
    pPost = null;
    
}

void
SamiPostresponse::cleanup() {
    if(pPost != null) {
        
        delete pPost;
        pPost = null;
    }
    
}


SamiPostresponse*
SamiPostresponse::fromJson(String* json) {
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
SamiPostresponse::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pPostKey = new JsonString(L"post");
        IJsonValue* pPostVal = null;
        pJsonObject->GetValue(pPostKey, pPostVal);
        if(pPostVal != null) {
            
            pPost = new SamiPost();
            jsonToValue(pPost, pPostVal, L"SamiPost", L"SamiPost");
        }
        delete pPostKey;
        
    }
}

SamiPostresponse::SamiPostresponse(String* json) {
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
SamiPostresponse::asJson ()
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
SamiPostresponse::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pPostKey = new JsonString(L"post");
    pJsonObject->Add(pPostKey, toJson(getPPost(), "SamiPost", ""));

    
    return pJsonObject;
}

SamiPost*
SamiPostresponse::getPPost() {
    return pPost;
}
void
SamiPostresponse::setPPost(SamiPost* pPost) {
    this->pPost = pPost;
}



} /* namespace Swagger */

