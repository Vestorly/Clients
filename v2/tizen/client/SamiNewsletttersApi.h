#ifndef SamiNewsletttersApi_H_
#define SamiNewsletttersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiNewsletter.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiNewsletttersApi {
public:
  SamiNewsletttersApi();
  virtual ~SamiNewsletttersApi();

  
  SamiNewsletter* 
  findNewslettersWithCompletion(String* vestorly-auth, void (* handler)(SamiNewsletter*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiNewsletttersApi_H_ */
