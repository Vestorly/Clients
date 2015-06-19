#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGNewsletterSetting
@end
  
@interface SWGNewsletterSetting : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSNumber* emailDayOfWeek;

@property(nonatomic) NSNumber* emailHour;

@property(nonatomic) NSString* emailStatus;

@property(nonatomic) NSString* facebookActiveWall;

@property(nonatomic) NSNumber* facebookDayOfWeek;

@property(nonatomic) NSNumber* facebookHour;

@property(nonatomic) NSString* facebookStatus;

@property(nonatomic) NSString* linkedinActiveWall;

@property(nonatomic) NSNumber* linkedinDayOfWeek;

@property(nonatomic) NSNumber* linkedinHour;

@property(nonatomic) NSString* linkedinStatus;

@property(nonatomic) NSString* socialTitle;

@property(nonatomic) NSString* socialSubtitle;

@property(nonatomic) NSString* socialDescription;

@property(nonatomic) NSNumber* twitterDayOfWeek;

@property(nonatomic) NSNumber* twitterHour;

@property(nonatomic) NSString* twitterStatus;

@property(nonatomic) NSString* socialPostingText;

@property(nonatomic) NSString* newsletterType;

@property(nonatomic) NSString* groupId;

@property(nonatomic) BOOL montageEnabled;

@property(nonatomic) NSString* montageTitle;

@property(nonatomic) NSString* montageFacebookImageUrl;

@property(nonatomic) NSString* montageLinkedinImageUrl;

@property(nonatomic) NSString* montageTwitterImageUrl;

@property(nonatomic) NSArray* newsletterIds;

@property(nonatomic) NSString* primaryEmailFont;

@property(nonatomic) NSString* footerEmailFont;

@property(nonatomic) NSString* emailAccentColor;

@property(nonatomic) NSString* renderVersion;

@property(nonatomic) NSString* headerImageUrl;

@property(nonatomic) NSString* headerBackgroundColor;

@property(nonatomic) NSString* bannerColor;

@property(nonatomic) NSString* titleColor;

@property(nonatomic) NSString* footerHtml;

@property(nonatomic) NSString* introText;

@property(nonatomic) NSString* footerImageUrl;

@property(nonatomic) NSString* subject;

@property(nonatomic) NSString* salutationText;

@property(nonatomic) NSString* bodyHtml;

@end
