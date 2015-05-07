
#include "SamiMemberEvents.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMemberEvents::SamiMemberEvents() {
    init();
}

SamiMemberEvents::~SamiMemberEvents() {
    this->cleanup();
}

void
SamiMemberEvents::init() {
    pMembers = null;
    pMember_events = null;
    
}

void
SamiMemberEvents::cleanup() {
    if(pMembers != null) {
        pMembers->RemoveAll(true);
        delete pMembers;
        pMembers = null;
    }
    if(pMember_events != null) {
        pMember_events->RemoveAll(true);
        delete pMember_events;
        pMember_events = null;
    }
    
}


SamiMemberEvents*
SamiMemberEvents::fromJson(String* json) {
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
SamiMemberEvents::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pMembersKey = new JsonString(L"members");
        IJsonValue* pMembersVal = null;
        pJsonObject->GetValue(pMembersKey, pMembersVal);
        if(pMembersVal != null) {
            pMembers = new ArrayList();
            
            jsonToValue(pMembers, pMembersVal, L"IList", L"SamiTruncatedMember");
        }
        delete pMembersKey;
        JsonString* pMember_eventsKey = new JsonString(L"member_events");
        IJsonValue* pMember_eventsVal = null;
        pJsonObject->GetValue(pMember_eventsKey, pMember_eventsVal);
        if(pMember_eventsVal != null) {
            pMember_events = new ArrayList();
            
            jsonToValue(pMember_events, pMember_eventsVal, L"IList", L"SamiMemberEvent");
        }
        delete pMember_eventsKey;
        
    }
}

SamiMemberEvents::SamiMemberEvents(String* json) {
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
SamiMemberEvents::asJson ()
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
SamiMemberEvents::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pMembersKey = new JsonString(L"members");
    pJsonObject->Add(pMembersKey, toJson(getPMembers(), "SamiTruncatedMember", "array"));

    
    JsonString *pMember_eventsKey = new JsonString(L"member_events");
    pJsonObject->Add(pMember_eventsKey, toJson(getPMemberEvents(), "SamiMemberEvent", "array"));

    
    return pJsonObject;
}

IList*
SamiMemberEvents::getPMembers() {
    return pMembers;
}
void
SamiMemberEvents::setPMembers(IList* pMembers) {
    this->pMembers = pMembers;
}

IList*
SamiMemberEvents::getPMemberEvents() {
    return pMember_events;
}
void
SamiMemberEvents::setPMemberEvents(IList* pMember_events) {
    this->pMember_events = pMember_events;
}



} /* namespace Swagger */

