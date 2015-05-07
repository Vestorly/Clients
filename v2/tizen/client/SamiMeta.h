/*
 * SamiMeta.h
 * 
 * 
 */

#ifndef SamiMeta_H_
#define SamiMeta_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiMeta: public SamiObject {
public:
    SamiMeta();
    SamiMeta(String* json);
    virtual ~SamiMeta();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMeta* fromJson(String* obj);

    
    String* getPSortOrder();
    void setPSortOrder(String* pSort_order);
    
    Boolean* getPMoreResults();
    void setPMoreResults(Boolean* pMore_results);
    
    String* getPMessage();
    void setPMessage(String* pMessage);
    
    IList* getPSortedBy();
    void setPSortedBy(IList* pSorted_by);
    

private:
    String* pSort_order;
    Boolean* pMore_results;
    String* pMessage;
    IList* pSorted_by;
    
};

} /* namespace Swagger */

#endif /* SamiMeta_H_ */
