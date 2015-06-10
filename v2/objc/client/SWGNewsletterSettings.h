#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGNewsletterSetting.h"


@protocol SWGNewsletterSettings
@end
  
@interface SWGNewsletterSettings : SWGObject


@property(nonatomic) NSArray<SWGNewsletterSetting>* newsletterSettings;

@end
