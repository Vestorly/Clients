#ifndef SamiEventsApi_H_
#define SamiEventsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiEvents.h"
#include "SamiEventcreateresponse.h"
#include "SamiEventInput.h"
#include "SamiEventresponse.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiEventsApi {
public:
  SamiEventsApi();
  virtual ~SamiEventsApi();

  
  SamiEvents* 
  findEventsWithCompletion(String* vestorlyAuth, void (* handler)(SamiEvents*, SamiError*));
  
  SamiEventcreateresponse* 
  createEventWithCompletion(String* vestorlyAuth, SamiEventInput* event, void (* handler)(SamiEventcreateresponse*, SamiError*));
  
  SamiEventresponse* 
  findEventByIDWithCompletion(String* _id, String* vestorlyAuth, void (* handler)(SamiEventresponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiEventsApi_H_ */
