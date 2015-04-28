/*
 * SamiArticleresponse.h
 * 
 * 
 */

#ifndef SamiArticleresponse_H_
#define SamiArticleresponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiArticle.h"


namespace Swagger {

class SamiArticleresponse: public SamiObject {
public:
    SamiArticleresponse();
    SamiArticleresponse(String* json);
    virtual ~SamiArticleresponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiArticleresponse* fromJson(String* obj);

    
    SamiArticle* getPArticle();
    void setPArticle(SamiArticle* pArticle);
    

private:
    SamiArticle* pArticle;
    
};

} /* namespace Swagger */

#endif /* SamiArticleresponse_H_ */
