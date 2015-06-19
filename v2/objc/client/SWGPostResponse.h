#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGPost.h"


@protocol SWGPostresponse
@end
  
@interface SWGPostresponse : SWGObject


@property(nonatomic) SWGPost* post;

@end
