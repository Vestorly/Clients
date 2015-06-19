/*
 * SamiEvents.h
 * 
 * 
 */

#ifndef SamiEvents_H_
#define SamiEvents_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Collection::IList;
#include "SamiEvent.h"


namespace Swagger {

class SamiEvents: public SamiObject {
public:
    SamiEvents();
    SamiEvents(String* json);
    virtual ~SamiEvents();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiEvents* fromJson(String* obj);

    
    IList* getPEvents();
    void setPEvents(IList* pEvents);
    

private:
    IList* pEvents;
    
};

} /* namespace Swagger */

#endif /* SamiEvents_H_ */
