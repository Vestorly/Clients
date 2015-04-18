#import "SWGGroups.h"

@implementation SWGGroups
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"groups": @"groups" }];
}

@end
