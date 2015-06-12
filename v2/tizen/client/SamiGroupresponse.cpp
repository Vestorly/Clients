
#include "SamiGroupresponse.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiGroupresponse::SamiGroupresponse() {
    init();
}

SamiGroupresponse::~SamiGroupresponse() {
    this->cleanup();
}

void
SamiGroupresponse::init() {
    pGroup = null;
    
}

void
SamiGroupresponse::cleanup() {
    if(pGroup != null) {
        
        delete pGroup;
        pGroup = null;
    }
    
}


SamiGroupresponse*
SamiGroupresponse::fromJson(String* json) {
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
SamiGroupresponse::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pGroupKey = new JsonString(L"group");
        IJsonValue* pGroupVal = null;
        pJsonObject->GetValue(pGroupKey, pGroupVal);
        if(pGroupVal != null) {
            
            pGroup = new SamiGroup();
            jsonToValue(pGroup, pGroupVal, L"SamiGroup", L"SamiGroup");
        }
        delete pGroupKey;
        
    }
}

SamiGroupresponse::SamiGroupresponse(String* json) {
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
SamiGroupresponse::asJson ()
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
SamiGroupresponse::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pGroupKey = new JsonString(L"group");
    pJsonObject->Add(pGroupKey, toJson(getPGroup(), "SamiGroup", ""));

    
    return pJsonObject;
}

SamiGroup*
SamiGroupresponse::getPGroup() {
    return pGroup;
}
void
SamiGroupresponse::setPGroup(SamiGroup* pGroup) {
    this->pGroup = pGroup;
}



} /* namespace Swagger */

