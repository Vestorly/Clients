
#include "SamiNewsletterSettings.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNewsletterSettings::SamiNewsletterSettings() {
    init();
}

SamiNewsletterSettings::~SamiNewsletterSettings() {
    this->cleanup();
}

void
SamiNewsletterSettings::init() {
    pNewsletter_settings = null;
    
}

void
SamiNewsletterSettings::cleanup() {
    if(pNewsletter_settings != null) {
        pNewsletter_settings->RemoveAll(true);
        delete pNewsletter_settings;
        pNewsletter_settings = null;
    }
    
}


SamiNewsletterSettings*
SamiNewsletterSettings::fromJson(String* json) {
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
SamiNewsletterSettings::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pNewsletter_settingsKey = new JsonString(L"newsletter_settings");
        IJsonValue* pNewsletter_settingsVal = null;
        pJsonObject->GetValue(pNewsletter_settingsKey, pNewsletter_settingsVal);
        if(pNewsletter_settingsVal != null) {
            pNewsletter_settings = new ArrayList();
            
            jsonToValue(pNewsletter_settings, pNewsletter_settingsVal, L"IList", L"SamiNewsletterSetting");
        }
        delete pNewsletter_settingsKey;
        
    }
}

SamiNewsletterSettings::SamiNewsletterSettings(String* json) {
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
SamiNewsletterSettings::asJson ()
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
SamiNewsletterSettings::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pNewsletter_settingsKey = new JsonString(L"newsletter_settings");
    pJsonObject->Add(pNewsletter_settingsKey, toJson(getPNewsletterSettings(), "SamiNewsletterSetting", "array"));

    
    return pJsonObject;
}

IList*
SamiNewsletterSettings::getPNewsletterSettings() {
    return pNewsletter_settings;
}
void
SamiNewsletterSettings::setPNewsletterSettings(IList* pNewsletter_settings) {
    this->pNewsletter_settings = pNewsletter_settings;
}



} /* namespace Swagger */

