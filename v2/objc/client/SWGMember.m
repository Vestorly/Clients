#import "SWGMember.h"

@implementation SWGMember
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"email": @"email", @"first_name": @"firstName", @"last_name": @"lastName", @"phone": @"phone", @"address": @"address", @"city": @"city", @"state": @"state", @"zip": @"zip", @"gender": @"gender", @"interest_consultation": @"interestConsultation", @"interest_in_new_advisor": @"interestInNewAdvisor", @"assets": @"assets", @"age": @"age", @"data_estimated": @"dataEstimated", @"education": @"education", @"high_net_worth": @"highNetWorth", @"home_market_value": @"homeMarketValue", @"home_owner_status": @"homeOwnerStatus", @"household_income": @"householdIncome", @"marital_status": @"maritalStatus", @"occupation": @"occupation", @"hometown": @"hometown", @"family": @"family", @"tags": @"tags", @"subscribed_group_ids": @"subscribedGroupIds", @"unsubscribed": @"unsubscribed", @"unsubscribed_date": @"unsubscribedDate", @"user_type": @"userType", @"signed_up_with": @"signedUpWith", @"message": @"message", @"location": @"location", @"picture_url": @"pictureUrl", @"profile_url": @"profileUrl", @"estimated_location": @"estimatedLocation", @"estimated_zip": @"estimatedZip", @"register_ip_addr": @"registerIpAddr", @"genuine_email": @"genuineEmail", @"last_active_date": @"lastActiveDate", @"is_client": @"isClient", @"is_hidden": @"isHidden", @"invited_on": @"invitedOn", @"invited_by": @"invitedBy", @"portfolio_size": @"portfolioSize" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"firstName", @"lastName", @"phone", @"address", @"city", @"state", @"zip", @"gender", @"interestConsultation", @"interestInNewAdvisor", @"assets", @"age", @"dataEstimated", @"education", @"highNetWorth", @"homeMarketValue", @"homeOwnerStatus", @"householdIncome", @"maritalStatus", @"occupation", @"hometown", @"family", @"tags", @"subscribedGroupIds", @"unsubscribed", @"unsubscribedDate", @"userType", @"signedUpWith", @"message", @"location", @"pictureUrl", @"profileUrl", @"estimatedLocation", @"estimatedZip", @"registerIpAddr", @"genuineEmail", @"lastActiveDate", @"isClient", @"isHidden", @"invitedOn", @"invitedBy", @"portfolioSize"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
