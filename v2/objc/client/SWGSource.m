#import "SWGSource.h"

@implementation SWGSource
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"name": @"name", @"url": @"url", @"logo_url": @"logoUrl", @"enabled": @"enabled", @"custom_rss_feed": @"customRssFeed", @"rss_publisher": @"rssPublisher" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"logoUrl", @"enabled", @"customRssFeed", ];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
