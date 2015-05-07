#import "SWGArticle.h"

@implementation SWGArticle
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"created_at": @"created_at", @"title": @"title", @"body": @"body", @"is_responsive": @"is_responsive", @"is_proxy_needed": @"is_proxy_needed", @"is_mobile_proxy_needed": @"is_mobile_proxy_needed", @"needs_sanitize": @"needs_sanitize", @"proxy_url": @"proxy_url", @"topic": @"topic", @"suitability_score": @"suitability_score", @"summary": @"summary", @"image_path": @"image_path", @"image_url": @"image_url", @"image_height": @"image_height", @"image_width": @"image_width", @"logo_url": @"logo_url", @"square_logo_url": @"square_logo_url", @"url": @"url", @"external_url": @"external_url", @"external_url_source": @"external_url_source", @"external_url_type": @"external_url_type" }];
}

@end
