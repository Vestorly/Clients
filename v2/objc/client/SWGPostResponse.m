#import "SWGPostresponse.h"

@implementation SWGPostresponse
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"post": @"post" }];
}

@end
