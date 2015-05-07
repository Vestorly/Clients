#import "SWGMemberEvent.h"

@implementation SWGMemberEvent
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"created_at": @"created_at", @"type": @"type", @"source": @"source", @"referer": @"referer", @"original_url": @"original_url", @"originator_email": @"originator_email", @"originator_name": @"originator_name", @"parent_originator_id": @"parent_originator_id", @"parent_event_id": @"parent_event_id", @"originator_type": @"originator_type", @"originator_group_id": @"originator_group_id", @"event_type": @"event_type", @"event_source": @"event_source", @"content_url": @"content_url", @"event_date": @"event_date", @"username": @"username", @"member_id": @"member_id", @"originator_id": @"originator_id", @"subject_id": @"subject_id" }];
}

@end
