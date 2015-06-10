#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGMemberEvent
@end
  
@interface SWGMemberEvent : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* createdAt;

@property(nonatomic) NSString* type;

@property(nonatomic) NSString* source;

@property(nonatomic) NSString* referer;

@property(nonatomic) NSString* originalUrl;

@property(nonatomic) NSString* originatorEmail;

@property(nonatomic) NSString* originatorName;

@property(nonatomic) NSString* parentOriginatorId;

@property(nonatomic) NSString* parentEventId;

@property(nonatomic) NSString* originatorType;

@property(nonatomic) NSString* originatorGroupId;

@property(nonatomic) NSString* eventType;

@property(nonatomic) NSString* eventSource;

@property(nonatomic) NSString* contentUrl;

@property(nonatomic) NSString* eventDate;

@property(nonatomic) NSString* username;

@property(nonatomic) NSString* memberId;

@property(nonatomic) NSString* originatorId;

@property(nonatomic) NSString* subjectId;

@end
