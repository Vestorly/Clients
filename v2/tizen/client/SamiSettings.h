/*
 * SamiSettings.h
 * 
 * 
 */

#ifndef SamiSettings_H_
#define SamiSettings_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiOrgSetting.h"
#include "SamiFeatures.h"
using Tizen::Base::String;
#include "SamiPersonalSettings.h"


namespace Swagger {

class SamiSettings: public SamiObject {
public:
    SamiSettings();
    SamiSettings(String* json);
    virtual ~SamiSettings();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSettings* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    String* getPCompany();
    void setPCompany(String* pCompany);
    
    String* getPPictureUrl();
    void setPPictureUrl(String* pPicture_url);
    
    String* getPWebsite();
    void setPWebsite(String* pWebsite);
    
    String* getPDisclosure();
    void setPDisclosure(String* pDisclosure);
    
    String* getPAdvBrochure();
    void setPAdvBrochure(String* pAdv_brochure);
    
    String* getPSlug();
    void setPSlug(String* pSlug);
    
    String* getPName();
    void setPName(String* pName);
    
    SamiOrgSetting* getPOrgsetting();
    void setPOrgsetting(SamiOrgSetting* pOrgsetting);
    
    SamiFeatures* getPFeature();
    void setPFeature(SamiFeatures* pFeature);
    
    SamiPersonalSettings* getPPersonalsetting();
    void setPPersonalsetting(SamiPersonalSettings* pPersonalsetting);
    

private:
    String* p_id;
    String* pCompany;
    String* pPicture_url;
    String* pWebsite;
    String* pDisclosure;
    String* pAdv_brochure;
    String* pSlug;
    String* pName;
    SamiOrgSetting* pOrgsetting;
    SamiFeatures* pFeature;
    SamiPersonalSettings* pPersonalsetting;
    
};

} /* namespace Swagger */

#endif /* SamiSettings_H_ */
