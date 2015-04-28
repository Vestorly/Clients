#import "SWGEventresponse.h"

@implementation SWGEventresponse
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"event": @"event" }];
}

@end
