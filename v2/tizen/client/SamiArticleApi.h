#ifndef SamiArticleApi_H_
#define SamiArticleApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiArticle.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiArticleApi {
public:
  SamiArticleApi();
  virtual ~SamiArticleApi();

  
  SamiArticle* 
  findArticleByIDWithCompletion(String* _id, void (* handler)(SamiArticle*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiArticleApi_H_ */
