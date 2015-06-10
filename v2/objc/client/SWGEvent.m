#import "SWGEvent.h"

@implementation SWGEvent
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"type": @"type", @"referer": @"referer", @"original_url": @"originalUrl", @"originator_email": @"originatorEmail", @"subject_email": @"subjectEmail", @"parent_event_id": @"parentEventId", @"originator_id": @"originatorId", @"advisor_id": @"advisorId", @"subject_id": @"subjectId", @"event_content": @"eventContent", @"created_at": @"createdAt" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"referer", @"originatorEmail", @"parentEventId", @"originatorId", @"advisorId", @"subjectId", @"eventContent", @"createdAt"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
