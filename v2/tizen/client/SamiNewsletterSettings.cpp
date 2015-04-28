
#include "SamiNewslettersettings.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNewslettersettings::SamiNewslettersettings() {
    init();
}

SamiNewslettersettings::~SamiNewslettersettings() {
    this->cleanup();
}

void
SamiNewslettersettings::init() {
    pNewletter_settings = null;
    
}

void
SamiNewslettersettings::cleanup() {
    if(pNewletter_settings != null) {
        pNewletter_settings->RemoveAll(true);
        delete pNewletter_settings;
        pNewletter_settings = null;
    }
    
}


SamiNewslettersettings*
SamiNewslettersettings::fromJson(String* json) {
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
SamiNewslettersettings::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pNewletter_settingsKey = new JsonString(L"newletter_settings");
        IJsonValue* pNewletter_settingsVal = null;
        pJsonObject->GetValue(pNewletter_settingsKey, pNewletter_settingsVal);
        if(pNewletter_settingsVal != null) {
            pNewletter_settings = new ArrayList();
            
            jsonToValue(pNewletter_settings, pNewletter_settingsVal, L"IList", L"SamiNewsletterSetting");
        }
        delete pNewletter_settingsKey;
        
    }
}

SamiNewslettersettings::SamiNewslettersettings(String* json) {
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
SamiNewslettersettings::asJson ()
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
SamiNewslettersettings::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pNewletter_settingsKey = new JsonString(L"newletter_settings");
    pJsonObject->Add(pNewletter_settingsKey, toJson(getPNewletterSettings(), "SamiNewsletterSetting", "array"));

    
    return pJsonObject;
}

IList*
SamiNewslettersettings::getPNewletterSettings() {
    return pNewletter_settings;
}
void
SamiNewslettersettings::setPNewletterSettings(IList* pNewletter_settings) {
    this->pNewletter_settings = pNewletter_settings;
}



} /* namespace Swagger */

