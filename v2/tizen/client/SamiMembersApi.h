#ifndef SamiMembersApi_H_
#define SamiMembersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiMembers.h"
#include "SamiMember.h"
#include "SamiMemberresponse.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMembersApi {
public:
  SamiMembersApi();
  virtual ~SamiMembersApi();

  
  SamiMembers* 
  findMembersWithCompletion(String* vestorlyAuth, void (* handler)(SamiMembers*, SamiError*));
  
  SamiMemberresponse* 
  createMemberWithCompletion(String* vestorlyAuth, SamiMember* member, void (* handler)(SamiMemberresponse*, SamiError*));
  
  SamiMemberresponse* 
  findMemberByIDWithCompletion(String* _id, String* vestorlyAuth, void (* handler)(SamiMemberresponse*, SamiError*));
  
  SamiMemberresponse* 
  updateMemberByIDWithCompletion(String* _id, String* vestorlyAuth, SamiMember* member, void (* handler)(SamiMemberresponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMembersApi_H_ */
