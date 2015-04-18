#ifndef SamiNewslettersettingsApi_H_
#define SamiNewslettersettingsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiNewsletterSettings.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiNewslettersettingsApi {
public:
  SamiNewslettersettingsApi();
  virtual ~SamiNewslettersettingsApi();

  
  SamiNewsletterSettings* 
  findNewsletterSettingsWithCompletion(String* vestorly_auth, void (* handler)(SamiNewsletterSettings*, SamiError*));
  
  SamiNewsletterSettings* 
  updateNewsletterSettingsByIDWithCompletion(String* vestorly_auth, String* newsletter_settings, void (* handler)(SamiNewsletterSettings*, SamiError*));
  
  SamiNewsletterSettings* 
  findNewsletterSettingsByIDWithCompletion(String* _id, String* vestorly_auth, void (* handler)(SamiNewsletterSettings*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiNewslettersettingsApi_H_ */
