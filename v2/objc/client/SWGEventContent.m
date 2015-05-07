#import "SWGEventContent.h"

@implementation SWGEventContent
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"content_field": @"content_field", @"content_id": @"content_id", @"content_type": @"content_type", @"created_at": @"created_at", @"slug": @"slug", @"updated_at": @"updated_at" }];
}

@end
