#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGMemberReport
@end
  
@interface SWGMemberReport : SWGObject


@property(nonatomic) NSNumber* day;

@property(nonatomic) NSNumber* eventCount;

@property(nonatomic) NSString* originatorGroupId;

@property(nonatomic) NSString* parentOriginatorId;

@property(nonatomic) NSString* source;

@property(nonatomic) NSString* type;

@property(nonatomic) NSNumber* year;

@end
