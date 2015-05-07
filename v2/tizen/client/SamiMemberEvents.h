/*
 * SamiMemberEvents.h
 * 
 * 
 */

#ifndef SamiMemberEvents_H_
#define SamiMemberEvents_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiTruncatedMember.h"
#include "SamiMemberEvent.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiMemberEvents: public SamiObject {
public:
    SamiMemberEvents();
    SamiMemberEvents(String* json);
    virtual ~SamiMemberEvents();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMemberEvents* fromJson(String* obj);

    
    IList* getPMembers();
    void setPMembers(IList* pMembers);
    
    IList* getPMemberEvents();
    void setPMemberEvents(IList* pMember_events);
    

private:
    IList* pMembers;
    IList* pMember_events;
    
};

} /* namespace Swagger */

#endif /* SamiMemberEvents_H_ */
