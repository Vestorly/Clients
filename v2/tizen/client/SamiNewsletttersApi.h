#ifndef SamiNewsletttersApi_H_
#define SamiNewsletttersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiNewsletters.h"
using Tizen::Base::String;
#include "SamiNewsletter.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiNewsletttersApi {
public:
  SamiNewsletttersApi();
  virtual ~SamiNewsletttersApi();

  
  SamiNewsletters* 
  findNewslettersWithCompletion(String* vestorly-auth, void (* handler)(SamiNewsletters*, SamiError*));
  
  SamiNewsletter* 
  getNewsletterByIDWithCompletion(String* vestorly-auth, String* _id, void (* handler)(SamiNewsletter*, SamiError*));
  
  SamiNewsletter* 
  updateNewsletterWithCompletion(String* vestorly-auth, String* _id, String* Newsletter, void (* handler)(SamiNewsletter*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiNewsletttersApi_H_ */
