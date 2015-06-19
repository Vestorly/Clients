#ifndef SamiPostsApi_H_
#define SamiPostsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiPosts.h"
#include "SamiPostresponse.h"
#include "SamiPostInput.h"
#include "SamiPost.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPostsApi {
public:
  SamiPostsApi();
  virtual ~SamiPostsApi();

  
  SamiPosts* 
  findPostsWithCompletion(String* vestorlyAuth, String* textQuery, String* externalUrl, String* isPublished, void (* handler)(SamiPosts*, SamiError*));
  
  SamiPostresponse* 
  createPostWithCompletion(String* vestorlyAuth, SamiPostInput* post, void (* handler)(SamiPostresponse*, SamiError*));
  
  SamiPostresponse* 
  getPostByIDWithCompletion(String* vestorlyAuth, String* _id, void (* handler)(SamiPostresponse*, SamiError*));
  
  SamiPostresponse* 
  updatePostByIDWithCompletion(String* vestorlyAuth, String* _id, SamiPost* post, void (* handler)(SamiPostresponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPostsApi_H_ */
