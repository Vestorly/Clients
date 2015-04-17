#import "SWGArticles.h"

@implementation SWGArticles
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"articles": @"articles" }];
}

@end
