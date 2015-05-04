/*
 * SamiEventInput.h
 * 
 * 
 */

#ifndef SamiEventInput_H_
#define SamiEventInput_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiEventInput: public SamiObject {
public:
    SamiEventInput();
    SamiEventInput(String* json);
    virtual ~SamiEventInput();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiEventInput* fromJson(String* obj);

    
    String* getPReferer();
    void setPReferer(String* pReferer);
    
    String* getPOriginalUrl();
    void setPOriginalUrl(String* pOriginal_url);
    
    String* getPOriginatorEmail();
    void setPOriginatorEmail(String* pOriginator_email);
    
    String* getPSubjectEmail();
    void setPSubjectEmail(String* pSubject_email);
    
    String* getPAdvisorEmail();
    void setPAdvisorEmail(String* pAdvisor_email);
    
    String* getPOriginatorGroupName();
    void setPOriginatorGroupName(String* pOriginator_group_name);
    
    String* getPNewsletter();
    void setPNewsletter(String* pNewsletter);
    

private:
    String* pReferer;
    String* pOriginal_url;
    String* pOriginator_email;
    String* pSubject_email;
    String* pAdvisor_email;
    String* pOriginator_group_name;
    String* pNewsletter;
    
};

} /* namespace Swagger */

#endif /* SamiEventInput_H_ */
