/*
 * SamiArticles.h
 * 
 * 
 */

#ifndef SamiArticles_H_
#define SamiArticles_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Collection::IList;
#include "SamiArticle.h"


namespace Swagger {

class SamiArticles: public SamiObject {
public:
    SamiArticles();
    SamiArticles(String* json);
    virtual ~SamiArticles();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiArticles* fromJson(String* obj);

    
    IList* getPArticles();
    void setPArticles(IList* pArticles);
    

private:
    IList* pArticles;
    
};

} /* namespace Swagger */

#endif /* SamiArticles_H_ */
