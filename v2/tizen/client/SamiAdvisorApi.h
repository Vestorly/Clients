#ifndef SamiAdvisorApi_H_
#define SamiAdvisorApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiAdvisor.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAdvisorApi {
public:
  SamiAdvisorApi();
  virtual ~SamiAdvisorApi();

  
  void 
  findAdvisorsWithCompletion(String* vestorly-auth, void(* handler)(SamiError*));
  
  SamiAdvisor* 
  findAdvisorByIDWithCompletion(String* _id, String* vestorly-auth, void (* handler)(SamiAdvisor*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAdvisorApi_H_ */
