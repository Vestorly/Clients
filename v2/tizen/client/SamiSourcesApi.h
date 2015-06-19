#ifndef SamiSourcesApi_H_
#define SamiSourcesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiSources.h"
#include "SamiSourceInput.h"
#include "SamiSourceresponse.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiSourcesApi {
public:
  SamiSourcesApi();
  virtual ~SamiSourcesApi();

  
  SamiSources* 
  findSourcesWithCompletion(String* vestorlyAuth, void (* handler)(SamiSources*, SamiError*));
  
  SamiSourceresponse* 
  createSourceWithCompletion(String* vestorlyAuth, SamiSourceInput* source, void (* handler)(SamiSourceresponse*, SamiError*));
  
  SamiSourceresponse* 
  getSourceByIDWithCompletion(String* vestorlyAuth, String* _id, void (* handler)(SamiSourceresponse*, SamiError*));
  
  SamiSourceresponse* 
  updateSourceByIDWithCompletion(String* vestorlyAuth, String* _id, SamiSourceInput* source, void (* handler)(SamiSourceresponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiSourcesApi_H_ */
