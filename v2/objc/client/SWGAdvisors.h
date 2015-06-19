#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGAdvisor.h"


@protocol SWGAdvisors
@end
  
@interface SWGAdvisors : SWGObject


@property(nonatomic) NSArray<SWGAdvisor>* advisors;

@end
