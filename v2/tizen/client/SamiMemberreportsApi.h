#ifndef SamiMemberreportsApi_H_
#define SamiMemberreportsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiMemberReports.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMemberreportsApi {
public:
  SamiMemberreportsApi();
  virtual ~SamiMemberreportsApi();

  
  SamiMemberReports* 
  findMemberReportsWithCompletion(String* vestorly-auth, void (* handler)(SamiMemberReports*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMemberreportsApi_H_ */
