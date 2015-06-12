#import "SWGMemberEvent.h"

@implementation SWGMemberEvent
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"created_at": @"createdAt", @"type": @"type", @"source": @"source", @"referer": @"referer", @"original_url": @"originalUrl", @"originator_email": @"originatorEmail", @"originator_name": @"originatorName", @"parent_originator_id": @"parentOriginatorId", @"parent_event_id": @"parentEventId", @"originator_type": @"originatorType", @"originator_group_id": @"originatorGroupId", @"event_type": @"eventType", @"event_source": @"eventSource", @"content_url": @"contentUrl", @"event_date": @"eventDate", @"username": @"username", @"member_id": @"memberId", @"originator_id": @"originatorId", @"subject_id": @"subjectId" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"_id", @"createdAt", @"type", @"source", @"referer", @"originalUrl", @"originatorEmail", @"originatorName", @"parentOriginatorId", @"parentEventId", @"originatorType", @"originatorGroupId", @"eventType", @"eventSource", @"contentUrl", @"eventDate", @"username", @"memberId", @"originatorId", @"subjectId"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
