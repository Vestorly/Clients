#ifndef SamiGroupsApi_H_
#define SamiGroupsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiGroups.h"
using Tizen::Base::String;
#include "SamiGroup.h"
#include "SamiGroupInput.h"
#include "SamiErrorModel.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiGroupsApi {
public:
  SamiGroupsApi();
  virtual ~SamiGroupsApi();

  
  SamiGroups* 
  findGroupsWithCompletion(String* vestorly-auth, void (* handler)(SamiGroups*, SamiError*));
  
  SamiGroup* 
  findGroupByIDWithCompletion(String* vestorly-auth, String* _id, void (* handler)(SamiGroup*, SamiError*));
  
  SamiGroupInput* 
  addGroupWithCompletion(String* vestorly-auth, String* _id, SamiGroup* group, void (* handler)(SamiGroupInput*, SamiError*));
  
  SamiGroupInput* 
  addGroup_1WithCompletion(SamiGroup* group, void (* handler)(SamiGroupInput*, SamiError*));
  
  SamiGroupInput* 
  deleteGroupWithCompletion(SamiGroup* group, void (* handler)(SamiGroupInput*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiGroupsApi_H_ */
