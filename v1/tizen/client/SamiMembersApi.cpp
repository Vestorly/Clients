#include "SamiMembersApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiMembersApi::SamiMembersApi() {

}

SamiMembersApi::~SamiMembersApi() {

}

void
indexProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVoid* out = new SamiVoid();
    jsonToValue(out, pJson, L"SamiVoid*", L"SamiVoid");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiVoid* 
SamiMembersApi::indexWithCompletion(String* vestorly-auth, String* advisor_id, String* search, String* sorted_by, String* sorted_order, void (* success)(SamiVoid*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&indexProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("vestorly-auth"), vestorly-auth);
  
  
    queryParams->Add(new String("search"), search);
  
  
    queryParams->Add(new String("sorted_by"), sorted_by);
  
  
    queryParams->Add(new String("sorted_order"), sorted_order);
  
  

  String* mBody = null;

  

  String url(L"api/advisors/{advisor_id}/members.json");

  
  String s_advisor_id(L"{");
  s_advisor_id.Append(L"advisor_id");
  s_advisor_id.Append(L"}");
  url.Replace(s_advisor_id, stringify(advisor_id, L"String*"));
  

  client->execute(SamiMembersApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
createProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVoid* out = new SamiVoid();
    jsonToValue(out, pJson, L"SamiVoid*", L"SamiVoid");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiVoid* 
SamiMembersApi::createWithCompletion(String* vestorly-auth, String* advisor_id, String* member, void (* success)(SamiVoid*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("vestorly-auth"), vestorly-auth);
  
  

  String* mBody = null;

  

  String url(L"api/advisors/{advisor_id}/members.json");

  
  String s_advisor_id(L"{");
  s_advisor_id.Append(L"advisor_id");
  s_advisor_id.Append(L"}");
  url.Replace(s_advisor_id, stringify(advisor_id, L"String*"));
  

  client->execute(SamiMembersApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
showProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVoid* out = new SamiVoid();
    jsonToValue(out, pJson, L"SamiVoid*", L"SamiVoid");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiVoid* 
SamiMembersApi::showWithCompletion(String* vestorly-auth, String* advisor_id, String* _id, void (* success)(SamiVoid*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&showProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("vestorly-auth"), vestorly-auth);
  
  

  String* mBody = null;

  

  String url(L"api/advisors/{advisor_id}/members/{id}.json");

  
  String s_advisor_id(L"{");
  s_advisor_id.Append(L"advisor_id");
  s_advisor_id.Append(L"}");
  url.Replace(s_advisor_id, stringify(advisor_id, L"String*"));
  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));
  

  client->execute(SamiMembersApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updateProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVoid* out = new SamiVoid();
    jsonToValue(out, pJson, L"SamiVoid*", L"SamiVoid");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiVoid* 
SamiMembersApi::updateWithCompletion(String* vestorly-auth, String* advisor_id, String* _id, String* member, void (* success)(SamiVoid*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("vestorly-auth"), vestorly-auth);
  
  

  String* mBody = null;

  

  String url(L"api/advisors/{advisor_id}/members/{id}.json");

  
  String s_advisor_id(L"{");
  s_advisor_id.Append(L"advisor_id");
  s_advisor_id.Append(L"}");
  url.Replace(s_advisor_id, stringify(advisor_id, L"String*"));
  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));
  

  client->execute(SamiMembersApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
destroyProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVoid* out = new SamiVoid();
    jsonToValue(out, pJson, L"SamiVoid*", L"SamiVoid");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiVoid* 
SamiMembersApi::destroyWithCompletion(String* vestorly-auth, String* advisor_id, String* _id, void (* success)(SamiVoid*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&destroyProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("vestorly-auth"), vestorly-auth);
  
  

  String* mBody = null;

  

  String url(L"api/advisors/{advisor_id}/members/{id}.json");

  
  String s_advisor_id(L"{");
  s_advisor_id.Append(L"advisor_id");
  s_advisor_id.Append(L"}");
  url.Replace(s_advisor_id, stringify(advisor_id, L"String*"));
  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));
  

  client->execute(SamiMembersApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
