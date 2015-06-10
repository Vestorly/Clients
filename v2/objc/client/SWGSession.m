#import "SWGSession.h"

@implementation SWGSession
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"vestorly-auth": @"vestorlyAuth", @"new_user": @"newUser", @"current_user": @"currentUser", @"settings": @"settings" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"_id", @"vestorlyAuth", @"newUser", @"currentUser", @"settings"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
