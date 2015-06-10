
#include "SamiNewsletters.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNewsletters::SamiNewsletters() {
    init();
}

SamiNewsletters::~SamiNewsletters() {
    this->cleanup();
}

void
SamiNewsletters::init() {
    pNewsletters = null;
    
}

void
SamiNewsletters::cleanup() {
    if(pNewsletters != null) {
        pNewsletters->RemoveAll(true);
        delete pNewsletters;
        pNewsletters = null;
    }
    
}


SamiNewsletters*
SamiNewsletters::fromJson(String* json) {
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
SamiNewsletters::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pNewslettersKey = new JsonString(L"newsletters");
        IJsonValue* pNewslettersVal = null;
        pJsonObject->GetValue(pNewslettersKey, pNewslettersVal);
        if(pNewslettersVal != null) {
            pNewsletters = new ArrayList();
            
            jsonToValue(pNewsletters, pNewslettersVal, L"IList", L"SamiNewsletter");
        }
        delete pNewslettersKey;
        
    }
}

SamiNewsletters::SamiNewsletters(String* json) {
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
SamiNewsletters::asJson ()
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
SamiNewsletters::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pNewslettersKey = new JsonString(L"newsletters");
    pJsonObject->Add(pNewslettersKey, toJson(getPNewsletters(), "SamiNewsletter", "array"));

    
    return pJsonObject;
}

IList*
SamiNewsletters::getPNewsletters() {
    return pNewsletters;
}
void
SamiNewsletters::setPNewsletters(IList* pNewsletters) {
    this->pNewsletters = pNewsletters;
}



} /* namespace Swagger */

