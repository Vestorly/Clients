#import "SWGSourceInput.h"

@implementation SWGSourceInput
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"name": @"name", @"url": @"url", @"logo_url": @"logo_url", @"enabled": @"enabled", @"custom_rss_feed": @"custom_rss_feed", @"rss_publisher": @"rss_publisher" }];
}

@end
