#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGGroupInput
@end
  
@interface SWGGroupInput : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString<Optional>* name;

@property(nonatomic) NSNumber<Optional>* is_default;

@property(nonatomic) NSNumber<Optional>* is_hidden;

@property(nonatomic) NSString<Optional>* _new_weekly_mailer_content;

@property(nonatomic) NSString<Optional>* _newsletter_subject;

@property(nonatomic) NSNumber<Optional>* autopublish;

@property(nonatomic) NSNumber<Optional>* number_articles_per_group;

@property(nonatomic) NSNumber<Optional>* number_articles_per_newsletter;

@end
