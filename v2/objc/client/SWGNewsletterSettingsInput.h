#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGNewsletterSettingsInput
@end
  
@interface SWGNewsletterSettingsInput : SWGObject


@property(nonatomic) NSString<Optional>* email_status;

@property(nonatomic) NSString<Optional>* twitter_status;

@property(nonatomic) NSString<Optional>* linkedin_status;

@end
