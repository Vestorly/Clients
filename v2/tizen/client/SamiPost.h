/*
 * SamiPost.h
 * 
 * 
 */

#ifndef SamiPost_H_
#define SamiPost_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;


namespace Swagger {

class SamiPost: public SamiObject {
public:
    SamiPost();
    SamiPost(String* json);
    virtual ~SamiPost();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPost* fromJson(String* obj);

    
    Boolean* getPClientOnly();
    void setPClientOnly(Boolean* pClient_only);
    
    Boolean* getPImgCompressed();
    void setPImgCompressed(Boolean* pImg_compressed);
    
    Boolean* getPImgChanged();
    void setPImgChanged(Boolean* pImg_changed);
    

private:
    Boolean* pClient_only;
    Boolean* pImg_compressed;
    Boolean* pImg_changed;
    
};

} /* namespace Swagger */

#endif /* SamiPost_H_ */
