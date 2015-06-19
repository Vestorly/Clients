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


using Tizen::Base::Collection::IList;
#include "SamiNewsletterSetting.h"


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

    
    IList* getPNewsletterSettings();
    void setPNewsletterSettings(IList* pNewsletter_settings);
    

private:
    IList* pNewsletter_settings;
    
};

} /* namespace Swagger */

#endif /* SamiNewsletterSettings_H_ */
