#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGMemberEvent.h"
#import "SWGTruncatedMember.h"


@protocol SWGMemberEvents
@end
  
@interface SWGMemberEvents : SWGObject


@property(nonatomic) NSArray<Optional, SWGTruncatedMember>* members;

@property(nonatomic) NSArray<Optional, SWGMemberEvent>* member_events;

@end
