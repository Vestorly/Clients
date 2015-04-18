
#include "SamiGroup.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiGroup::SamiGroup() {
    init();
}

SamiGroup::~SamiGroup() {
    this->cleanup();
}

void
SamiGroup::init() {
    p_id = null;
    pName = null;
    pIs_default = null;
    pIs_hidden = null;
    pNew_weekly_mailer_content = null;
    pNewsletter_subject = null;
    pAutopublish = null;
    pNumber_articles_per_group = null;
    pNumber_articles_per_newsletter = null;
    
}

void
SamiGroup::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pIs_default != null) {
        
        delete pIs_default;
        pIs_default = null;
    }
    if(pIs_hidden != null) {
        
        delete pIs_hidden;
        pIs_hidden = null;
    }
    if(pNew_weekly_mailer_content != null) {
        
        delete pNew_weekly_mailer_content;
        pNew_weekly_mailer_content = null;
    }
    if(pNewsletter_subject != null) {
        
        delete pNewsletter_subject;
        pNewsletter_subject = null;
    }
    if(pAutopublish != null) {
        
        delete pAutopublish;
        pAutopublish = null;
    }
    if(pNumber_articles_per_group != null) {
        
        delete pNumber_articles_per_group;
        pNumber_articles_per_group = null;
    }
    if(pNumber_articles_per_newsletter != null) {
        
        delete pNumber_articles_per_newsletter;
        pNumber_articles_per_newsletter = null;
    }
    
}


SamiGroup*
SamiGroup::fromJson(String* json) {
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
SamiGroup::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pIs_defaultKey = new JsonString(L"is_default");
        IJsonValue* pIs_defaultVal = null;
        pJsonObject->GetValue(pIs_defaultKey, pIs_defaultVal);
        if(pIs_defaultVal != null) {
            
            pIs_default = new Boolean(false);
            jsonToValue(pIs_default, pIs_defaultVal, L"Boolean", L"Boolean");
        }
        delete pIs_defaultKey;
        JsonString* pIs_hiddenKey = new JsonString(L"is_hidden");
        IJsonValue* pIs_hiddenVal = null;
        pJsonObject->GetValue(pIs_hiddenKey, pIs_hiddenVal);
        if(pIs_hiddenVal != null) {
            
            pIs_hidden = new Boolean(false);
            jsonToValue(pIs_hidden, pIs_hiddenVal, L"Boolean", L"Boolean");
        }
        delete pIs_hiddenKey;
        JsonString* pNew_weekly_mailer_contentKey = new JsonString(L"new_weekly_mailer_content");
        IJsonValue* pNew_weekly_mailer_contentVal = null;
        pJsonObject->GetValue(pNew_weekly_mailer_contentKey, pNew_weekly_mailer_contentVal);
        if(pNew_weekly_mailer_contentVal != null) {
            
            pNew_weekly_mailer_content = new String();
            jsonToValue(pNew_weekly_mailer_content, pNew_weekly_mailer_contentVal, L"String", L"String");
        }
        delete pNew_weekly_mailer_contentKey;
        JsonString* pNewsletter_subjectKey = new JsonString(L"newsletter_subject");
        IJsonValue* pNewsletter_subjectVal = null;
        pJsonObject->GetValue(pNewsletter_subjectKey, pNewsletter_subjectVal);
        if(pNewsletter_subjectVal != null) {
            
            pNewsletter_subject = new String();
            jsonToValue(pNewsletter_subject, pNewsletter_subjectVal, L"String", L"String");
        }
        delete pNewsletter_subjectKey;
        JsonString* pAutopublishKey = new JsonString(L"autopublish");
        IJsonValue* pAutopublishVal = null;
        pJsonObject->GetValue(pAutopublishKey, pAutopublishVal);
        if(pAutopublishVal != null) {
            
            pAutopublish = new Boolean(false);
            jsonToValue(pAutopublish, pAutopublishVal, L"Boolean", L"Boolean");
        }
        delete pAutopublishKey;
        JsonString* pNumber_articles_per_groupKey = new JsonString(L"number_articles_per_group");
        IJsonValue* pNumber_articles_per_groupVal = null;
        pJsonObject->GetValue(pNumber_articles_per_groupKey, pNumber_articles_per_groupVal);
        if(pNumber_articles_per_groupVal != null) {
            
            pNumber_articles_per_group = new Integer();
            jsonToValue(pNumber_articles_per_group, pNumber_articles_per_groupVal, L"Integer", L"Integer");
        }
        delete pNumber_articles_per_groupKey;
        JsonString* pNumber_articles_per_newsletterKey = new JsonString(L"number_articles_per_newsletter");
        IJsonValue* pNumber_articles_per_newsletterVal = null;
        pJsonObject->GetValue(pNumber_articles_per_newsletterKey, pNumber_articles_per_newsletterVal);
        if(pNumber_articles_per_newsletterVal != null) {
            
            pNumber_articles_per_newsletter = new Integer();
            jsonToValue(pNumber_articles_per_newsletter, pNumber_articles_per_newsletterVal, L"Integer", L"Integer");
        }
        delete pNumber_articles_per_newsletterKey;
        
    }
}

SamiGroup::SamiGroup(String* json) {
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
SamiGroup::asJson ()
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
SamiGroup::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pIs_defaultKey = new JsonString(L"is_default");
    pJsonObject->Add(pIs_defaultKey, toJson(getPIsDefault(), "Boolean", ""));

    
    JsonString *pIs_hiddenKey = new JsonString(L"is_hidden");
    pJsonObject->Add(pIs_hiddenKey, toJson(getPIsHidden(), "Boolean", ""));

    
    JsonString *pNew_weekly_mailer_contentKey = new JsonString(L"new_weekly_mailer_content");
    pJsonObject->Add(pNew_weekly_mailer_contentKey, toJson(getPNewWeeklyMailerContent(), "String", ""));

    
    JsonString *pNewsletter_subjectKey = new JsonString(L"newsletter_subject");
    pJsonObject->Add(pNewsletter_subjectKey, toJson(getPNewsletterSubject(), "String", ""));

    
    JsonString *pAutopublishKey = new JsonString(L"autopublish");
    pJsonObject->Add(pAutopublishKey, toJson(getPAutopublish(), "Boolean", ""));

    
    JsonString *pNumber_articles_per_groupKey = new JsonString(L"number_articles_per_group");
    pJsonObject->Add(pNumber_articles_per_groupKey, toJson(getPNumberArticlesPerGroup(), "Integer", ""));

    
    JsonString *pNumber_articles_per_newsletterKey = new JsonString(L"number_articles_per_newsletter");
    pJsonObject->Add(pNumber_articles_per_newsletterKey, toJson(getPNumberArticlesPerNewsletter(), "Integer", ""));

    
    return pJsonObject;
}

String*
SamiGroup::getPId() {
    return p_id;
}
void
SamiGroup::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiGroup::getPName() {
    return pName;
}
void
SamiGroup::setPName(String* pName) {
    this->pName = pName;
}

Boolean*
SamiGroup::getPIsDefault() {
    return pIs_default;
}
void
SamiGroup::setPIsDefault(Boolean* pIs_default) {
    this->pIs_default = pIs_default;
}

Boolean*
SamiGroup::getPIsHidden() {
    return pIs_hidden;
}
void
SamiGroup::setPIsHidden(Boolean* pIs_hidden) {
    this->pIs_hidden = pIs_hidden;
}

String*
SamiGroup::getPNewWeeklyMailerContent() {
    return pNew_weekly_mailer_content;
}
void
SamiGroup::setPNewWeeklyMailerContent(String* pNew_weekly_mailer_content) {
    this->pNew_weekly_mailer_content = pNew_weekly_mailer_content;
}

String*
SamiGroup::getPNewsletterSubject() {
    return pNewsletter_subject;
}
void
SamiGroup::setPNewsletterSubject(String* pNewsletter_subject) {
    this->pNewsletter_subject = pNewsletter_subject;
}

Boolean*
SamiGroup::getPAutopublish() {
    return pAutopublish;
}
void
SamiGroup::setPAutopublish(Boolean* pAutopublish) {
    this->pAutopublish = pAutopublish;
}

Integer*
SamiGroup::getPNumberArticlesPerGroup() {
    return pNumber_articles_per_group;
}
void
SamiGroup::setPNumberArticlesPerGroup(Integer* pNumber_articles_per_group) {
    this->pNumber_articles_per_group = pNumber_articles_per_group;
}

Integer*
SamiGroup::getPNumberArticlesPerNewsletter() {
    return pNumber_articles_per_newsletter;
}
void
SamiGroup::setPNumberArticlesPerNewsletter(Integer* pNumber_articles_per_newsletter) {
    this->pNumber_articles_per_newsletter = pNumber_articles_per_newsletter;
}



} /* namespace Swagger */

