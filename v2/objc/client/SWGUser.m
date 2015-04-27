#import "SWGUser.h"

@implementation SWGUser
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"company": @"company", @"picture_url": @"picture_url", @"website": @"website", @"user_type": @"user_type", @"slug": @"slug", @"name": @"name", @"username": @"username", @"first_name": @"first_name", @"last_name": @"last_name", @"new_user": @"_new_user", @"show_tour": @"show_tour", @"plan_setup": @"plan_setup", @"plan_expired": @"plan_expired", @"plan_status": @"plan_status", @"plan_id": @"plan_id", @"plan_stripe": @"plan_stripe" }];
}

@end
