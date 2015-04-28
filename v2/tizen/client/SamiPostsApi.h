#ifndef SamiPostsApi_H_
#define SamiPostsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiPosts.h"
using Tizen::Base::String;
#include "SamiPost.h"
#include "SamiPostInput.h"
#include "SamiPostresponse.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPostsApi {
public:
  SamiPostsApi();
  virtual ~SamiPostsApi();

  
  SamiPosts* 
  findPostsWithCompletion(String* vestorly-auth, String* text_query, String* external_url, String* is_published, void (* handler)(SamiPosts*, SamiError*));
  
  SamiPost* 
  createPostWithCompletion(String* vestorly-auth, SamiPostInput* post, void (* handler)(SamiPost*, SamiError*));
  
  SamiPostresponse* 
  getPostByIDWithCompletion(String* vestorly-auth, String* _id, void (* handler)(SamiPostresponse*, SamiError*));
  
  SamiPostresponse* 
  updatePostByIDWithCompletion(String* vestorly-auth, String* _id, SamiPostInput* post, void (* handler)(SamiPostresponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPostsApi_H_ */
