#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGMemberEvent.h"
#import "SWGTruncatedMember.h"


@protocol SWGMemberEvents
@end
  
@interface SWGMemberEvents : SWGObject


@property(nonatomic) NSArray<SWGTruncatedMember>* members;

@property(nonatomic) NSArray<SWGMemberEvent>* memberEvents;

@end
