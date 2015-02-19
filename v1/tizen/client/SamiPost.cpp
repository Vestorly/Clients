
#include "SamiPost.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPost::SamiPost() {
    init();
}

SamiPost::~SamiPost() {
    this->cleanup();
}

void
SamiPost::init() {
    p_id = null;
    pTitle = null;
    pBody = null;
    pComment = null;
    pVideo = null;
    pImg = null;
    
}

void
SamiPost::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pTitle != null) {
        
        delete pTitle;
        pTitle = null;
    }
    if(pBody != null) {
        
        delete pBody;
        pBody = null;
    }
    if(pComment != null) {
        
        delete pComment;
        pComment = null;
    }
    if(pVideo != null) {
        
        delete pVideo;
        pVideo = null;
    }
    if(pImg != null) {
        
        delete pImg;
        pImg = null;
    }
    
}


SamiPost*
SamiPost::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiPost::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* p_idKey = new JsonString(L"_id");
        IJsonValue* p_idVal = null;
        pJsonObject->GetValue(p_idKey, p_idVal);
        if(p_idVal != null) {
            
            p_id = new String();
            jsonToValue(p_id, p_idVal, L"String", L"String");
        }
        delete p_idKey;
        JsonString* pTitleKey = new JsonString(L"title");
        IJsonValue* pTitleVal = null;
        pJsonObject->GetValue(pTitleKey, pTitleVal);
        if(pTitleVal != null) {
            
            pTitle = new String();
            jsonToValue(pTitle, pTitleVal, L"String", L"String");
        }
        delete pTitleKey;
        JsonString* pBodyKey = new JsonString(L"body");
        IJsonValue* pBodyVal = null;
        pJsonObject->GetValue(pBodyKey, pBodyVal);
        if(pBodyVal != null) {
            
            pBody = new String();
            jsonToValue(pBody, pBodyVal, L"String", L"String");
        }
        delete pBodyKey;
        JsonString* pCommentKey = new JsonString(L"comment");
        IJsonValue* pCommentVal = null;
        pJsonObject->GetValue(pCommentKey, pCommentVal);
        if(pCommentVal != null) {
            
            pComment = new String();
            jsonToValue(pComment, pCommentVal, L"String", L"String");
        }
        delete pCommentKey;
        JsonString* pVideoKey = new JsonString(L"video");
        IJsonValue* pVideoVal = null;
        pJsonObject->GetValue(pVideoKey, pVideoVal);
        if(pVideoVal != null) {
            
            pVideo = new String();
            jsonToValue(pVideo, pVideoVal, L"String", L"String");
        }
        delete pVideoKey;
        JsonString* pImgKey = new JsonString(L"img");
        IJsonValue* pImgVal = null;
        pJsonObject->GetValue(pImgKey, pImgVal);
        if(pImgVal != null) {
            
            pImg = new String();
            jsonToValue(pImg, pImgVal, L"String", L"String");
        }
        delete pImgKey;
        
    }
}

SamiPost::SamiPost(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiPost::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiPost::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(get_id(), "String", ""));

    
    JsonString *pTitleKey = new JsonString(L"title");
    pJsonObject->Add(pTitleKey, toJson(getTitle(), "String", ""));

    
    JsonString *pBodyKey = new JsonString(L"body");
    pJsonObject->Add(pBodyKey, toJson(getBody(), "String", ""));

    
    JsonString *pCommentKey = new JsonString(L"comment");
    pJsonObject->Add(pCommentKey, toJson(getComment(), "String", ""));

    
    JsonString *pVideoKey = new JsonString(L"video");
    pJsonObject->Add(pVideoKey, toJson(getVideo(), "String", ""));

    
    JsonString *pImgKey = new JsonString(L"img");
    pJsonObject->Add(pImgKey, toJson(getImg(), "String", ""));

    
    return pJsonObject;
}

String*
SamiPost::get_id() {
    return p_id;
}
void
SamiPost::set_id(String* p_id) {
    this->p_id = p_id;
}

String*
SamiPost::getTitle() {
    return pTitle;
}
void
SamiPost::setTitle(String* pTitle) {
    this->pTitle = pTitle;
}

String*
SamiPost::getBody() {
    return pBody;
}
void
SamiPost::setBody(String* pBody) {
    this->pBody = pBody;
}

String*
SamiPost::getComment() {
    return pComment;
}
void
SamiPost::setComment(String* pComment) {
    this->pComment = pComment;
}

String*
SamiPost::getVideo() {
    return pVideo;
}
void
SamiPost::setVideo(String* pVideo) {
    this->pVideo = pVideo;
}

String*
SamiPost::getImg() {
    return pImg;
}
void
SamiPost::setImg(String* pImg) {
    this->pImg = pImg;
}



} /* namespace Swagger */

