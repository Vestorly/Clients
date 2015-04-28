#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGPost.h"


@protocol SWGNewsletterresponse
@end
  
@interface SWGNewsletterresponse : SWGObject


@property(nonatomic) SWGPost<Optional, SWGPost>* _newsletter;

@end
