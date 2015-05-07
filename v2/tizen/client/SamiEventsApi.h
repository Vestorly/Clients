#ifndef SamiEventsApi_H_
#define SamiEventsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiEvents.h"
using Tizen::Base::String;
#include "SamiEventresponse.h"
#include "SamiEventInput.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiEventsApi {
public:
  SamiEventsApi();
  virtual ~SamiEventsApi();

  
  SamiEvents* 
  findEventsWithCompletion(String* vestorly-auth, void (* handler)(SamiEvents*, SamiError*));
  
  SamiEventresponse* 
  createEventWithCompletion(String* vestorly-auth, SamiEventInput* event, void (* handler)(SamiEventresponse*, SamiError*));
  
  SamiEventresponse* 
  findEventByIDWithCompletion(String* _id, String* vestorly-auth, void (* handler)(SamiEventresponse*, SamiError*));
  
  SamiEventresponse* 
  updateEventByIDWithCompletion(String* _id, String* vestorly-auth, SamiEventInput* event, void (* handler)(SamiEventresponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiEventsApi_H_ */
