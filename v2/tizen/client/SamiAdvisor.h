/*
 * SamiAdvisor.h
 * 
 * 
 */

#ifndef SamiAdvisor_H_
#define SamiAdvisor_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiAdvisor: public SamiObject {
public:
    SamiAdvisor();
    SamiAdvisor(String* json);
    virtual ~SamiAdvisor();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAdvisor* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* pId);
    
    String* getPName();
    void setPName(String* pName);
    
    String* getPTag();
    void setPTag(String* pTag);
    

private:
    String* pId;
    String* pName;
    String* pTag;
    
};

} /* namespace Swagger */

#endif /* SamiAdvisor_H_ */
