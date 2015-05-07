/*
 * SamiMemberReport.h
 * 
 * 
 */

#ifndef SamiMemberReport_H_
#define SamiMemberReport_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiMemberReport: public SamiObject {
public:
    SamiMemberReport();
    SamiMemberReport(String* json);
    virtual ~SamiMemberReport();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMemberReport* fromJson(String* obj);

    
    Integer* getPDay();
    void setPDay(Integer* pDay);
    
    Integer* getPEventCount();
    void setPEventCount(Integer* pEvent_count);
    
    String* getPOriginatorGroupId();
    void setPOriginatorGroupId(String* pOriginator_group_id);
    
    String* getPParentOriginatorId();
    void setPParentOriginatorId(String* pParent_originator_id);
    
    String* getPSource();
    void setPSource(String* pSource);
    
    String* getPType();
    void setPType(String* pType);
    
    Integer* getPYear();
    void setPYear(Integer* pYear);
    

private:
    Integer* pDay;
    Integer* pEvent_count;
    String* pOriginator_group_id;
    String* pParent_originator_id;
    String* pSource;
    String* pType;
    Integer* pYear;
    
};

} /* namespace Swagger */

#endif /* SamiMemberReport_H_ */
