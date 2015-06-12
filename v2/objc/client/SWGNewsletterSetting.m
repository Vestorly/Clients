#import "SWGNewsletterSetting.h"

@implementation SWGNewsletterSetting
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"email_day_of_week": @"emailDayOfWeek", @"email_hour": @"emailHour", @"email_status": @"emailStatus", @"facebook_active_wall": @"facebookActiveWall", @"facebook_day_of_week": @"facebookDayOfWeek", @"facebook_hour": @"facebookHour", @"facebook_status": @"facebookStatus", @"linkedin_active_wall": @"linkedinActiveWall", @"linkedin_day_of_week": @"linkedinDayOfWeek", @"linkedin_hour": @"linkedinHour", @"linkedin_status": @"linkedinStatus", @"social_title": @"socialTitle", @"social_subtitle": @"socialSubtitle", @"social_description": @"socialDescription", @"twitter_day_of_week": @"twitterDayOfWeek", @"twitter_hour": @"twitterHour", @"twitter_status": @"twitterStatus", @"social_posting_text": @"socialPostingText", @"newsletter_type": @"newsletterType", @"group_id": @"groupId", @"montage_enabled": @"montageEnabled", @"montage_title": @"montageTitle", @"montage_facebook_image_url": @"montageFacebookImageUrl", @"montage_linkedin_image_url": @"montageLinkedinImageUrl", @"montage_twitter_image_url": @"montageTwitterImageUrl", @"newsletter_ids": @"newsletterIds", @"primary_email_font": @"primaryEmailFont", @"footer_email_font": @"footerEmailFont", @"email_accent_color": @"emailAccentColor", @"render_version": @"renderVersion", @"header_image_url": @"headerImageUrl", @"header_background_color": @"headerBackgroundColor", @"banner_color": @"bannerColor", @"title_color": @"titleColor", @"footer_html": @"footerHtml", @"intro_text": @"introText", @"footer_image_url": @"footerImageUrl", @"subject": @"subject", @"salutation_text": @"salutationText", @"body_html": @"bodyHtml" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"emailDayOfWeek", @"emailHour", @"emailStatus", @"facebookActiveWall", @"facebookDayOfWeek", @"facebookHour", @"facebookStatus", @"linkedinActiveWall", @"linkedinDayOfWeek", @"linkedinHour", @"linkedinStatus", @"socialTitle", @"socialSubtitle", @"socialDescription", @"twitterDayOfWeek", @"twitterHour", @"twitterStatus", @"socialPostingText", @"newsletterType", @"groupId", @"montageEnabled", @"montageTitle", @"montageFacebookImageUrl", @"montageLinkedinImageUrl", @"montageTwitterImageUrl", @"newsletterIds", @"primaryEmailFont", @"footerEmailFont", @"emailAccentColor", @"renderVersion", @"headerImageUrl", @"headerBackgroundColor", @"bannerColor", @"titleColor", @"footerHtml", @"introText", @"footerImageUrl", @"subject", @"salutationText", @"bodyHtml"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
