#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGNewsletterSetting
@end
  
@interface SWGNewsletterSetting : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString<Optional>* email_status;

@property(nonatomic) NSString<Optional>* twitter_status;

@property(nonatomic) NSString<Optional>* linkedin_status;

@property(nonatomic) NSNumber<Optional>* email_hour;

@property(nonatomic) NSNumber<Optional>* twitter_hour;

@property(nonatomic) NSNumber<Optional>* linkedin_hour;

@property(nonatomic) NSNumber<Optional>* facebook_hour;

@end
