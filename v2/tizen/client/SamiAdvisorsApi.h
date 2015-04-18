#ifndef SamiAdvisorsApi_H_
#define SamiAdvisorsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiAdvisor.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAdvisorsApi {
public:
  SamiAdvisorsApi();
  virtual ~SamiAdvisorsApi();

  
  void 
  findAdvisorsWithCompletion(String* vestorly_auth, void(* handler)(SamiError*));
  
  SamiAdvisor* 
  findAdvisorByIDWithCompletion(String* _id, String* vestorly_auth, void (* handler)(SamiAdvisor*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAdvisorsApi_H_ */
