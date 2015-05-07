
#include "SamiMemberReports.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMemberReports::SamiMemberReports() {
    init();
}

SamiMemberReports::~SamiMemberReports() {
    this->cleanup();
}

void
SamiMemberReports::init() {
    pMember_reports = null;
    
}

void
SamiMemberReports::cleanup() {
    if(pMember_reports != null) {
        pMember_reports->RemoveAll(true);
        delete pMember_reports;
        pMember_reports = null;
    }
    
}


SamiMemberReports*
SamiMemberReports::fromJson(String* json) {
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
SamiMemberReports::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pMember_reportsKey = new JsonString(L"member_reports");
        IJsonValue* pMember_reportsVal = null;
        pJsonObject->GetValue(pMember_reportsKey, pMember_reportsVal);
        if(pMember_reportsVal != null) {
            pMember_reports = new ArrayList();
            
            jsonToValue(pMember_reports, pMember_reportsVal, L"IList", L"SamiMemberReport");
        }
        delete pMember_reportsKey;
        
    }
}

SamiMemberReports::SamiMemberReports(String* json) {
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
SamiMemberReports::asJson ()
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
SamiMemberReports::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pMember_reportsKey = new JsonString(L"member_reports");
    pJsonObject->Add(pMember_reportsKey, toJson(getPMemberReports(), "SamiMemberReport", "array"));

    
    return pJsonObject;
}

IList*
SamiMemberReports::getPMemberReports() {
    return pMember_reports;
}
void
SamiMemberReports::setPMemberReports(IList* pMember_reports) {
    this->pMember_reports = pMember_reports;
}



} /* namespace Swagger */

