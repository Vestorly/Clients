/*
 * SamiArticle.h
 * 
 * 
 */

#ifndef SamiArticle_H_
#define SamiArticle_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;




namespace Swagger {

class SamiArticle: public SamiObject {
public:
    SamiArticle();
    SamiArticle(String* json);
    virtual ~SamiArticle();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiArticle* fromJson(String* obj);

    

private:
    
};

} /* namespace Swagger */

#endif /* SamiArticle_H_ */
