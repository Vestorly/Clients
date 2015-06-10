#ifndef SamiMembereventsApi_H_
#define SamiMembereventsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiMemberEvents.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMembereventsApi {
public:
  SamiMembereventsApi();
  virtual ~SamiMembereventsApi();

  
  SamiMemberEvents* 
  findMemberEventsWithCompletion(String* vestorlyAuth, void (* handler)(SamiMemberEvents*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMembereventsApi_H_ */
