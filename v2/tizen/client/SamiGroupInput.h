/*
 * SamiGroupInput.h
 * 
 * 
 */

#ifndef SamiGroupInput_H_
#define SamiGroupInput_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;
using Tizen::Base::Integer;
using Tizen::Base::Boolean;


namespace Swagger {

class SamiGroupInput: public SamiObject {
public:
    SamiGroupInput();
    SamiGroupInput(String* json);
    virtual ~SamiGroupInput();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiGroupInput* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    String* getPName();
    void setPName(String* pName);
    
    Boolean* getPIsDefault();
    void setPIsDefault(Boolean* pIs_default);
    
    Boolean* getPIsHidden();
    void setPIsHidden(Boolean* pIs_hidden);
    
    String* getPNewWeeklyMailerContent();
    void setPNewWeeklyMailerContent(String* pNew_weekly_mailer_content);
    
    String* getPNewsletterSubject();
    void setPNewsletterSubject(String* pNewsletter_subject);
    
    Boolean* getPAutopublish();
    void setPAutopublish(Boolean* pAutopublish);
    
    Integer* getPNumberArticlesPerGroup();
    void setPNumberArticlesPerGroup(Integer* pNumber_articles_per_group);
    
    Integer* getPNumberArticlesPerNewsletter();
    void setPNumberArticlesPerNewsletter(Integer* pNumber_articles_per_newsletter);
    

private:
    String* p_id;
    String* pName;
    Boolean* pIs_default;
    Boolean* pIs_hidden;
    String* pNew_weekly_mailer_content;
    String* pNewsletter_subject;
    Boolean* pAutopublish;
    Integer* pNumber_articles_per_group;
    Integer* pNumber_articles_per_newsletter;
    
};

} /* namespace Swagger */

#endif /* SamiGroupInput_H_ */
