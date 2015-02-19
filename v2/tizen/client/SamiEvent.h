/*
 * SamiEvent.h
 * 
 * An Event document.
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


#include "SamiSymbol.h"
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

    
    String* get_id();
    void set_id(String* p_id);
    
    SamiSymbol* getType();
    void setType(SamiSymbol* pType);
    
    String* getReferrer();
    void setReferrer(String* pReferrer);
    
    String* getOriginal_url();
    void setOriginal_url(String* pOriginal_url);
    
    String* getOriginator_email();
    void setOriginator_email(String* pOriginator_email);
    
    String* getSubject_email();
    void setSubject_email(String* pSubject_email);
    
    String* getAdvisor_email();
    void setAdvisor_email(String* pAdvisor_email);
    
    String* getOriginator_group_name();
    void setOriginator_group_name(String* pOriginator_group_name);
    
    String* getNewsletter();
    void setNewsletter(String* pNewsletter);
    

private:
    String* p_id;
    SamiSymbol* pType;
    String* pReferrer;
    String* pOriginal_url;
    String* pOriginator_email;
    String* pSubject_email;
    String* pAdvisor_email;
    String* pOriginator_group_name;
    String* pNewsletter;
    
};

} /* namespace Swagger */

#endif /* SamiEvent_H_ */
