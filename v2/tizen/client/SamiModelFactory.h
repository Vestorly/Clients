#ifndef ModelFactory_H_
#define ModelFactory_H_

#include "SamiObject.h"

#include "SamiAdvisor.h"
#include "SamiArticle.h"
#include "SamiArticles.h"
#include "SamiNewsLetter.h"

namespace Swagger {
  void*
  create(String type) {
    if(type.Equals(L"SamiAdvisor", true)) {
      return new SamiAdvisor();
    }
    if(type.Equals(L"SamiArticle", true)) {
      return new SamiArticle();
    }
    if(type.Equals(L"SamiArticles", true)) {
      return new SamiArticles();
    }
    if(type.Equals(L"SamiNewsLetter", true)) {
      return new SamiNewsLetter();
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
