/*
 * SamiMembers.h
 * 
 * 
 */

#ifndef SamiMembers_H_
#define SamiMembers_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiMember.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiMembers: public SamiObject {
public:
    SamiMembers();
    SamiMembers(String* json);
    virtual ~SamiMembers();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMembers* fromJson(String* obj);

    
    IList* getPMembers();
    void setPMembers(IList* pMembers);
    

private:
    IList* pMembers;
    
};

} /* namespace Swagger */

#endif /* SamiMembers_H_ */
