#ifndef SamiAdvisorsApi_H_
#define SamiAdvisorsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiVoid.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAdvisorsApi {
public:
  SamiAdvisorsApi();
  virtual ~SamiAdvisorsApi();

  
  SamiVoid* 
  showWithCompletion(String* vestorly-auth, String* _id, void (* handler)(SamiVoid*, SamiError*));
  
  static String getBasePath() {
    return L"http://api.vestorly.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAdvisorsApi_H_ */
