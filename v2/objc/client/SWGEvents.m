#import "SWGEvents.h"

@implementation SWGEvents
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"events": @"events" }];
}

@end
