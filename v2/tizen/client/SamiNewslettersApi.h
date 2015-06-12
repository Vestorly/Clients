#ifndef SamiNewslettersApi_H_
#define SamiNewslettersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiNewsletters.h"
using Tizen::Base::String;
#include "SamiNewsletterresponse.h"
#include "SamiNewsletterInput.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiNewslettersApi {
public:
  SamiNewslettersApi();
  virtual ~SamiNewslettersApi();

  
  SamiNewsletters* 
  findNewslettersWithCompletion(String* vestorlyAuth, void (* handler)(SamiNewsletters*, SamiError*));
  
  SamiNewsletterresponse* 
  getNewsletterByIDWithCompletion(String* vestorlyAuth, String* _id, void (* handler)(SamiNewsletterresponse*, SamiError*));
  
  SamiNewsletterresponse* 
  updateNewsletterByIDWithCompletion(String* vestorlyAuth, String* _id, SamiNewsletterInput* newsletter, void (* handler)(SamiNewsletterresponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiNewslettersApi_H_ */
