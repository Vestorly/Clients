#import "SWGMember.h"

@implementation SWGMember
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"email": @"email", @"first_name": @"first_name", @"last_name": @"last_name", @"phone": @"phone", @"address": @"address", @"city": @"city", @"state": @"state", @"zip": @"zip", @"gender": @"gender", @"age": @"age", @"education": @"education", @"high_net_worth": @"high_net_worth", @"home_market_value": @"home_market_value", @"home_owner_status": @"home_owner_status", @"household_income": @"household_income", @"marital_status": @"marital_status", @"occupation": @"occupation", @"hometown": @"hometown", @"family": @"family", @"tags": @"tags", @"message": @"message", @"location": @"location", @"picture_url": @"picture_url", @"profile_url": @"profile_url", @"estimated_location": @"estimated_location", @"estimated_zip": @"estimated_zip", @"register_ip_addr": @"register_ip_addr", @"data_estimated": @"data_estimated", @"genuine_email": @"genuine_email" }];
}

@end
