
#include "SamiPostrequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPostrequest::SamiPostrequest() {
    init();
}

SamiPostrequest::~SamiPostrequest() {
    this->cleanup();
}

void
SamiPostrequest::init() {
    pPost = null;
    
}

void
SamiPostrequest::cleanup() {
    if(pPost != null) {
        
        delete pPost;
        pPost = null;
    }
    
}


SamiPostrequest*
SamiPostrequest::fromJson(String* json) {
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
SamiPostrequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pPostKey = new JsonString(L"post");
        IJsonValue* pPostVal = null;
        pJsonObject->GetValue(pPostKey, pPostVal);
        if(pPostVal != null) {
            
            pPost = new SamiPostInput();
            jsonToValue(pPost, pPostVal, L"SamiPostInput", L"SamiPostInput");
        }
        delete pPostKey;
        
    }
}

SamiPostrequest::SamiPostrequest(String* json) {
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
SamiPostrequest::asJson ()
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
SamiPostrequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pPostKey = new JsonString(L"post");
    pJsonObject->Add(pPostKey, toJson(getPPost(), "SamiPostInput", ""));

    
    return pJsonObject;
}

SamiPostInput*
SamiPostrequest::getPPost() {
    return pPost;
}
void
SamiPostrequest::setPPost(SamiPostInput* pPost) {
    this->pPost = pPost;
}



} /* namespace Swagger */

