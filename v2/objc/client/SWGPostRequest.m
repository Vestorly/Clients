#import "SWGPostrequest.h"

@implementation SWGPostrequest
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"post": @"post" }];
}

@end
