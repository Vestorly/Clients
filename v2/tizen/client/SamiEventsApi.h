#ifndef SamiEventsApi_H_
#define SamiEventsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiVoid.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiEventsApi {
public:
  SamiEventsApi();
  virtual ~SamiEventsApi();

  
  SamiVoid* 
  indexWithCompletion(String* vestorly-auth, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  createWithCompletion(String* event, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  showWithCompletion(String* vestorly-auth, String* _id, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  updateWithCompletion(String* _id, String* event, void (* handler)(SamiVoid*, SamiError*));
  
  static String getBasePath() {
    return L"http://developers.vestorly.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiEventsApi_H_ */
