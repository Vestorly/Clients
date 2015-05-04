#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGAdvisor.h"


@protocol SWGAdvisorresponse
@end
  
@interface SWGAdvisorresponse : SWGObject


@property(nonatomic) SWGAdvisor<Optional, SWGAdvisor>* advisor;

@end
