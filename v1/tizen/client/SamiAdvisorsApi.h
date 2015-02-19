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
  createWithCompletion(String* vestorly-auth, String* advisor, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  showWithCompletion(String* vestorly-auth, String* _id, String* filter_by, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  updateWithCompletion(String* vestorly-auth, String* _id, void (* handler)(SamiVoid*, SamiError*));
  
  static String getBasePath() {
    return L"http://developers.vestorly.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAdvisorsApi_H_ */
