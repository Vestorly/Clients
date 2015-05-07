#ifndef SamiSessionsApi_H_
#define SamiSessionsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiSession.h"
#include "SamiSessionLogoutResponse.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiSessionsApi {
public:
  SamiSessionsApi();
  virtual ~SamiSessionsApi();

  
  SamiSession* 
  loginWithCompletion(String* username, String* password, void (* handler)(SamiSession*, SamiError*));
  
  SamiSessionLogoutResponse* 
  logoutWithCompletion(String* vestorly-auth, String* _id, void (* handler)(SamiSessionLogoutResponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiSessionsApi_H_ */
