#include "SamiArticlesApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiArticlesApi::SamiArticlesApi() {

}

SamiArticlesApi::~SamiArticlesApi() {

}

void
findArticlesProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiArticles* out = new SamiArticles();
    jsonToValue(out, pJson, L"SamiArticles*", L"SamiArticles");

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

SamiArticles* 
SamiArticlesApi::findArticlesWithCompletion(String* vestorly-auth, Integer* limit, String* text_query, String* suitability_score, String* all_query, void (* success)(SamiArticles*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&findArticlesProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("vestorly-auth"), vestorly-auth);
  
  
    queryParams->Add(new String("limit"), limit);
  
  
    queryParams->Add(new String("text_query"), text_query);
  
  
    queryParams->Add(new String("suitability_score"), suitability_score);
  
  
    queryParams->Add(new String("all_query"), all_query);
  
  

  String* mBody = null;

  

  String url(L"/articles");

  

  client->execute(SamiArticlesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
