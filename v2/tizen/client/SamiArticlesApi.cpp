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
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiArticlesApi::findArticlesWithCompletion(String* vestorly-auth, Long* limit, String* text_query, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&findArticlesProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("vestorly-auth"), vestorly-auth);
  
  
    queryParams->Add(new String("limit"), limit);
  
  
    queryParams->Add(new String("text_query"), text_query);
  
  

  String* mBody = null;

  

  String url(L"/articles");

  

  client->execute(SamiArticlesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
