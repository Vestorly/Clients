
#include "SamiMembers.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMembers::SamiMembers() {
    init();
}

SamiMembers::~SamiMembers() {
    this->cleanup();
}

void
SamiMembers::init() {
    pMembers = null;
    
}

void
SamiMembers::cleanup() {
    if(pMembers != null) {
        pMembers->RemoveAll(true);
        delete pMembers;
        pMembers = null;
    }
    
}


SamiMembers*
SamiMembers::fromJson(String* json) {
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
SamiMembers::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pMembersKey = new JsonString(L"members");
        IJsonValue* pMembersVal = null;
        pJsonObject->GetValue(pMembersKey, pMembersVal);
        if(pMembersVal != null) {
            pMembers = new ArrayList();
            
            jsonToValue(pMembers, pMembersVal, L"IList", L"SamiMember");
        }
        delete pMembersKey;
        
    }
}

SamiMembers::SamiMembers(String* json) {
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
SamiMembers::asJson ()
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
SamiMembers::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pMembersKey = new JsonString(L"members");
    pJsonObject->Add(pMembersKey, toJson(getPMembers(), "SamiMember", "array"));

    
    return pJsonObject;
}

IList*
SamiMembers::getPMembers() {
    return pMembers;
}
void
SamiMembers::setPMembers(IList* pMembers) {
    this->pMembers = pMembers;
}



} /* namespace Swagger */

