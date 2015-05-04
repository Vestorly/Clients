#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGEventInput
@end
  
@interface SWGEventInput : SWGObject


@property(nonatomic) NSString<Optional>* referer;

@property(nonatomic) NSString* original_url;

@property(nonatomic) NSString<Optional>* originator_email;

@property(nonatomic) NSString* subject_email;

@property(nonatomic) NSString* advisor_email;

@property(nonatomic) NSString* originator_group_name;

@property(nonatomic) NSString* _newsletter;

@end
