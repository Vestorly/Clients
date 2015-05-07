#import "SWGMemberReport.h"

@implementation SWGMemberReport
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"day": @"day", @"event_count": @"event_count", @"originator_group_id": @"originator_group_id", @"parent_originator_id": @"parent_originator_id", @"source": @"source", @"type": @"type", @"year": @"year" }];
}

@end
