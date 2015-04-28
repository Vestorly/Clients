#ifndef SamiNewslettersApi_H_
#define SamiNewslettersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiNewsletter.h"
using Tizen::Base::String;
#include "SamiNewsletterInput.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiNewslettersApi {
public:
  SamiNewslettersApi();
  virtual ~SamiNewslettersApi();

  
  SamiNewsletter* 
  findNewslettersWithCompletion(String* vestorly-auth, void (* handler)(SamiNewsletter*, SamiError*));
  
  SamiNewsletter* 
  createNewsletterWithCompletion(String* vestorly-auth, SamiNewsletterInput* Event, void (* handler)(SamiNewsletter*, SamiError*));
  
  SamiNewsletter* 
  getNewsletterByIDWithCompletion(String* vestorly-auth, String* _id, void (* handler)(SamiNewsletter*, SamiError*));
  
  SamiNewsletter* 
  updateNewsletterByIDWithCompletion(String* vestorly-auth, String* _id, SamiNewsletterInput* Event, void (* handler)(SamiNewsletter*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiNewslettersApi_H_ */
