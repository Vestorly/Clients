#ifndef SamiSourcesApi_H_
#define SamiSourcesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiSourcesApi {
public:
  SamiSourcesApi();
  virtual ~SamiSourcesApi();

  
  void 
  findSourcesWithCompletion(String* vestorly-auth, void(* handler)(SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiSourcesApi_H_ */
