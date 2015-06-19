#import "SWGPost.h"

@implementation SWGPost
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"created_at": @"createdAt", @"updated_at": @"updatedAt", @"external_url": @"externalUrl", @"external_url_source": @"externalUrlSource", @"external_url_type": @"externalUrlType", @"image_path": @"imagePath", @"image_url": @"imageUrl", @"image_height": @"imageHeight", @"image_width": @"imageWidth", @"logo_url": @"logoUrl", @"square_logo_url": @"squareLogoUrl", @"needs_sanitize": @"needsSanitize", @"summary": @"summary", @"topic": @"topic", @"approval_status": @"approvalStatus", @"approval_transactions": @"approvalTransactions", @"group_ids": @"groupIds", @"slug": @"slug", @"article_id": @"articleId", @"comment": @"comment", @"newsletter_ids": @"newsletterIds", @"is_featured": @"isFeatured", @"advisor_id": @"advisorId", @"is_published": @"isPublished", @"is_responsive": @"isResponsive", @"is_proxy_needed": @"isProxyNeeded", @"is_mobile_proxy_needed": @"isMobileProxyNeeded", @"proxy_url": @"proxyUrl", @"video": @"video", @"pdf_attachment_url": @"pdfAttachmentUrl", @"post_date": @"postDate", @"display_date": @"displayDate", @"suitability_score": @"suitabilityScore", @"video_id": @"videoId", @"display_tag": @"displayTag", @"display_summary": @"displaySummary", @"vestorly_url": @"vestorlyUrl", @"title": @"title" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"_id", @"createdAt", @"updatedAt", @"externalUrl", @"externalUrlSource", @"externalUrlType", @"imagePath", @"imageUrl", @"imageHeight", @"imageWidth", @"logoUrl", @"squareLogoUrl", @"needsSanitize", @"summary", @"topic", @"approvalStatus", @"approvalTransactions", @"groupIds", @"slug", @"articleId", @"comment", @"newsletterIds", @"isFeatured", @"advisorId", @"isPublished", @"isResponsive", @"isProxyNeeded", @"isMobileProxyNeeded", @"proxyUrl", @"video", @"pdfAttachmentUrl", @"postDate", @"displayDate", @"suitabilityScore", @"videoId", @"displayTag", @"displaySummary", @"vestorlyUrl", @"title"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
