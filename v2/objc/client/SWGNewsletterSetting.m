#import "SWGNewsletterSetting.h"

@implementation SWGNewsletterSetting
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"email_day_of_week": @"email_day_of_week", @"email_hour": @"email_hour", @"email_status": @"email_status", @"facebook_active_wall": @"facebook_active_wall", @"facebook_day_of_week": @"facebook_day_of_week", @"facebook_hour": @"facebook_hour", @"facebook_status": @"facebook_status", @"linkedin_active_wall": @"linkedin_active_wall", @"linkedin_day_of_week": @"linkedin_day_of_week", @"linkedin_hour": @"linkedin_hour", @"linkedin_status": @"linkedin_status", @"social_title": @"social_title", @"social_subtitle": @"social_subtitle", @"social_description": @"social_description", @"twitter_day_of_week": @"twitter_day_of_week", @"twitter_hour": @"twitter_hour", @"twitter_status": @"twitter_status", @"social_posting_text": @"social_posting_text", @"newsletter_type": @"_newsletter_type", @"group_id": @"group_id", @"montage_enabled": @"montage_enabled", @"montage_title": @"montage_title", @"montage_facebook_image_url": @"montage_facebook_image_url", @"montage_linkedin_image_url": @"montage_linkedin_image_url", @"montage_twitter_image_url": @"montage_twitter_image_url", @"newsletter_ids": @"_newsletter_ids", @"primary_email_font": @"primary_email_font", @"footer_email_font": @"footer_email_font", @"email_accent_color": @"email_accent_color", @"render_version": @"render_version", @"header_image_url": @"header_image_url", @"header_background_color": @"header_background_color", @"banner_color": @"banner_color", @"title_color": @"title_color", @"footer_html": @"footer_html", @"intro_text": @"intro_text", @"footer_image_url": @"footer_image_url", @"subject": @"subject", @"salutation_text": @"salutation_text", @"body_html": @"body_html" }];
}

@end
