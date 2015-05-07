#import "SWGPostInput.h"

@implementation SWGPostInput
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"created_at": @"created_at", @"updated_at": @"updated_at", @"external_url": @"external_url", @"external_url_source": @"external_url_source", @"external_url_type": @"external_url_type", @"image_path": @"image_path", @"image_url": @"image_url", @"image_height": @"image_height", @"image_width": @"image_width", @"logo_url": @"logo_url", @"square_logo_url": @"square_logo_url", @"needs_sanitize": @"needs_sanitize", @"summary": @"summary", @"topic": @"topic", @"approval_status": @"approval_status", @"approval_transactions": @"approval_transactions", @"group_ids": @"group_ids", @"slug": @"slug", @"article_id": @"article_id", @"comment": @"comment", @"newsletter_ids": @"_newsletter_ids", @"is_featured": @"is_featured", @"advisor_id": @"advisor_id", @"is_published": @"is_published", @"is_responsive": @"is_responsive", @"is_proxy_needed": @"is_proxy_needed", @"is_mobile_proxy_needed": @"is_mobile_proxy_needed", @"proxy_url": @"proxy_url", @"video": @"video", @"pdf_attachment_url": @"pdf_attachment_url", @"post_date": @"post_date", @"display_date": @"display_date", @"suitability_score": @"suitability_score", @"video_id": @"video_id", @"display_tag": @"display_tag", @"display_summary": @"display_summary", @"vestorly_url": @"vestorly_url" }];
}

@end
