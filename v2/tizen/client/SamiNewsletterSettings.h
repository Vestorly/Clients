/*
 * SamiNewsletterSettings.h
 * 
 * 
 */

#ifndef SamiNewsletterSettings_H_
#define SamiNewsletterSettings_H_

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

class SamiNewsletterSettings: public SamiObject {
public:
    SamiNewsletterSettings();
    SamiNewsletterSettings(String* json);
    virtual ~SamiNewsletterSettings();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNewsletterSettings* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
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
    String* p_id;
    String* pEmail_status;
    String* pTwitter_status;
    String* pLinkedin_status;
    Integer* pEmail_hour;
    Integer* pTwitter_hour;
    Integer* pLinkedin_hour;
    Integer* pFacebook_hour;
    
};

} /* namespace Swagger */

#endif /* SamiNewsletterSettings_H_ */
