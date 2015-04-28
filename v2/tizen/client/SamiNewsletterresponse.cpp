
#include "SamiNewsletterresponse.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNewsletterresponse::SamiNewsletterresponse() {
    init();
}

SamiNewsletterresponse::~SamiNewsletterresponse() {
    this->cleanup();
}

void
SamiNewsletterresponse::init() {
    pNewsletter = null;
    
}

void
SamiNewsletterresponse::cleanup() {
    if(pNewsletter != null) {
        
        delete pNewsletter;
        pNewsletter = null;
    }
    
}


SamiNewsletterresponse*
SamiNewsletterresponse::fromJson(String* json) {
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
SamiNewsletterresponse::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pNewsletterKey = new JsonString(L"newsletter");
        IJsonValue* pNewsletterVal = null;
        pJsonObject->GetValue(pNewsletterKey, pNewsletterVal);
        if(pNewsletterVal != null) {
            
            pNewsletter = new SamiPost();
            jsonToValue(pNewsletter, pNewsletterVal, L"SamiPost", L"SamiPost");
        }
        delete pNewsletterKey;
        
    }
}

SamiNewsletterresponse::SamiNewsletterresponse(String* json) {
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
SamiNewsletterresponse::asJson ()
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
SamiNewsletterresponse::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pNewsletterKey = new JsonString(L"newsletter");
    pJsonObject->Add(pNewsletterKey, toJson(getPNewsletter(), "SamiPost", ""));

    
    return pJsonObject;
}

SamiPost*
SamiNewsletterresponse::getPNewsletter() {
    return pNewsletter;
}
void
SamiNewsletterresponse::setPNewsletter(SamiPost* pNewsletter) {
    this->pNewsletter = pNewsletter;
}



} /* namespace Swagger */

