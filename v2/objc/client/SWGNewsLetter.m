#import "SWGNewsletter.h"

@implementation SWGNewsletter
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"is_sent": @"is_sent", @"is_default": @"is_default", @"click_count": @"click_count", @"unique_click_count": @"unique_click_count", @"total_click_count": @"total_click_count" }];
}

@end
