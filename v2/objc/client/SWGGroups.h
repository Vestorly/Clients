#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGGroup.h"


@protocol SWGGroups
@end
  
@interface SWGGroups : SWGObject


@property(nonatomic) NSArray<SWGGroup>* groups;

@end
