#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGEvent.h"


@protocol SWGEventresponse
@end
  
@interface SWGEventresponse : SWGObject


@property(nonatomic) SWGEvent<Optional, SWGEvent>* event;

@end
