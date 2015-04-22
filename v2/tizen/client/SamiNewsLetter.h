/*
 * SamiNewsletter.h
 * 
 * 
 */

#ifndef SamiNewsletter_H_
#define SamiNewsletter_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Long;
using Tizen::Base::String;
using Tizen::Base::Boolean;


namespace Swagger {

class SamiNewsletter: public SamiObject {
public:
    SamiNewsletter();
    SamiNewsletter(String* json);
    virtual ~SamiNewsletter();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNewsletter* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    Boolean* getPIsSent();
    void setPIsSent(Boolean* pIs_sent);
    
    Boolean* getPIsDefault();
    void setPIsDefault(Boolean* pIs_default);
    
    Long* getPClickCount();
    void setPClickCount(Long* pClick_count);
    
    Long* getPUniqueClickCount();
    void setPUniqueClickCount(Long* pUnique_click_count);
    
    Long* getPTotalClickCount();
    void setPTotalClickCount(Long* pTotal_click_count);
    

private:
    String* p_id;
    Boolean* pIs_sent;
    Boolean* pIs_default;
    Long* pClick_count;
    Long* pUnique_click_count;
    Long* pTotal_click_count;
    
};

} /* namespace Swagger */

#endif /* SamiNewsletter_H_ */
