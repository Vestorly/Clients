#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGMember.h"
#import "SWGMeta.h"


@protocol SWGMembers
@end
  
@interface SWGMembers : SWGObject


@property(nonatomic) NSArray<Optional, SWGMember>* members;

@property(nonatomic) NSNumber<Optional>* more_results;

@property(nonatomic) SWGMeta<Optional, SWGMeta>* meta;

@end
