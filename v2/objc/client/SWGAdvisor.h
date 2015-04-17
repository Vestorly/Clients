#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGAdvisor
@end
  
@interface SWGAdvisor : SWGObject


@property(nonatomic) NSNumber<Optional>* client_only;

@property(nonatomic) NSNumber<Optional>* img_compressed;

@property(nonatomic) NSNumber<Optional>* img_changed;

@end
