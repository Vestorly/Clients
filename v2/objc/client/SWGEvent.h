#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGEventContent.h"


@protocol SWGEvent
@end
  
@interface SWGEvent : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* type;

@property(nonatomic) NSString* referer;

@property(nonatomic) NSString* originalUrl;

@property(nonatomic) NSString* originatorEmail;

@property(nonatomic) NSString* subjectEmail;

@property(nonatomic) NSString* parentEventId;

@property(nonatomic) NSString* originatorId;

@property(nonatomic) NSString* advisorId;

@property(nonatomic) NSString* subjectId;

@property(nonatomic) SWGEventContent* eventContent;

@property(nonatomic) NSString* createdAt;

@end
