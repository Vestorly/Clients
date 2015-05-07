#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGMemberEvent
@end
  
@interface SWGMemberEvent : SWGObject


@property(nonatomic) NSString<Optional>* _id;

@property(nonatomic) NSString<Optional>* created_at;

@property(nonatomic) NSString<Optional>* type;

@property(nonatomic) NSString<Optional>* source;

@property(nonatomic) NSString<Optional>* referer;

@property(nonatomic) NSString<Optional>* original_url;

@property(nonatomic) NSString<Optional>* originator_email;

@property(nonatomic) NSString<Optional>* originator_name;

@property(nonatomic) NSString<Optional>* parent_originator_id;

@property(nonatomic) NSString<Optional>* parent_event_id;

@property(nonatomic) NSString<Optional>* originator_type;

@property(nonatomic) NSString<Optional>* originator_group_id;

@property(nonatomic) NSString<Optional>* event_type;

@property(nonatomic) NSString<Optional>* event_source;

@property(nonatomic) NSString<Optional>* content_url;

@property(nonatomic) NSString<Optional>* event_date;

@property(nonatomic) NSString<Optional>* username;

@property(nonatomic) NSString<Optional>* member_id;

@property(nonatomic) NSString<Optional>* originator_id;

@property(nonatomic) NSString<Optional>* subject_id;

@end
