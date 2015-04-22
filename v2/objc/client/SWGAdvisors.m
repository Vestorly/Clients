#import "SWGAdvisors.h"

@implementation SWGAdvisors
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"advisors": @"advisors" }];
}

@end
