#import "SWGMembers.h"

@implementation SWGMembers
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"posts": @"posts", @"more_results": @"more_results" }];
}

@end
