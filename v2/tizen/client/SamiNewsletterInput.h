/*
 * SamiNewsletterInput.h
 * 
 * 
 */

#ifndef SamiNewsletterInput_H_
#define SamiNewsletterInput_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Long;
using Tizen::Base::Boolean;


namespace Swagger {

class SamiNewsletterInput: public SamiObject {
public:
    SamiNewsletterInput();
    SamiNewsletterInput(String* json);
    virtual ~SamiNewsletterInput();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNewsletterInput* fromJson(String* obj);

    
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
    Boolean* pIs_sent;
    Boolean* pIs_default;
    Long* pClick_count;
    Long* pUnique_click_count;
    Long* pTotal_click_count;
    
};

} /* namespace Swagger */

#endif /* SamiNewsletterInput_H_ */
