#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGEvent.h"


@protocol SWGEvents
@end
  
@interface SWGEvents : SWGObject


@property(nonatomic) NSArray<SWGEvent>* events;

@end
