#ifndef SamiNewslettersettingsApi_H_
#define SamiNewslettersettingsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiNewsletterSettings.h"
#include "SamiNewslettersettingresponse.h"
#include "SamiNewsletterSettingsInput.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiNewslettersettingsApi {
public:
  SamiNewslettersettingsApi();
  virtual ~SamiNewslettersettingsApi();

  
  SamiNewsletterSettings* 
  findNewsletterSettingsWithCompletion(String* vestorlyAuth, void (* handler)(SamiNewsletterSettings*, SamiError*));
  
  SamiNewslettersettingresponse* 
  findNewsletterSettingsByIDWithCompletion(String* _id, String* vestorlyAuth, void (* handler)(SamiNewslettersettingresponse*, SamiError*));
  
  SamiNewslettersettingresponse* 
  updateNewsletterSettingsByIDWithCompletion(String* _id, String* vestorlyAuth, SamiNewsletterSettingsInput* newsletterSetting, void (* handler)(SamiNewslettersettingresponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiNewslettersettingsApi_H_ */
