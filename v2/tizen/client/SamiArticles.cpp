
#include "SamiArticles.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiArticles::SamiArticles() {
    init();
}

SamiArticles::~SamiArticles() {
    this->cleanup();
}

void
SamiArticles::init() {
    pArticles = null;
    
}

void
SamiArticles::cleanup() {
    if(pArticles != null) {
        pArticles->RemoveAll(true);
        delete pArticles;
        pArticles = null;
    }
    
}


SamiArticles*
SamiArticles::fromJson(String* json) {
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
SamiArticles::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pArticlesKey = new JsonString(L"articles");
        IJsonValue* pArticlesVal = null;
        pJsonObject->GetValue(pArticlesKey, pArticlesVal);
        if(pArticlesVal != null) {
            pArticles = new ArrayList();
            
            jsonToValue(pArticles, pArticlesVal, L"IList", L"SamiArticle");
        }
        delete pArticlesKey;
        
    }
}

SamiArticles::SamiArticles(String* json) {
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
SamiArticles::asJson ()
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
SamiArticles::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pArticlesKey = new JsonString(L"articles");
    pJsonObject->Add(pArticlesKey, toJson(getPArticles(), "SamiArticle", "array"));

    
    return pJsonObject;
}

IList*
SamiArticles::getPArticles() {
    return pArticles;
}
void
SamiArticles::setPArticles(IList* pArticles) {
    this->pArticles = pArticles;
}



} /* namespace Swagger */

