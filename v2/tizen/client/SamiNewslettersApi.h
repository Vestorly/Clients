#ifndef SamiNewslettersApi_H_
#define SamiNewslettersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiNewsletters.h"
using Tizen::Base::String;
#include "SamiNewsletter.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiNewslettersApi {
public:
  SamiNewslettersApi();
  virtual ~SamiNewslettersApi();

  
  SamiNewsletters* 
  findNewslettersWithCompletion(String* vestorly_auth, void (* handler)(SamiNewsletters*, SamiError*));
  
  SamiNewsletter* 
  getNewsletterByIDWithCompletion(String* vestorly_auth, String* _id, void (* handler)(SamiNewsletter*, SamiError*));
  
  SamiNewsletter* 
  updateNewsletterWithCompletion(String* vestorly_auth, String* _id, String* Newsletter, void (* handler)(SamiNewsletter*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiNewslettersApi_H_ */
