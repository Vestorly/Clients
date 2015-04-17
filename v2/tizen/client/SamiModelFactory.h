#ifndef ModelFactory_H_
#define ModelFactory_H_

#include "SamiObject.h"

#include "SamiSource.h"
#include "SamiSourceInput.h"
#include "SamiSources.h"
#include "SamiAdvisor.h"
#include "SamiArticle.h"
#include "SamiArticles.h"
#include "SamiNewsletter.h"
#include "SamiNewsletterInput.h"
#include "SamiNewsletters.h"
#include "SamiPosts.h"
#include "SamiPost.h"
#include "SamiEventInput.h"
#include "SamiEvent.h"
#include "SamiEvents.h"

namespace Swagger {
  void*
  create(String type) {
    if(type.Equals(L"SamiSource", true)) {
      return new SamiSource();
    }
    if(type.Equals(L"SamiSourceInput", true)) {
      return new SamiSourceInput();
    }
    if(type.Equals(L"SamiSources", true)) {
      return new SamiSources();
    }
    if(type.Equals(L"SamiAdvisor", true)) {
      return new SamiAdvisor();
    }
    if(type.Equals(L"SamiArticle", true)) {
      return new SamiArticle();
    }
    if(type.Equals(L"SamiArticles", true)) {
      return new SamiArticles();
    }
    if(type.Equals(L"SamiNewsletter", true)) {
      return new SamiNewsletter();
    }
    if(type.Equals(L"SamiNewsletterInput", true)) {
      return new SamiNewsletterInput();
    }
    if(type.Equals(L"SamiNewsletters", true)) {
      return new SamiNewsletters();
    }
    if(type.Equals(L"SamiPosts", true)) {
      return new SamiPosts();
    }
    if(type.Equals(L"SamiPost", true)) {
      return new SamiPost();
    }
    if(type.Equals(L"SamiEventInput", true)) {
      return new SamiEventInput();
    }
    if(type.Equals(L"SamiEvent", true)) {
      return new SamiEvent();
    }
    if(type.Equals(L"SamiEvents", true)) {
      return new SamiEvents();
    }
    
    if(type.Equals(L"String", true)) {
      return new String();
    }
    if(type.Equals(L"Integer", true)) {
      return new Integer();
    }
    if(type.Equals(L"Long", true)) {
      return new Long();
    }
    if(type.Equals(L"DateTime", true)) {
      return new DateTime();
    }
    return null;
  }
} /* namespace Swagger */

#endif /* ModelFactory_H_ */
