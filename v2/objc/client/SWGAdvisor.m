#import "SWGAdvisor.h"

@implementation SWGAdvisor
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"company": @"company", @"address": @"address", @"city": @"city", @"state": @"state", @"zip": @"zip", @"first_name": @"firstName", @"last_name": @"lastName", @"reg_number": @"regNumber", @"account_type": @"accountType", @"advisor_employees": @"advisorEmployees", @"other_services_types": @"otherServicesTypes", @"other_compensation": @"otherCompensation", @"performance_audited": @"performanceAudited", @"about": @"about", @"twitter_handle": @"twitterHandle", @"profile_picture": @"profilePicture", @"logo": @"logo", @"linkedin": @"linkedin", @"website": @"website", @"adv_brochure": @"advBrochure", @"plan": @"plan", @"consultation_reminder": @"consultationReminder", @"referral_reminder": @"referralReminder", @"weekly_email_blast": @"weeklyEmailBlast", @"disclosure": @"disclosure", @"external_options": @"externalOptions", @"email_report_blast": @"emailReportBlast", @"email_blast": @"emailBlast", @"twitter_blast": @"twitterBlast", @"linkedin_blast": @"linkedinBlast", @"facebook_blast": @"facebookBlast", @"compliance_bcc_email_address": @"complianceBccEmailAddress", @"dashboard_url": @"dashboardUrl", @"api_key": @"apiKey", @"id": @"_id", @"name": @"name", @"tag": @"tag" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"company", @"address", @"city", @"state", @"zip", @"firstName", @"lastName", @"regNumber", @"accountType", @"advisorEmployees", @"otherServicesTypes", @"otherCompensation", @"performanceAudited", @"about", @"twitterHandle", @"profilePicture", @"logo", @"linkedin", @"website", @"advBrochure", @"plan", @"consultationReminder", @"referralReminder", @"weeklyEmailBlast", @"disclosure", @"externalOptions", @"emailReportBlast", @"emailBlast", @"twitterBlast", @"linkedinBlast", @"facebookBlast", @"complianceBccEmailAddress", @"dashboardUrl", @"apiKey", @"tag"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
