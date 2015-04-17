
#include "SamiAdvisor.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAdvisor::SamiAdvisor() {
    init();
}

SamiAdvisor::~SamiAdvisor() {
    this->cleanup();
}

void
SamiAdvisor::init() {
    pClient_only = null;
    pImg_compressed = null;
    pImg_changed = null;
    
}

void
SamiAdvisor::cleanup() {
    if(pClient_only != null) {
        
        delete pClient_only;
        pClient_only = null;
    }
    if(pImg_compressed != null) {
        
        delete pImg_compressed;
        pImg_compressed = null;
    }
    if(pImg_changed != null) {
        
        delete pImg_changed;
        pImg_changed = null;
    }
    
}


SamiAdvisor*
SamiAdvisor::fromJson(String* json) {
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
SamiAdvisor::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pClient_onlyKey = new JsonString(L"client_only");
        IJsonValue* pClient_onlyVal = null;
        pJsonObject->GetValue(pClient_onlyKey, pClient_onlyVal);
        if(pClient_onlyVal != null) {
            
            pClient_only = new Boolean(false);
            jsonToValue(pClient_only, pClient_onlyVal, L"Boolean", L"Boolean");
        }
        delete pClient_onlyKey;
        JsonString* pImg_compressedKey = new JsonString(L"img_compressed");
        IJsonValue* pImg_compressedVal = null;
        pJsonObject->GetValue(pImg_compressedKey, pImg_compressedVal);
        if(pImg_compressedVal != null) {
            
            pImg_compressed = new Boolean(false);
            jsonToValue(pImg_compressed, pImg_compressedVal, L"Boolean", L"Boolean");
        }
        delete pImg_compressedKey;
        JsonString* pImg_changedKey = new JsonString(L"img_changed");
        IJsonValue* pImg_changedVal = null;
        pJsonObject->GetValue(pImg_changedKey, pImg_changedVal);
        if(pImg_changedVal != null) {
            
            pImg_changed = new Boolean(false);
            jsonToValue(pImg_changed, pImg_changedVal, L"Boolean", L"Boolean");
        }
        delete pImg_changedKey;
        
    }
}

SamiAdvisor::SamiAdvisor(String* json) {
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
SamiAdvisor::asJson ()
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
SamiAdvisor::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pClient_onlyKey = new JsonString(L"client_only");
    pJsonObject->Add(pClient_onlyKey, toJson(getPClientOnly(), "Boolean", ""));

    
    JsonString *pImg_compressedKey = new JsonString(L"img_compressed");
    pJsonObject->Add(pImg_compressedKey, toJson(getPImgCompressed(), "Boolean", ""));

    
    JsonString *pImg_changedKey = new JsonString(L"img_changed");
    pJsonObject->Add(pImg_changedKey, toJson(getPImgChanged(), "Boolean", ""));

    
    return pJsonObject;
}

Boolean*
SamiAdvisor::getPClientOnly() {
    return pClient_only;
}
void
SamiAdvisor::setPClientOnly(Boolean* pClient_only) {
    this->pClient_only = pClient_only;
}

Boolean*
SamiAdvisor::getPImgCompressed() {
    return pImg_compressed;
}
void
SamiAdvisor::setPImgCompressed(Boolean* pImg_compressed) {
    this->pImg_compressed = pImg_compressed;
}

Boolean*
SamiAdvisor::getPImgChanged() {
    return pImg_changed;
}
void
SamiAdvisor::setPImgChanged(Boolean* pImg_changed) {
    this->pImg_changed = pImg_changed;
}



} /* namespace Swagger */

