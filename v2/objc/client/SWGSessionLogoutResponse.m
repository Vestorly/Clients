#import "SWGSessionLogoutResponse.h"

@implementation SWGSessionLogoutResponse
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"message": @"message" }];
}

@end
