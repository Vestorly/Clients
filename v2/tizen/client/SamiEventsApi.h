#ifndef SamiEventsApi_H_
#define SamiEventsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiEvents.h"
using Tizen::Base::String;
#include "SamiEvent.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiEventsApi {
public:
  SamiEventsApi();
  virtual ~SamiEventsApi();

  
  SamiEvents* 
  findEventsWithCompletion(String* vestorly_auth, void (* handler)(SamiEvents*, SamiError*));
  
  SamiEvent* 
  findEventByIDWithCompletion(String* _id, String* vestorly_auth, void (* handler)(SamiEvent*, SamiError*));
  
  SamiEvent* 
  updateEventByIDWithCompletion(String* _id, String* vestorly_auth, String* Event, void (* handler)(SamiEvent*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiEventsApi_H_ */
