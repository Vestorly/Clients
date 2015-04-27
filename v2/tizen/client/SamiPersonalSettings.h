/*
 * SamiPersonalSettings.h
 * 
 * 
 */

#ifndef SamiPersonalSettings_H_
#define SamiPersonalSettings_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiPersonalSettings: public SamiObject {
public:
    SamiPersonalSettings();
    SamiPersonalSettings(String* json);
    virtual ~SamiPersonalSettings();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPersonalSettings* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    

private:
    String* p_id;
    
};

} /* namespace Swagger */

#endif /* SamiPersonalSettings_H_ */
