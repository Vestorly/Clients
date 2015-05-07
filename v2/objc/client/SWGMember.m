#import "SWGMember.h"

@implementation SWGMember
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"email": @"email", @"first_name": @"first_name", @"last_name": @"last_name", @"phone": @"phone", @"address": @"address", @"city": @"city", @"state": @"state", @"zip": @"zip", @"gender": @"gender", @"interest_consultation": @"interest_consultation", @"interest_in_new_advisor": @"interest_in_new_advisor", @"assets": @"assets", @"age": @"age", @"data_estimated": @"data_estimated", @"education": @"education", @"high_net_worth": @"high_net_worth", @"home_market_value": @"home_market_value", @"home_owner_status": @"home_owner_status", @"household_income": @"household_income", @"marital_status": @"marital_status", @"occupation": @"occupation", @"hometown": @"hometown", @"family": @"family", @"tags": @"tags", @"subscribed_group_ids": @"subscribed_group_ids", @"unsubscribed": @"unsubscribed", @"unsubscribed_date": @"unsubscribed_date", @"user_type": @"user_type", @"signed_up_with": @"signed_up_with", @"message": @"message", @"location": @"location", @"picture_url": @"picture_url", @"profile_url": @"profile_url", @"estimated_location": @"estimated_location", @"estimated_zip": @"estimated_zip", @"register_ip_addr": @"register_ip_addr", @"genuine_email": @"genuine_email", @"last_active_date": @"last_active_date", @"is_client": @"is_client", @"is_hidden": @"is_hidden", @"invited_on": @"invited_on", @"invited_by": @"invited_by", @"portfolio_size": @"portfolio_size" }];
}

@end
