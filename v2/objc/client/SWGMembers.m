#import "SWGMembers.h"

@implementation SWGMembers
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"articles": @"articles" }];
}

@end
