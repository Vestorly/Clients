#ifndef SamiRssfeedsApi_H_
#define SamiRssfeedsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiVoid.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiRssfeedsApi {
public:
  SamiRssfeedsApi();
  virtual ~SamiRssfeedsApi();

  
  SamiVoid* 
  indexWithCompletion(String* vestorly-auth, String* ids, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  createWithCompletion(String* rss_feed, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  showWithCompletion(String* vestorly-auth, String* _id, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  updateWithCompletion(String* _id, String* rss_feed, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  destroyWithCompletion(String* _id, void (* handler)(SamiVoid*, SamiError*));
  
  static String getBasePath() {
    return L"http://developers.vestorly.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiRssfeedsApi_H_ */
