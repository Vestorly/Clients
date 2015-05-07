/*
 * SamiMemberEvent.h
 * 
 * 
 */

#ifndef SamiMemberEvent_H_
#define SamiMemberEvent_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiMemberEvent: public SamiObject {
public:
    SamiMemberEvent();
    SamiMemberEvent(String* json);
    virtual ~SamiMemberEvent();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMemberEvent* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    String* getPCreatedAt();
    void setPCreatedAt(String* pCreated_at);
    
    String* getPType();
    void setPType(String* pType);
    
    String* getPSource();
    void setPSource(String* pSource);
    
    String* getPReferer();
    void setPReferer(String* pReferer);
    
    String* getPOriginalUrl();
    void setPOriginalUrl(String* pOriginal_url);
    
    String* getPOriginatorEmail();
    void setPOriginatorEmail(String* pOriginator_email);
    
    String* getPOriginatorName();
    void setPOriginatorName(String* pOriginator_name);
    
    String* getPParentOriginatorId();
    void setPParentOriginatorId(String* pParent_originator_id);
    
    String* getPParentEventId();
    void setPParentEventId(String* pParent_event_id);
    
    String* getPOriginatorType();
    void setPOriginatorType(String* pOriginator_type);
    
    String* getPOriginatorGroupId();
    void setPOriginatorGroupId(String* pOriginator_group_id);
    
    String* getPEventType();
    void setPEventType(String* pEvent_type);
    
    String* getPEventSource();
    void setPEventSource(String* pEvent_source);
    
    String* getPContentUrl();
    void setPContentUrl(String* pContent_url);
    
    String* getPEventDate();
    void setPEventDate(String* pEvent_date);
    
    String* getPUsername();
    void setPUsername(String* pUsername);
    
    String* getPMemberId();
    void setPMemberId(String* pMember_id);
    
    String* getPOriginatorId();
    void setPOriginatorId(String* pOriginator_id);
    
    String* getPSubjectId();
    void setPSubjectId(String* pSubject_id);
    

private:
    String* p_id;
    String* pCreated_at;
    String* pType;
    String* pSource;
    String* pReferer;
    String* pOriginal_url;
    String* pOriginator_email;
    String* pOriginator_name;
    String* pParent_originator_id;
    String* pParent_event_id;
    String* pOriginator_type;
    String* pOriginator_group_id;
    String* pEvent_type;
    String* pEvent_source;
    String* pContent_url;
    String* pEvent_date;
    String* pUsername;
    String* pMember_id;
    String* pOriginator_id;
    String* pSubject_id;
    
};

} /* namespace Swagger */

#endif /* SamiMemberEvent_H_ */
