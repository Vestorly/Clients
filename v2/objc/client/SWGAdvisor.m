#import "SWGAdvisor.h"

@implementation SWGAdvisor
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"new_user": @"_new_user" }];
}

@end
