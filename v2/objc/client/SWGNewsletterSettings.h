#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGNewsletterSetting.h"


@protocol SWGNewslettersettings
@end
  
@interface SWGNewslettersettings : SWGObject


@property(nonatomic) NSArray<Optional, SWGNewsletterSetting>* _newletter_settings;

@end
