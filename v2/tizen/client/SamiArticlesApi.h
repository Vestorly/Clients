#ifndef SamiArticlesApi_H_
#define SamiArticlesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiArticles.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiArticlesApi {
public:
  SamiArticlesApi();
  virtual ~SamiArticlesApi();

  
  SamiArticles* 
  findArticlesWithCompletion(String* vestorly-auth, Integer* limit, String* text_query, String* suitability_score, String* all_query, void (* handler)(SamiArticles*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiArticlesApi_H_ */
