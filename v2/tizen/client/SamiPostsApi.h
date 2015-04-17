#ifndef SamiPostsApi_H_
#define SamiPostsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiPosts.h"
using Tizen::Base::String;
#include "SamiPost.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPostsApi {
public:
  SamiPostsApi();
  virtual ~SamiPostsApi();

  
  SamiPosts* 
  findPostsWithCompletion(String* vestorly-auth, String* filter_by, void (* handler)(SamiPosts*, SamiError*));
  
  SamiPost* 
  createPostWithCompletion(String* vestorly-auth, String* Post, void (* handler)(SamiPost*, SamiError*));
  
  SamiPost* 
  getPostByIDWithCompletion(String* vestorly-auth, String* _id, String* filter_by, void (* handler)(SamiPost*, SamiError*));
  
  SamiPost* 
  updatePostByIDWithCompletion(String* vestorly-auth, String* _id, String* Post, void (* handler)(SamiPost*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPostsApi_H_ */
