#ifndef SamiArticlesApi_H_
#define SamiArticlesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiVoid.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiArticlesApi {
public:
  SamiArticlesApi();
  virtual ~SamiArticlesApi();

  
  SamiVoid* 
  indexWithCompletion(String* vestorly-auth, String* is_published, String* external_url_source, String* ids, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  showWithCompletion(String* vestorly-auth, String* _id, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  updateWithCompletion(String* vestorly-auth, String* article, void (* handler)(SamiVoid*, SamiError*));
  
  static String getBasePath() {
    return L"http://developers.vestorly.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiArticlesApi_H_ */
