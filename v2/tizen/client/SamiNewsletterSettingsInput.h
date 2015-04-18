/*
 * SamiNewsletterSettingsInput.h
 * 
 * 
 */

#ifndef SamiNewsletterSettingsInput_H_
#define SamiNewsletterSettingsInput_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiNewsletterSettingsInput: public SamiObject {
public:
    SamiNewsletterSettingsInput();
    SamiNewsletterSettingsInput(String* json);
    virtual ~SamiNewsletterSettingsInput();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNewsletterSettingsInput* fromJson(String* obj);

    
    String* getPEmailStatus();
    void setPEmailStatus(String* pEmail_status);
    
    String* getPTwitterStatus();
    void setPTwitterStatus(String* pTwitter_status);
    
    String* getPLinkedinStatus();
    void setPLinkedinStatus(String* pLinkedin_status);
    
    Integer* getPEmailHour();
    void setPEmailHour(Integer* pEmail_hour);
    
    Integer* getPTwitterHour();
    void setPTwitterHour(Integer* pTwitter_hour);
    
    Integer* getPLinkedinHour();
    void setPLinkedinHour(Integer* pLinkedin_hour);
    
    Integer* getPFacebookHour();
    void setPFacebookHour(Integer* pFacebook_hour);
    

private:
    String* pEmail_status;
    String* pTwitter_status;
    String* pLinkedin_status;
    Integer* pEmail_hour;
    Integer* pTwitter_hour;
    Integer* pLinkedin_hour;
    Integer* pFacebook_hour;
    
};

} /* namespace Swagger */

#endif /* SamiNewsletterSettingsInput_H_ */
