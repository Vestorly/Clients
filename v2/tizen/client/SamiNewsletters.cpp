
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
    pNewletters = null;
    
}

void
SamiNewsletters::cleanup() {
    if(pNewletters != null) {
        pNewletters->RemoveAll(true);
        delete pNewletters;
        pNewletters = null;
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
        JsonString* pNewlettersKey = new JsonString(L"newletters");
        IJsonValue* pNewlettersVal = null;
        pJsonObject->GetValue(pNewlettersKey, pNewlettersVal);
        if(pNewlettersVal != null) {
            pNewletters = new ArrayList();
            
            jsonToValue(pNewletters, pNewlettersVal, L"IList", L"SamiNewsletter");
        }
        delete pNewlettersKey;
        
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

    
    JsonString *pNewlettersKey = new JsonString(L"newletters");
    pJsonObject->Add(pNewlettersKey, toJson(getPNewletters(), "SamiNewsletter", "array"));

    
    return pJsonObject;
}

IList*
SamiNewsletters::getPNewletters() {
    return pNewletters;
}
void
SamiNewsletters::setPNewletters(IList* pNewletters) {
    this->pNewletters = pNewletters;
}



} /* namespace Swagger */

