/*
 * SamiFeatures.h
 * 
 * 
 */

#ifndef SamiFeatures_H_
#define SamiFeatures_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiFeatures: public SamiObject {
public:
    SamiFeatures();
    SamiFeatures(String* json);
    virtual ~SamiFeatures();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFeatures* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    

private:
    String* p_id;
    
};

} /* namespace Swagger */

#endif /* SamiFeatures_H_ */
