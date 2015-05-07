#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGNewsletterSetting
@end
  
@interface SWGNewsletterSetting : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSNumber<Optional>* email_day_of_week;

@property(nonatomic) NSNumber<Optional>* email_hour;

@property(nonatomic) NSString<Optional>* email_status;

@property(nonatomic) NSString<Optional>* facebook_active_wall;

@property(nonatomic) NSNumber<Optional>* facebook_day_of_week;

@property(nonatomic) NSNumber<Optional>* facebook_hour;

@property(nonatomic) NSString<Optional>* facebook_status;

@property(nonatomic) NSString<Optional>* linkedin_active_wall;

@property(nonatomic) NSNumber<Optional>* linkedin_day_of_week;

@property(nonatomic) NSNumber<Optional>* linkedin_hour;

@property(nonatomic) NSString<Optional>* linkedin_status;

@property(nonatomic) NSString<Optional>* social_title;

@property(nonatomic) NSString<Optional>* social_subtitle;

@property(nonatomic) NSString<Optional>* social_description;

@property(nonatomic) NSNumber<Optional>* twitter_day_of_week;

@property(nonatomic) NSNumber<Optional>* twitter_hour;

@property(nonatomic) NSString<Optional>* twitter_status;

@property(nonatomic) NSString<Optional>* social_posting_text;

@property(nonatomic) NSString<Optional>* _newsletter_type;

@property(nonatomic) NSString<Optional>* group_id;

@property(nonatomic) NSNumber<Optional>* montage_enabled;

@property(nonatomic) NSString<Optional>* montage_title;

@property(nonatomic) NSString<Optional>* montage_facebook_image_url;

@property(nonatomic) NSString<Optional>* montage_linkedin_image_url;

@property(nonatomic) NSString<Optional>* montage_twitter_image_url;

@property(nonatomic) NSArray<Optional>* _newsletter_ids;

@property(nonatomic) NSString<Optional>* primary_email_font;

@property(nonatomic) NSString<Optional>* footer_email_font;

@property(nonatomic) NSString<Optional>* email_accent_color;

@property(nonatomic) NSString<Optional>* render_version;

@property(nonatomic) NSString<Optional>* header_image_url;

@property(nonatomic) NSString<Optional>* header_background_color;

@property(nonatomic) NSString<Optional>* banner_color;

@property(nonatomic) NSString<Optional>* title_color;

@property(nonatomic) NSString<Optional>* footer_html;

@property(nonatomic) NSString<Optional>* intro_text;

@property(nonatomic) NSString<Optional>* footer_image_url;

@property(nonatomic) NSString<Optional>* subject;

@property(nonatomic) NSString<Optional>* salutation_text;

@property(nonatomic) NSString<Optional>* body_html;

@end
