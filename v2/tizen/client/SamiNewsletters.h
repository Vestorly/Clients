/*
 * SamiNewsletters.h
 * 
 * 
 */

#ifndef SamiNewsletters_H_
#define SamiNewsletters_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiNewsletter.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiNewsletters: public SamiObject {
public:
    SamiNewsletters();
    SamiNewsletters(String* json);
    virtual ~SamiNewsletters();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNewsletters* fromJson(String* obj);

    
    IList* getPNewletters();
    void setPNewletters(IList* pNewletters);
    

private:
    IList* pNewletters;
    
};

} /* namespace Swagger */

#endif /* SamiNewsletters_H_ */
