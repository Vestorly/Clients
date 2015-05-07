/*
 * SamiEvent.h
 * 
 * 
 */

#ifndef SamiEvent_H_
#define SamiEvent_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiEventContent.h"
using Tizen::Base::String;


namespace Swagger {

class SamiEvent: public SamiObject {
public:
    SamiEvent();
    SamiEvent(String* json);
    virtual ~SamiEvent();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiEvent* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    String* getPType();
    void setPType(String* pType);
    
    String* getPReferer();
    void setPReferer(String* pReferer);
    
    String* getPOriginalUrl();
    void setPOriginalUrl(String* pOriginal_url);
    
    String* getPOriginatorEmail();
    void setPOriginatorEmail(String* pOriginator_email);
    
    String* getPSubjectEmail();
    void setPSubjectEmail(String* pSubject_email);
    
    String* getPParentEventId();
    void setPParentEventId(String* pParent_event_id);
    
    String* getPOriginatorId();
    void setPOriginatorId(String* pOriginator_id);
    
    String* getPAdvisorId();
    void setPAdvisorId(String* pAdvisor_id);
    
    String* getPSubjectId();
    void setPSubjectId(String* pSubject_id);
    
    SamiEventContent* getPEventContent();
    void setPEventContent(SamiEventContent* pEvent_content);
    
    String* getPCreatedAt();
    void setPCreatedAt(String* pCreated_at);
    

private:
    String* p_id;
    String* pType;
    String* pReferer;
    String* pOriginal_url;
    String* pOriginator_email;
    String* pSubject_email;
    String* pParent_event_id;
    String* pOriginator_id;
    String* pAdvisor_id;
    String* pSubject_id;
    SamiEventContent* pEvent_content;
    String* pCreated_at;
    
};

} /* namespace Swagger */

#endif /* SamiEvent_H_ */
