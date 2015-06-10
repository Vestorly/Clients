#import "SWGArticle.h"

@implementation SWGArticle
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"created_at": @"createdAt", @"title": @"title", @"body": @"body", @"is_responsive": @"isResponsive", @"is_proxy_needed": @"isProxyNeeded", @"is_mobile_proxy_needed": @"isMobileProxyNeeded", @"needs_sanitize": @"needsSanitize", @"proxy_url": @"proxyUrl", @"topic": @"topic", @"suitability_score": @"suitabilityScore", @"summary": @"summary", @"image_path": @"imagePath", @"image_url": @"imageUrl", @"image_height": @"imageHeight", @"image_width": @"imageWidth", @"logo_url": @"logoUrl", @"square_logo_url": @"squareLogoUrl", @"url": @"url", @"external_url": @"externalUrl", @"external_url_source": @"externalUrlSource", @"external_url_type": @"externalUrlType" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"createdAt", @"body", @"isResponsive", @"isProxyNeeded", @"isMobileProxyNeeded", @"needsSanitize", @"proxyUrl", @"topic", @"suitabilityScore", @"summary", @"imagePath", @"imageUrl", @"imageHeight", @"imageWidth", @"logoUrl", @"squareLogoUrl", @"url", @"externalUrl", @"externalUrlSource", @"externalUrlType"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
