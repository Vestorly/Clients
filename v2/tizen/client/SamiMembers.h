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


#include "SamiMeta.h"
#include "SamiMember.h"
using Tizen::Base::Boolean;
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
    
    Boolean* getPMoreResults();
    void setPMoreResults(Boolean* pMore_results);
    
    SamiMeta* getPMeta();
    void setPMeta(SamiMeta* pMeta);
    

private:
    IList* pMembers;
    Boolean* pMore_results;
    SamiMeta* pMeta;
    
};

} /* namespace Swagger */

#endif /* SamiMembers_H_ */
