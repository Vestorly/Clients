#ifndef ModelFactory_H_
#define ModelFactory_H_

#include "SamiObject.h"

#include "SamiAdvisor.h"
#include "SamiAdvisors.h"
#include "SamiPostresponse.h"
#include "SamiPostRequest.h"
#include "SamiPosts.h"
#include "SamiPost.h"
#include "SamiPostInput.h"
#include "SamiSession.h"
#include "SamiSettings.h"
#include "SamiOrgSetting.h"
#include "SamiFeatures.h"
#include "SamiPersonalSettings.h"
#include "SamiUser.h"
#include "SamiArticle.h"
#include "SamiArticleresponse.h"
#include "SamiArticles.h"
#include "SamiNewsletterresponse.h"
#include "SamiNewsletter.h"
#include "SamiNewsletterInput.h"
#include "SamiNewsletters.h"
#include "SamiMemberresponse.h"
#include "SamiMembers.h"
#include "SamiMember.h"
#include "SamiEventresponse.h"
#include "SamiEventInput.h"
#include "SamiEvents.h"
#include "SamiEvent.h"
#include "SamiGroup.h"
#include "SamiGroupInput.h"
#include "SamiGroups.h"
#include "SamiNewslettersettingresponse.h"
#include "SamiNewslettersettings.h"
#include "SamiNewsletterSettingsInput.h"
#include "SamiNewsletterSetting.h"
#include "SamiSource.h"
#include "SamiSourceInput.h"
#include "SamiSources.h"

namespace Swagger {
  void*
  create(String type) {
    if(type.Equals(L"SamiAdvisor", true)) {
      return new SamiAdvisor();
    }
    if(type.Equals(L"SamiAdvisors", true)) {
      return new SamiAdvisors();
    }
    if(type.Equals(L"SamiPostresponse", true)) {
      return new SamiPostresponse();
    }
    if(type.Equals(L"SamiPostRequest", true)) {
      return new SamiPostRequest();
    }
    if(type.Equals(L"SamiPosts", true)) {
      return new SamiPosts();
    }
    if(type.Equals(L"SamiPost", true)) {
      return new SamiPost();
    }
    if(type.Equals(L"SamiPostInput", true)) {
      return new SamiPostInput();
    }
    if(type.Equals(L"SamiSession", true)) {
      return new SamiSession();
    }
    if(type.Equals(L"SamiSettings", true)) {
      return new SamiSettings();
    }
    if(type.Equals(L"SamiOrgSetting", true)) {
      return new SamiOrgSetting();
    }
    if(type.Equals(L"SamiFeatures", true)) {
      return new SamiFeatures();
    }
    if(type.Equals(L"SamiPersonalSettings", true)) {
      return new SamiPersonalSettings();
    }
    if(type.Equals(L"SamiUser", true)) {
      return new SamiUser();
    }
    if(type.Equals(L"SamiArticle", true)) {
      return new SamiArticle();
    }
    if(type.Equals(L"SamiArticleresponse", true)) {
      return new SamiArticleresponse();
    }
    if(type.Equals(L"SamiArticles", true)) {
      return new SamiArticles();
    }
    if(type.Equals(L"SamiNewsletterresponse", true)) {
      return new SamiNewsletterresponse();
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
    if(type.Equals(L"SamiMemberresponse", true)) {
      return new SamiMemberresponse();
    }
    if(type.Equals(L"SamiMembers", true)) {
      return new SamiMembers();
    }
    if(type.Equals(L"SamiMember", true)) {
      return new SamiMember();
    }
    if(type.Equals(L"SamiEventresponse", true)) {
      return new SamiEventresponse();
    }
    if(type.Equals(L"SamiEventInput", true)) {
      return new SamiEventInput();
    }
    if(type.Equals(L"SamiEvents", true)) {
      return new SamiEvents();
    }
    if(type.Equals(L"SamiEvent", true)) {
      return new SamiEvent();
    }
    if(type.Equals(L"SamiGroup", true)) {
      return new SamiGroup();
    }
    if(type.Equals(L"SamiGroupInput", true)) {
      return new SamiGroupInput();
    }
    if(type.Equals(L"SamiGroups", true)) {
      return new SamiGroups();
    }
    if(type.Equals(L"SamiNewslettersettingresponse", true)) {
      return new SamiNewslettersettingresponse();
    }
    if(type.Equals(L"SamiNewslettersettings", true)) {
      return new SamiNewslettersettings();
    }
    if(type.Equals(L"SamiNewsletterSettingsInput", true)) {
      return new SamiNewsletterSettingsInput();
    }
    if(type.Equals(L"SamiNewsletterSetting", true)) {
      return new SamiNewsletterSetting();
    }
    if(type.Equals(L"SamiSource", true)) {
      return new SamiSource();
    }
    if(type.Equals(L"SamiSourceInput", true)) {
      return new SamiSourceInput();
    }
    if(type.Equals(L"SamiSources", true)) {
      return new SamiSources();
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
