#ifndef SamiArticlesApi_H_
#define SamiArticlesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiArticles.h"
using Tizen::Base::String;
using Tizen::Base::Integer;
#include "SamiArticleresponse.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiArticlesApi {
public:
  SamiArticlesApi();
  virtual ~SamiArticlesApi();

  
  SamiArticles* 
  findArticlesWithCompletion(String* vestorlyAuth, Integer* limit, String* textQuery, String* sortDirection, String* sortBy, void (* handler)(SamiArticles*, SamiError*));
  
  SamiArticleresponse* 
  findArticleByIDWithCompletion(String* vestorlyAuth, String* _id, void (* handler)(SamiArticleresponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiArticlesApi_H_ */
