/*
 * SamiNewslettersettings.h
 * 
 * 
 */

#ifndef SamiNewslettersettings_H_
#define SamiNewslettersettings_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiNewsletterSetting.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiNewslettersettings: public SamiObject {
public:
    SamiNewslettersettings();
    SamiNewslettersettings(String* json);
    virtual ~SamiNewslettersettings();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNewslettersettings* fromJson(String* obj);

    
    IList* getPNewletterSettings();
    void setPNewletterSettings(IList* pNewletter_settings);
    

private:
    IList* pNewletter_settings;
    
};

} /* namespace Swagger */

#endif /* SamiNewslettersettings_H_ */
