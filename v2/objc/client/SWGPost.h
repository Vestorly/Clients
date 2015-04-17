#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGPost
@end
  
@interface SWGPost : SWGObject


@property(nonatomic) NSNumber<Optional>* client_only;

@property(nonatomic) NSNumber<Optional>* img_compressed;

@property(nonatomic) NSNumber<Optional>* img_changed;

@end
