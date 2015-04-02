#ifndef ModelFactory_H_
#define ModelFactory_H_

#include "SamiObject.h"

#include "SamiRSSFeed.h"
#include "SamiPost.h"
#include "SamiArticle.h"
#include "SamiEvent.h"
#include "SamiAdvisor.h"
#include "SamiSource.h"

namespace Swagger {
  void*
  create(String type) {
    if(type.Equals(L"SamiRSSFeed", true)) {
      return new SamiRSSFeed();
    }
    if(type.Equals(L"SamiPost", true)) {
      return new SamiPost();
    }
    if(type.Equals(L"SamiArticle", true)) {
      return new SamiArticle();
    }
    if(type.Equals(L"SamiEvent", true)) {
      return new SamiEvent();
    }
    if(type.Equals(L"SamiAdvisor", true)) {
      return new SamiAdvisor();
    }
    if(type.Equals(L"SamiSource", true)) {
      return new SamiSource();
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
