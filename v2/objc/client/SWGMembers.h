#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGMember.h"


@protocol SWGMembers
@end
  
@interface SWGMembers : SWGObject


@property(nonatomic) NSArray<Optional, SWGMember>* posts;

@property(nonatomic) NSNumber<Optional>* more_results;

@end
