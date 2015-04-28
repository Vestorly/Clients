
#include "SamiArticleresponse.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiArticleresponse::SamiArticleresponse() {
    init();
}

SamiArticleresponse::~SamiArticleresponse() {
    this->cleanup();
}

void
SamiArticleresponse::init() {
    pArticle = null;
    
}

void
SamiArticleresponse::cleanup() {
    if(pArticle != null) {
        
        delete pArticle;
        pArticle = null;
    }
    
}


SamiArticleresponse*
SamiArticleresponse::fromJson(String* json) {
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
SamiArticleresponse::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pArticleKey = new JsonString(L"article");
        IJsonValue* pArticleVal = null;
        pJsonObject->GetValue(pArticleKey, pArticleVal);
        if(pArticleVal != null) {
            
            pArticle = new SamiArticle();
            jsonToValue(pArticle, pArticleVal, L"SamiArticle", L"SamiArticle");
        }
        delete pArticleKey;
        
    }
}

SamiArticleresponse::SamiArticleresponse(String* json) {
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
SamiArticleresponse::asJson ()
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
SamiArticleresponse::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pArticleKey = new JsonString(L"article");
    pJsonObject->Add(pArticleKey, toJson(getPArticle(), "SamiArticle", ""));

    
    return pJsonObject;
}

SamiArticle*
SamiArticleresponse::getPArticle() {
    return pArticle;
}
void
SamiArticleresponse::setPArticle(SamiArticle* pArticle) {
    this->pArticle = pArticle;
}



} /* namespace Swagger */

