#ifndef SamiAdvisorApi_H_
#define SamiAdvisorApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiAdvisor.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAdvisorApi {
public:
  SamiAdvisorApi();
  virtual ~SamiAdvisorApi();

  
  SamiAdvisor* 
  findAdvisorByIDWithCompletion(String* _id, String* vestorly-auth, void (* handler)(SamiAdvisor*, SamiError*));
  
  void 
  findAdvisorsWithCompletion(String* vestorly-auth, void(* handler)(SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAdvisorApi_H_ */
