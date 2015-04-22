#ifndef SamiAdvisorsApi_H_
#define SamiAdvisorsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiAdvisors.h"
using Tizen::Base::String;
#include "SamiAdvisor.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAdvisorsApi {
public:
  SamiAdvisorsApi();
  virtual ~SamiAdvisorsApi();

  
  SamiAdvisors* 
  findAdvisorsWithCompletion(String* vestorly-auth, void (* handler)(SamiAdvisors*, SamiError*));
  
  SamiAdvisor* 
  findAdvisorByIDWithCompletion(String* _id, String* vestorly-auth, void (* handler)(SamiAdvisor*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAdvisorsApi_H_ */
