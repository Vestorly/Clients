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


#include "SamiNewsletterSetting.h"


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

    
    SamiNewsletterSetting* getPNewsletterSetting();
    void setPNewsletterSetting(SamiNewsletterSetting* pNewsletter_setting);
    

private:
    SamiNewsletterSetting* pNewsletter_setting;
    
};

} /* namespace Swagger */

#endif /* SamiNewsletterSettingsInput_H_ */
