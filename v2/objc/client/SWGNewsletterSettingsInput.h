#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGNewsletterSetting.h"


@protocol SWGNewsletterSettingsInput
@end
  
@interface SWGNewsletterSettingsInput : SWGObject


@property(nonatomic) SWGNewsletterSetting* newsletterSetting;

@end
