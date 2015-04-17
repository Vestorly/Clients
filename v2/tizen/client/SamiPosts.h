/*
 * SamiPosts.h
 * 
 * 
 */

#ifndef SamiPosts_H_
#define SamiPosts_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPost.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiPosts: public SamiObject {
public:
    SamiPosts();
    SamiPosts(String* json);
    virtual ~SamiPosts();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPosts* fromJson(String* obj);

    
    IList* getPPosts();
    void setPPosts(IList* pPosts);
    

private:
    IList* pPosts;
    
};

} /* namespace Swagger */

#endif /* SamiPosts_H_ */
