/*
 * SamiGroups.h
 * 
 * 
 */

#ifndef SamiGroups_H_
#define SamiGroups_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiGroup.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiGroups: public SamiObject {
public:
    SamiGroups();
    SamiGroups(String* json);
    virtual ~SamiGroups();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiGroups* fromJson(String* obj);

    
    IList* getPGroups();
    void setPGroups(IList* pGroups);
    

private:
    IList* pGroups;
    
};

} /* namespace Swagger */

#endif /* SamiGroups_H_ */
