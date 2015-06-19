#import "SWGUser.h"

@implementation SWGUser
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"company": @"company", @"picture_url": @"pictureUrl", @"website": @"website", @"user_type": @"userType", @"slug": @"slug", @"name": @"name", @"username": @"username", @"first_name": @"firstName", @"last_name": @"lastName", @"new_user": @"newUser", @"show_tour": @"showTour", @"plan_setup": @"planSetup", @"plan_expired": @"planExpired", @"plan_status": @"planStatus", @"plan_id": @"planId", @"plan_stripe": @"planStripe" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"company", @"pictureUrl", @"website", @"userType", @"slug", @"name", @"username", @"firstName", @"lastName", @"newUser", @"showTour", @"planSetup", @"planExpired", @"planStatus", @"planId", @"planStripe"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
