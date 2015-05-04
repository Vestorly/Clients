#import "SWGEvent.h"

@implementation SWGEvent
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"referer": @"referer", @"original_url": @"original_url", @"originator_email": @"originator_email", @"subject_email": @"subject_email", @"advisor_email": @"advisor_email", @"originator_group_name": @"originator_group_name", @"newsletter": @"_newsletter" }];
}

@end
