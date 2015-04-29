#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGPostInput.h"


@protocol SWGPostRequest
@end
  
@interface SWGPostRequest : SWGObject


@property(nonatomic) SWGPostInput<Optional, SWGPostInput>* post;

@end
