#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGMember.h"
#import "SWGMeta.h"


@protocol SWGMembers
@end
  
@interface SWGMembers : SWGObject


@property(nonatomic) NSArray<SWGMember>* members;

@property(nonatomic) BOOL moreResults;

@property(nonatomic) SWGMeta* meta;

@end
