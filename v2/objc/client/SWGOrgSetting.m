#import "SWGOrgSetting.h"

@implementation SWGOrgSetting
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"is_default": @"is_default", @"name": @"name", @"email_theme_name": @"email_theme_name", @"company_address": @"company_address", @"company_contact_email": @"company_contact_email", @"site_url": @"site_url", @"company_homepage_url": @"company_homepage_url", @"privacy_policy_url": @"privacy_policy_url", @"terms_and_conditions_url": @"terms_and_conditions_url" }];
}

@end
