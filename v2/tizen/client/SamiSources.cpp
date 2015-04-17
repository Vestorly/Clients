
#include "SamiSources.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSources::SamiSources() {
    init();
}

SamiSources::~SamiSources() {
    this->cleanup();
}

void
SamiSources::init() {
    pSources = null;
    
}

void
SamiSources::cleanup() {
    if(pSources != null) {
        pSources->RemoveAll(true);
        delete pSources;
        pSources = null;
    }
    
}


SamiSources*
SamiSources::fromJson(String* json) {
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
SamiSources::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pSourcesKey = new JsonString(L"sources");
        IJsonValue* pSourcesVal = null;
        pJsonObject->GetValue(pSourcesKey, pSourcesVal);
        if(pSourcesVal != null) {
            pSources = new ArrayList();
            
            jsonToValue(pSources, pSourcesVal, L"IList", L"SamiSource");
        }
        delete pSourcesKey;
        
    }
}

SamiSources::SamiSources(String* json) {
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
SamiSources::asJson ()
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
SamiSources::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pSourcesKey = new JsonString(L"sources");
    pJsonObject->Add(pSourcesKey, toJson(getPSources(), "SamiSource", "array"));

    
    return pJsonObject;
}

IList*
SamiSources::getPSources() {
    return pSources;
}
void
SamiSources::setPSources(IList* pSources) {
    this->pSources = pSources;
}



} /* namespace Swagger */

