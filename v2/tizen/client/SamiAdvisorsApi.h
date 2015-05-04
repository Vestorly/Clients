#ifndef SamiAdvisorsApi_H_
#define SamiAdvisorsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiAdvisorresponse.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAdvisorsApi {
public:
  SamiAdvisorsApi();
  virtual ~SamiAdvisorsApi();

  
  SamiAdvisorresponse* 
  findAdvisorByIDWithCompletion(String* vestorly-auth, String* _id, void (* handler)(SamiAdvisorresponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAdvisorsApi_H_ */
