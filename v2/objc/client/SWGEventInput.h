#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGEventContent.h"


@protocol SWGEventInput
@end
  
@interface SWGEventInput : SWGObject


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
