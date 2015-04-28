#import "SWGArticleresponse.h"

@implementation SWGArticleresponse
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"article": @"article" }];
}

@end
