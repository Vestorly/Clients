#import "SWGMemberEvents.h"

@implementation SWGMemberEvents
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"members": @"members", @"member_events": @"member_events" }];
}

@end
