#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGNewsletterSetting.h"


@protocol SWGNewslettersettingresponse
@end
  
@interface SWGNewslettersettingresponse : SWGObject


@property(nonatomic) SWGNewsletterSetting<Optional, SWGNewsletterSetting>* _newsletter_setting;

@end
