/*
 * SamiPost.h
 * 
 * A Post object.
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


using Tizen::Base::String;


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

    
    String* get_id();
    void set_id(String* p_id);
    
    String* getTitle();
    void setTitle(String* pTitle);
    
    String* getBody();
    void setBody(String* pBody);
    
    String* getComment();
    void setComment(String* pComment);
    
    String* getVideo();
    void setVideo(String* pVideo);
    
    String* getImg();
    void setImg(String* pImg);
    

private:
    String* p_id;
    String* pTitle;
    String* pBody;
    String* pComment;
    String* pVideo;
    String* pImg;
    
};

} /* namespace Swagger */

#endif /* SamiPost_H_ */
