#include "SamiEventsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiEventsApi::SamiEventsApi() {

}

SamiEventsApi::~SamiEventsApi() {

}

void
findEventsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiEvents* out = new SamiEvents();
    jsonToValue(out, pJson, L"SamiEvents*", L"SamiEvents");

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

SamiEvents* 
SamiEventsApi::findEventsWithCompletion(String* vestorlyAuth, void (* success)(SamiEvents*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&findEventsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("vestorly_auth"), vestorlyAuth);
  
  

  String* mBody = null;

  

  String url(L"/events");

  

  client->execute(SamiEventsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
createEventProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiEventcreateresponse* out = new SamiEventcreateresponse();
    jsonToValue(out, pJson, L"SamiEventcreateresponse*", L"SamiEventcreateresponse");

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

SamiEventcreateresponse* 
SamiEventsApi::createEventWithCompletion(String* vestorlyAuth, SamiEventInput* event, void (* success)(SamiEventcreateresponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createEventProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("vestorly_auth"), vestorlyAuth);
  
  

  String* mBody = null;

  
  
  
  if(event != null) {
    mBody = new String(event->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/events");

  

  client->execute(SamiEventsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
findEventByIDProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiEventresponse* out = new SamiEventresponse();
    jsonToValue(out, pJson, L"SamiEventresponse*", L"SamiEventresponse");

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

SamiEventresponse* 
SamiEventsApi::findEventByIDWithCompletion(String* _id, String* vestorlyAuth, void (* success)(SamiEventresponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&findEventByIDProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("vestorly_auth"), vestorlyAuth);
  
  

  String* mBody = null;

  

  String url(L"/events/{id}");

  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));
  

  client->execute(SamiEventsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
