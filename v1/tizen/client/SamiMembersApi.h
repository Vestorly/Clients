#ifndef SamiMembersApi_H_
#define SamiMembersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiVoid.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMembersApi {
public:
  SamiMembersApi();
  virtual ~SamiMembersApi();

  
  SamiVoid* 
  indexWithCompletion(String* vestorly-auth, String* advisor_id, String* search, String* sorted_by, String* sorted_order, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  createWithCompletion(String* vestorly-auth, String* advisor_id, String* member, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  showWithCompletion(String* vestorly-auth, String* advisor_id, String* _id, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  updateWithCompletion(String* vestorly-auth, String* advisor_id, String* _id, String* member, void (* handler)(SamiVoid*, SamiError*));
  
  SamiVoid* 
  destroyWithCompletion(String* vestorly-auth, String* advisor_id, String* _id, void (* handler)(SamiVoid*, SamiError*));
  
  static String getBasePath() {
    return L"http://developers.vestorly.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMembersApi_H_ */
