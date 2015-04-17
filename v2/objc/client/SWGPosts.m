#import "SWGPosts.h"

@implementation SWGPosts
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"posts": @"posts" }];
}

@end
