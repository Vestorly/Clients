#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGPostInput.h"


@protocol SWGPostrequest
@end
  
@interface SWGPostrequest : SWGObject


@property(nonatomic) SWGPostInput* post;

@end
