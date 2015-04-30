/*
 * SamiPostInput.h
 * 
 * 
 */

#ifndef SamiPostInput_H_
#define SamiPostInput_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;
using Tizen::Base::Boolean;


namespace Swagger {

class SamiPostInput: public SamiObject {
public:
    SamiPostInput();
    SamiPostInput(String* json);
    virtual ~SamiPostInput();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPostInput* fromJson(String* obj);

    
    String* getPTitle();
    void setPTitle(String* pTitle);
    
    String* getPPostDate();
    void setPPostDate(String* pPost_date);
    
    String* getPBody();
    void setPBody(String* pBody);
    
    String* getPComment();
    void setPComment(String* pComment);
    
    Boolean* getPClientOnly();
    void setPClientOnly(Boolean* pClient_only);
    
    String* getPAttachment();
    void setPAttachment(String* pAttachment);
    
    String* getPVideo();
    void setPVideo(String* pVideo);
    
    String* getPImg();
    void setPImg(String* pImg);
    
    String* getPImageUrl();
    void setPImageUrl(String* pImage_url);
    
    Boolean* getPImgCompressed();
    void setPImgCompressed(Boolean* pImg_compressed);
    
    Boolean* getPImgChanged();
    void setPImgChanged(Boolean* pImg_changed);
    
    String* getPTopic();
    void setPTopic(String* pTopic);
    

private:
    String* pTitle;
    String* pPost_date;
    String* pBody;
    String* pComment;
    Boolean* pClient_only;
    String* pAttachment;
    String* pVideo;
    String* pImg;
    String* pImage_url;
    Boolean* pImg_compressed;
    Boolean* pImg_changed;
    String* pTopic;
    
};

} /* namespace Swagger */

#endif /* SamiPostInput_H_ */
