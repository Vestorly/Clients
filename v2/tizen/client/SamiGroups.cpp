
#include "SamiGroups.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiGroups::SamiGroups() {
    init();
}

SamiGroups::~SamiGroups() {
    this->cleanup();
}

void
SamiGroups::init() {
    pGroups = null;
    
}

void
SamiGroups::cleanup() {
    if(pGroups != null) {
        pGroups->RemoveAll(true);
        delete pGroups;
        pGroups = null;
    }
    
}


SamiGroups*
SamiGroups::fromJson(String* json) {
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
SamiGroups::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pGroupsKey = new JsonString(L"groups");
        IJsonValue* pGroupsVal = null;
        pJsonObject->GetValue(pGroupsKey, pGroupsVal);
        if(pGroupsVal != null) {
            pGroups = new ArrayList();
            
            jsonToValue(pGroups, pGroupsVal, L"IList", L"SamiGroup");
        }
        delete pGroupsKey;
        
    }
}

SamiGroups::SamiGroups(String* json) {
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
SamiGroups::asJson ()
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
SamiGroups::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pGroupsKey = new JsonString(L"groups");
    pJsonObject->Add(pGroupsKey, toJson(getPGroups(), "SamiGroup", "array"));

    
    return pJsonObject;
}

IList*
SamiGroups::getPGroups() {
    return pGroups;
}
void
SamiGroups::setPGroups(IList* pGroups) {
    this->pGroups = pGroups;
}



} /* namespace Swagger */

