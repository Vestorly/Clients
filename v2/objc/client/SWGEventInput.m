#import "SWGEventInput.h"

@implementation SWGEventInput
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"type": @"type", @"referer": @"referer", @"original_url": @"original_url", @"originator_email": @"originator_email", @"subject_email": @"subject_email", @"parent_event_id": @"parent_event_id", @"originator_id": @"originator_id", @"advisor_id": @"advisor_id", @"subject_id": @"subject_id", @"event_content": @"event_content", @"created_at": @"created_at" }];
}

@end
