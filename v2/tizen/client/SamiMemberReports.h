/*
 * SamiMemberReports.h
 * 
 * 
 */

#ifndef SamiMemberReports_H_
#define SamiMemberReports_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiMemberReport.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiMemberReports: public SamiObject {
public:
    SamiMemberReports();
    SamiMemberReports(String* json);
    virtual ~SamiMemberReports();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMemberReports* fromJson(String* obj);

    
    IList* getPMemberReports();
    void setPMemberReports(IList* pMember_reports);
    

private:
    IList* pMember_reports;
    
};

} /* namespace Swagger */

#endif /* SamiMemberReports_H_ */
