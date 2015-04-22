
#include "SamiPostInput.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPostInput::SamiPostInput() {
    init();
}

SamiPostInput::~SamiPostInput() {
    this->cleanup();
}

void
SamiPostInput::init() {
    p_id = null;
    pTitle = null;
    pPost_date = null;
    pBody = null;
    pComment = null;
    pClient_only = null;
    pAttachment = null;
    pVideo = null;
    pImg = null;
    pImage_url = null;
    pImg_compressed = null;
    pImg_changed = null;
    pTopic = null;
    
}

void
SamiPostInput::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pTitle != null) {
        
        delete pTitle;
        pTitle = null;
    }
    if(pPost_date != null) {
        
        delete pPost_date;
        pPost_date = null;
    }
    if(pBody != null) {
        
        delete pBody;
        pBody = null;
    }
    if(pComment != null) {
        
        delete pComment;
        pComment = null;
    }
    if(pClient_only != null) {
        
        delete pClient_only;
        pClient_only = null;
    }
    if(pAttachment != null) {
        
        delete pAttachment;
        pAttachment = null;
    }
    if(pVideo != null) {
        
        delete pVideo;
        pVideo = null;
    }
    if(pImg != null) {
        
        delete pImg;
        pImg = null;
    }
    if(pImage_url != null) {
        
        delete pImage_url;
        pImage_url = null;
    }
    if(pImg_compressed != null) {
        
        delete pImg_compressed;
        pImg_compressed = null;
    }
    if(pImg_changed != null) {
        
        delete pImg_changed;
        pImg_changed = null;
    }
    if(pTopic != null) {
        
        delete pTopic;
        pTopic = null;
    }
    
}


SamiPostInput*
SamiPostInput::fromJson(String* json) {
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
SamiPostInput::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pPost_dateKey = new JsonString(L"post_date");
        IJsonValue* pPost_dateVal = null;
        pJsonObject->GetValue(pPost_dateKey, pPost_dateVal);
        if(pPost_dateVal != null) {
            
            pPost_date = new String();
            jsonToValue(pPost_date, pPost_dateVal, L"String", L"String");
        }
        delete pPost_dateKey;
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
        JsonString* pClient_onlyKey = new JsonString(L"client_only");
        IJsonValue* pClient_onlyVal = null;
        pJsonObject->GetValue(pClient_onlyKey, pClient_onlyVal);
        if(pClient_onlyVal != null) {
            
            pClient_only = new Boolean(false);
            jsonToValue(pClient_only, pClient_onlyVal, L"Boolean", L"Boolean");
        }
        delete pClient_onlyKey;
        JsonString* pAttachmentKey = new JsonString(L"attachment");
        IJsonValue* pAttachmentVal = null;
        pJsonObject->GetValue(pAttachmentKey, pAttachmentVal);
        if(pAttachmentVal != null) {
            
            pAttachment = new String();
            jsonToValue(pAttachment, pAttachmentVal, L"String", L"String");
        }
        delete pAttachmentKey;
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
        JsonString* pImage_urlKey = new JsonString(L"image_url");
        IJsonValue* pImage_urlVal = null;
        pJsonObject->GetValue(pImage_urlKey, pImage_urlVal);
        if(pImage_urlVal != null) {
            
            pImage_url = new String();
            jsonToValue(pImage_url, pImage_urlVal, L"String", L"String");
        }
        delete pImage_urlKey;
        JsonString* pImg_compressedKey = new JsonString(L"img_compressed");
        IJsonValue* pImg_compressedVal = null;
        pJsonObject->GetValue(pImg_compressedKey, pImg_compressedVal);
        if(pImg_compressedVal != null) {
            
            pImg_compressed = new Boolean(false);
            jsonToValue(pImg_compressed, pImg_compressedVal, L"Boolean", L"Boolean");
        }
        delete pImg_compressedKey;
        JsonString* pImg_changedKey = new JsonString(L"img_changed");
        IJsonValue* pImg_changedVal = null;
        pJsonObject->GetValue(pImg_changedKey, pImg_changedVal);
        if(pImg_changedVal != null) {
            
            pImg_changed = new Boolean(false);
            jsonToValue(pImg_changed, pImg_changedVal, L"Boolean", L"Boolean");
        }
        delete pImg_changedKey;
        JsonString* pTopicKey = new JsonString(L"topic");
        IJsonValue* pTopicVal = null;
        pJsonObject->GetValue(pTopicKey, pTopicVal);
        if(pTopicVal != null) {
            
            pTopic = new String();
            jsonToValue(pTopic, pTopicVal, L"String", L"String");
        }
        delete pTopicKey;
        
    }
}

SamiPostInput::SamiPostInput(String* json) {
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
SamiPostInput::asJson ()
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
SamiPostInput::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pTitleKey = new JsonString(L"title");
    pJsonObject->Add(pTitleKey, toJson(getPTitle(), "String", ""));

    
    JsonString *pPost_dateKey = new JsonString(L"post_date");
    pJsonObject->Add(pPost_dateKey, toJson(getPPostDate(), "String", ""));

    
    JsonString *pBodyKey = new JsonString(L"body");
    pJsonObject->Add(pBodyKey, toJson(getPBody(), "String", ""));

    
    JsonString *pCommentKey = new JsonString(L"comment");
    pJsonObject->Add(pCommentKey, toJson(getPComment(), "String", ""));

    
    JsonString *pClient_onlyKey = new JsonString(L"client_only");
    pJsonObject->Add(pClient_onlyKey, toJson(getPClientOnly(), "Boolean", ""));

    
    JsonString *pAttachmentKey = new JsonString(L"attachment");
    pJsonObject->Add(pAttachmentKey, toJson(getPAttachment(), "String", ""));

    
    JsonString *pVideoKey = new JsonString(L"video");
    pJsonObject->Add(pVideoKey, toJson(getPVideo(), "String", ""));

    
    JsonString *pImgKey = new JsonString(L"img");
    pJsonObject->Add(pImgKey, toJson(getPImg(), "String", ""));

    
    JsonString *pImage_urlKey = new JsonString(L"image_url");
    pJsonObject->Add(pImage_urlKey, toJson(getPImageUrl(), "String", ""));

    
    JsonString *pImg_compressedKey = new JsonString(L"img_compressed");
    pJsonObject->Add(pImg_compressedKey, toJson(getPImgCompressed(), "Boolean", ""));

    
    JsonString *pImg_changedKey = new JsonString(L"img_changed");
    pJsonObject->Add(pImg_changedKey, toJson(getPImgChanged(), "Boolean", ""));

    
    JsonString *pTopicKey = new JsonString(L"topic");
    pJsonObject->Add(pTopicKey, toJson(getPTopic(), "String", ""));

    
    return pJsonObject;
}

String*
SamiPostInput::getPId() {
    return p_id;
}
void
SamiPostInput::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiPostInput::getPTitle() {
    return pTitle;
}
void
SamiPostInput::setPTitle(String* pTitle) {
    this->pTitle = pTitle;
}

String*
SamiPostInput::getPPostDate() {
    return pPost_date;
}
void
SamiPostInput::setPPostDate(String* pPost_date) {
    this->pPost_date = pPost_date;
}

String*
SamiPostInput::getPBody() {
    return pBody;
}
void
SamiPostInput::setPBody(String* pBody) {
    this->pBody = pBody;
}

String*
SamiPostInput::getPComment() {
    return pComment;
}
void
SamiPostInput::setPComment(String* pComment) {
    this->pComment = pComment;
}

Boolean*
SamiPostInput::getPClientOnly() {
    return pClient_only;
}
void
SamiPostInput::setPClientOnly(Boolean* pClient_only) {
    this->pClient_only = pClient_only;
}

String*
SamiPostInput::getPAttachment() {
    return pAttachment;
}
void
SamiPostInput::setPAttachment(String* pAttachment) {
    this->pAttachment = pAttachment;
}

String*
SamiPostInput::getPVideo() {
    return pVideo;
}
void
SamiPostInput::setPVideo(String* pVideo) {
    this->pVideo = pVideo;
}

String*
SamiPostInput::getPImg() {
    return pImg;
}
void
SamiPostInput::setPImg(String* pImg) {
    this->pImg = pImg;
}

String*
SamiPostInput::getPImageUrl() {
    return pImage_url;
}
void
SamiPostInput::setPImageUrl(String* pImage_url) {
    this->pImage_url = pImage_url;
}

Boolean*
SamiPostInput::getPImgCompressed() {
    return pImg_compressed;
}
void
SamiPostInput::setPImgCompressed(Boolean* pImg_compressed) {
    this->pImg_compressed = pImg_compressed;
}

Boolean*
SamiPostInput::getPImgChanged() {
    return pImg_changed;
}
void
SamiPostInput::setPImgChanged(Boolean* pImg_changed) {
    this->pImg_changed = pImg_changed;
}

String*
SamiPostInput::getPTopic() {
    return pTopic;
}
void
SamiPostInput::setPTopic(String* pTopic) {
    this->pTopic = pTopic;
}



} /* namespace Swagger */

