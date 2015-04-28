#ifndef SamiNewslettersApi_H_
#define SamiNewslettersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiNewsletter.h"
using Tizen::Base::String;
#include "SamiNewsletterInput.h"
#include "SamiNewsletterresponse.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiNewslettersApi {
public:
  SamiNewslettersApi();
  virtual ~SamiNewslettersApi();

  
  SamiNewsletter* 
  findNewslettersWithCompletion(String* vestorly-auth, void (* handler)(SamiNewsletter*, SamiError*));
  
  SamiNewsletterresponse* 
  createNewsletterWithCompletion(String* vestorly-auth, SamiNewsletterInput* newsletter, void (* handler)(SamiNewsletterresponse*, SamiError*));
  
  SamiNewsletterresponse* 
  getNewsletterByIDWithCompletion(String* vestorly-auth, String* _id, void (* handler)(SamiNewsletterresponse*, SamiError*));
  
  SamiNewsletterresponse* 
  updateNewsletterByIDWithCompletion(String* vestorly-auth, String* _id, SamiNewsletterInput* newsletter, void (* handler)(SamiNewsletterresponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiNewslettersApi_H_ */
