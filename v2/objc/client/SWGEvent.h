#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGEventContent.h"


@protocol SWGEvent
@end
  
@interface SWGEvent : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* type;

@property(nonatomic) NSString<Optional>* referer;

@property(nonatomic) NSString* original_url;

@property(nonatomic) NSString<Optional>* originator_email;

@property(nonatomic) NSString* subject_email;

@property(nonatomic) NSString<Optional>* parent_event_id;

@property(nonatomic) NSString<Optional>* originator_id;

@property(nonatomic) NSString<Optional>* advisor_id;

@property(nonatomic) NSString<Optional>* subject_id;

@property(nonatomic) SWGEventContent<Optional, SWGEventContent>* event_content;

@property(nonatomic) NSString<Optional>* created_at;

@end
