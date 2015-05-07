#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGMeta
@end
  
@interface SWGMeta : SWGObject


@property(nonatomic) NSString<Optional>* sort_order;

@property(nonatomic) NSNumber<Optional>* more_results;

@property(nonatomic) NSString<Optional>* message;

@property(nonatomic) NSArray<Optional>* sorted_by;

@end
