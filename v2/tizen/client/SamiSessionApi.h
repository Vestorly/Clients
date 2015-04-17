#ifndef SamiSessionApi_H_
#define SamiSessionApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiSession.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiSessionApi {
public:
  SamiSessionApi();
  virtual ~SamiSessionApi();

  
  SamiSession* 
  loginWithCompletion(String* username, String* password, void (* handler)(SamiSession*, SamiError*));
  
  SamiSession* 
  logoutWithCompletion(String* vestorly-auth, void (* handler)(SamiSession*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiSessionApi_H_ */
