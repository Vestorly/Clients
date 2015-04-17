#ifndef SamiSourcesApi_H_
#define SamiSourcesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiSources.h"
using Tizen::Base::String;
#include "SamiSource.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiSourcesApi {
public:
  SamiSourcesApi();
  virtual ~SamiSourcesApi();

  
  SamiSources* 
  findSourcesWithCompletion(String* vestorly-auth, void (* handler)(SamiSources*, SamiError*));
  
  SamiSource* 
  createSourceWithCompletion(String* vestorly-auth, String* Source, void (* handler)(SamiSource*, SamiError*));
  
  SamiSource* 
  getSourceByIDWithCompletion(String* vestorly-auth, String* _id, void (* handler)(SamiSource*, SamiError*));
  
  SamiSource* 
  UpdateSourceByIDWithCompletion(String* vestorly-auth, String* _id, String* Source, void (* handler)(SamiSource*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiSourcesApi_H_ */
