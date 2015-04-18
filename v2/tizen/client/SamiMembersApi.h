#ifndef SamiMembersApi_H_
#define SamiMembersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiMembers.h"
using Tizen::Base::String;
#include "SamiMember.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMembersApi {
public:
  SamiMembersApi();
  virtual ~SamiMembersApi();

  
  SamiMembers* 
  findMembersWithCompletion(String* vestorly_auth, void (* handler)(SamiMembers*, SamiError*));
  
  SamiMember* 
  findMemberByIDWithCompletion(String* _id, String* vestorly_auth, void (* handler)(SamiMember*, SamiError*));
  
  SamiMember* 
  findMemberByID_1WithCompletion(String* _id, String* vestorly_auth, void (* handler)(SamiMember*, SamiError*));
  
  static String getBasePath() {
    return L"https://staging.vestorly.com/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMembersApi_H_ */
