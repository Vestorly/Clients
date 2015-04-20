#import "SWGMembers.h"

@implementation SWGMembers
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"members": @"members" }];
}

@end
