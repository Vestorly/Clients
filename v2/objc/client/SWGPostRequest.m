#import "SWGPostRequest.h"

@implementation SWGPostRequest
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"post": @"post" }];
}

@end
