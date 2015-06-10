#import "SWGNewsletterInput.h"

@implementation SWGNewsletterInput
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"is_sent": @"isSent", @"is_default": @"isDefault", @"click_count": @"clickCount", @"unique_click_count": @"uniqueClickCount", @"total_click_count": @"totalClickCount" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"isSent", @"isDefault", @"clickCount", @"uniqueClickCount", @"totalClickCount"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
