#import "SWGPost.h"

@implementation SWGPost
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"client_only": @"client_only", @"img_compressed": @"img_compressed", @"img_changed": @"img_changed" }];
}

@end
