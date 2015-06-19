#import "SWGOrgSetting.h"

@implementation SWGOrgSetting
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"is_default": @"isDefault", @"name": @"name", @"email_theme_name": @"emailThemeName", @"company_address": @"companyAddress", @"company_contact_email": @"companyContactEmail", @"site_url": @"siteUrl", @"company_homepage_url": @"companyHomepageUrl", @"privacy_policy_url": @"privacyPolicyUrl", @"terms_and_conditions_url": @"termsAndConditionsUrl" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"isDefault", @"name", @"emailThemeName", @"companyAddress", @"companyContactEmail", @"siteUrl", @"companyHomepageUrl", @"privacyPolicyUrl", @"termsAndConditionsUrl"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
