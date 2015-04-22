/*
 * SamiAdvisors.h
 * 
 * 
 */

#ifndef SamiAdvisors_H_
#define SamiAdvisors_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiAdvisor.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiAdvisors: public SamiObject {
public:
    SamiAdvisors();
    SamiAdvisors(String* json);
    virtual ~SamiAdvisors();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAdvisors* fromJson(String* obj);

    
    IList* getPAdvisors();
    void setPAdvisors(IList* pAdvisors);
    

private:
    IList* pAdvisors;
    
};

} /* namespace Swagger */

#endif /* SamiAdvisors_H_ */
