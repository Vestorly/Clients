#ifndef SamiNewslettersettingsApi_H_
#define SamiNewslettersettingsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiNewslettersettings.h"
#include "SamiNewslettersettingresponse.h"
#include "SamiNewsletterSettingsInput.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiNewslettersettingsApi {
public:
  SamiNewslettersettingsApi();
  virtual ~SamiNewslettersettingsApi();

  
  SamiNewslettersettings* 
  findNewsletterSettingsWithCompletion(String* vestorly-auth, void (* handler)(SamiNewslettersettings*, SamiError*));
  
  SamiNewslettersettingresponse* 
  findNewsletterSettingsByIDWithCompletion(String* _id, String* vestorly-auth, void (* handler)(SamiNewslettersettingresponse*, SamiError*));
  
  SamiNewslettersettingresponse* 
  updateNewsletterSettingsByIDWithCompletion(String* _id, String* vestorly-auth, SamiNewsletterSettingsInput* newsletter_setting, void (* handler)(SamiNewslettersettingresponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiNewslettersettingsApi_H_ */
