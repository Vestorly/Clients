#import "SWGSession.h"

@implementation SWGSession
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"vestorly-auth": @"vestorlyauth", @"new_user": @"_new_user", @"current_user": @"current_user", @"settings": @"settings" }];
}

@end
