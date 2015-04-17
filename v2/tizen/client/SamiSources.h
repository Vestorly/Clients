/*
 * SamiSources.h
 * 
 * 
 */

#ifndef SamiSources_H_
#define SamiSources_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSource.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiSources: public SamiObject {
public:
    SamiSources();
    SamiSources(String* json);
    virtual ~SamiSources();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSources* fromJson(String* obj);

    
    IList* getPSources();
    void setPSources(IList* pSources);
    

private:
    IList* pSources;
    
};

} /* namespace Swagger */

#endif /* SamiSources_H_ */
