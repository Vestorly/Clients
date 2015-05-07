#import "SWGMembers.h"

@implementation SWGMembers
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"members": @"members", @"more_results": @"more_results", @"meta": @"meta" }];
}

@end
