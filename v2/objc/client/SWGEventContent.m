#import "SWGEventContent.h"

@implementation SWGEventContent
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"content_field": @"contentField", @"content_id": @"contentId", @"content_type": @"contentType", @"created_at": @"createdAt", @"slug": @"slug", @"updated_at": @"updatedAt" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"_id", @"contentField", @"contentId", @"contentType", @"createdAt", @"slug", @"updatedAt"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
