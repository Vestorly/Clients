#ifndef SamiPostsApi_H_
#define SamiPostsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiVoid.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPostsApi {
public:
  SamiPostsApi();
  virtual ~SamiPostsApi();

  
  SamiVoid* 
  indexWithCompletion(String* vestorly-auth, String* filter_by, String* filter_by_group_id, String* filter_by_newsletter_id, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  createWithCompletion(String* vestorly-auth, String* advisor_id, String* post, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  showWithCompletion(String* vestorly-auth, String* _id, String* advisor_id, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  updateWithCompletion(String* vestorly-auth, String* _id, String* advisor_id, String* post, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  destroyWithCompletion(String* vestorly-auth, String* _id, void (* handler)(SamiVoid*, SamiError*));
  
  static String getBasePath() {
    return L"http://api.vestorly.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPostsApi_H_ */
