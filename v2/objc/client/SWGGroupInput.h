#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGGroupInput
@end
  
@interface SWGGroupInput : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* name;

@property(nonatomic) BOOL isDefault;

@property(nonatomic) BOOL isHidden;

@property(nonatomic) NSString* newWeeklyMailerContent;

@property(nonatomic) NSString* newsletterSubject;

@property(nonatomic) BOOL autopublish;

@property(nonatomic) NSNumber* numberArticlesPerGroup;

@property(nonatomic) NSNumber* numberArticlesPerNewsletter;

@end
