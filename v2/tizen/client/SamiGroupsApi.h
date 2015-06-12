#ifndef SamiGroupsApi_H_
#define SamiGroupsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiGroups.h"
#include "SamiGroupresponse.h"
#include "SamiGroupInput.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiGroupsApi {
public:
  SamiGroupsApi();
  virtual ~SamiGroupsApi();

  
  SamiGroups* 
  findGroupsWithCompletion(String* vestorlyAuth, void (* handler)(SamiGroups*, SamiError*));
  
  SamiGroupresponse* 
  createGroupWithCompletion(String* vestorlyAuth, SamiGroupInput* group, void (* handler)(SamiGroupresponse*, SamiError*));
  
  SamiGroupresponse* 
  findGroupByIDWithCompletion(String* vestorlyAuth, String* _id, void (* handler)(SamiGroupresponse*, SamiError*));
  
  SamiGroupresponse* 
  updateGroupByIdWithCompletion(String* vestorlyAuth, String* _id, SamiGroupInput* group, void (* handler)(SamiGroupresponse*, SamiError*));
  
  SamiGroupresponse* 
  deleteGroupWithCompletion(String* vestorlyAuth, String* _id, void (* handler)(SamiGroupresponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiGroupsApi_H_ */
