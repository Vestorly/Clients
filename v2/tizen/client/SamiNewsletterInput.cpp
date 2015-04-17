
#include "SamiNewsletterInput.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNewsletterInput::SamiNewsletterInput() {
    init();
}

SamiNewsletterInput::~SamiNewsletterInput() {
    this->cleanup();
}

void
SamiNewsletterInput::init() {
    pIs_sent = null;
    pIs_default = null;
    pClick_count = null;
    pUnique_click_count = null;
    pTotal_click_count = null;
    
}

void
SamiNewsletterInput::cleanup() {
    if(pIs_sent != null) {
        
        delete pIs_sent;
        pIs_sent = null;
    }
    if(pIs_default != null) {
        
        delete pIs_default;
        pIs_default = null;
    }
    if(pClick_count != null) {
        
        delete pClick_count;
        pClick_count = null;
    }
    if(pUnique_click_count != null) {
        
        delete pUnique_click_count;
        pUnique_click_count = null;
    }
    if(pTotal_click_count != null) {
        
        delete pTotal_click_count;
        pTotal_click_count = null;
    }
    
}


SamiNewsletterInput*
SamiNewsletterInput::fromJson(String* json) {
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
SamiNewsletterInput::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIs_sentKey = new JsonString(L"is_sent");
        IJsonValue* pIs_sentVal = null;
        pJsonObject->GetValue(pIs_sentKey, pIs_sentVal);
        if(pIs_sentVal != null) {
            
            pIs_sent = new Boolean(false);
            jsonToValue(pIs_sent, pIs_sentVal, L"Boolean", L"Boolean");
        }
        delete pIs_sentKey;
        JsonString* pIs_defaultKey = new JsonString(L"is_default");
        IJsonValue* pIs_defaultVal = null;
        pJsonObject->GetValue(pIs_defaultKey, pIs_defaultVal);
        if(pIs_defaultVal != null) {
            
            pIs_default = new Boolean(false);
            jsonToValue(pIs_default, pIs_defaultVal, L"Boolean", L"Boolean");
        }
        delete pIs_defaultKey;
        JsonString* pClick_countKey = new JsonString(L"click_count");
        IJsonValue* pClick_countVal = null;
        pJsonObject->GetValue(pClick_countKey, pClick_countVal);
        if(pClick_countVal != null) {
            
            pClick_count = new Long();
            jsonToValue(pClick_count, pClick_countVal, L"Long", L"Long");
        }
        delete pClick_countKey;
        JsonString* pUnique_click_countKey = new JsonString(L"unique_click_count");
        IJsonValue* pUnique_click_countVal = null;
        pJsonObject->GetValue(pUnique_click_countKey, pUnique_click_countVal);
        if(pUnique_click_countVal != null) {
            
            pUnique_click_count = new Long();
            jsonToValue(pUnique_click_count, pUnique_click_countVal, L"Long", L"Long");
        }
        delete pUnique_click_countKey;
        JsonString* pTotal_click_countKey = new JsonString(L"total_click_count");
        IJsonValue* pTotal_click_countVal = null;
        pJsonObject->GetValue(pTotal_click_countKey, pTotal_click_countVal);
        if(pTotal_click_countVal != null) {
            
            pTotal_click_count = new Long();
            jsonToValue(pTotal_click_count, pTotal_click_countVal, L"Long", L"Long");
        }
        delete pTotal_click_countKey;
        
    }
}

SamiNewsletterInput::SamiNewsletterInput(String* json) {
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
SamiNewsletterInput::asJson ()
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
SamiNewsletterInput::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIs_sentKey = new JsonString(L"is_sent");
    pJsonObject->Add(pIs_sentKey, toJson(getPIsSent(), "Boolean", ""));

    
    JsonString *pIs_defaultKey = new JsonString(L"is_default");
    pJsonObject->Add(pIs_defaultKey, toJson(getPIsDefault(), "Boolean", ""));

    
    JsonString *pClick_countKey = new JsonString(L"click_count");
    pJsonObject->Add(pClick_countKey, toJson(getPClickCount(), "Long", ""));

    
    JsonString *pUnique_click_countKey = new JsonString(L"unique_click_count");
    pJsonObject->Add(pUnique_click_countKey, toJson(getPUniqueClickCount(), "Long", ""));

    
    JsonString *pTotal_click_countKey = new JsonString(L"total_click_count");
    pJsonObject->Add(pTotal_click_countKey, toJson(getPTotalClickCount(), "Long", ""));

    
    return pJsonObject;
}

Boolean*
SamiNewsletterInput::getPIsSent() {
    return pIs_sent;
}
void
SamiNewsletterInput::setPIsSent(Boolean* pIs_sent) {
    this->pIs_sent = pIs_sent;
}

Boolean*
SamiNewsletterInput::getPIsDefault() {
    return pIs_default;
}
void
SamiNewsletterInput::setPIsDefault(Boolean* pIs_default) {
    this->pIs_default = pIs_default;
}

Long*
SamiNewsletterInput::getPClickCount() {
    return pClick_count;
}
void
SamiNewsletterInput::setPClickCount(Long* pClick_count) {
    this->pClick_count = pClick_count;
}

Long*
SamiNewsletterInput::getPUniqueClickCount() {
    return pUnique_click_count;
}
void
SamiNewsletterInput::setPUniqueClickCount(Long* pUnique_click_count) {
    this->pUnique_click_count = pUnique_click_count;
}

Long*
SamiNewsletterInput::getPTotalClickCount() {
    return pTotal_click_count;
}
void
SamiNewsletterInput::setPTotalClickCount(Long* pTotal_click_count) {
    this->pTotal_click_count = pTotal_click_count;
}



} /* namespace Swagger */

