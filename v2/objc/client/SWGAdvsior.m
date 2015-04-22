#import "SWGAdvsior.h"

@implementation SWGAdvsior
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"vestorly-auth": @"vestorlyauth", @"new_user": @"_new_user" }];
}

@end
