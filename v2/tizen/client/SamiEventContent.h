/*
 * SamiEventContent.h
 * 
 * 
 */

#ifndef SamiEventContent_H_
#define SamiEventContent_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiEventContent: public SamiObject {
public:
    SamiEventContent();
    SamiEventContent(String* json);
    virtual ~SamiEventContent();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiEventContent* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    String* getPContentField();
    void setPContentField(String* pContent_field);
    
    String* getPContentId();
    void setPContentId(String* pContent_id);
    
    String* getPContentType();
    void setPContentType(String* pContent_type);
    
    String* getPCreatedAt();
    void setPCreatedAt(String* pCreated_at);
    
    String* getPSlug();
    void setPSlug(String* pSlug);
    
    String* getPUpdatedAt();
    void setPUpdatedAt(String* pUpdated_at);
    

private:
    String* p_id;
    String* pContent_field;
    String* pContent_id;
    String* pContent_type;
    String* pCreated_at;
    String* pSlug;
    String* pUpdated_at;
    
};

} /* namespace Swagger */

#endif /* SamiEventContent_H_ */
