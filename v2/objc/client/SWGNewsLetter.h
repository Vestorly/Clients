#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGNewsletter
@end
  
@interface SWGNewsletter : SWGObject


@property(nonatomic) NSString<Optional>* _id;

@property(nonatomic) NSNumber<Optional>* is_sent;

@property(nonatomic) NSNumber<Optional>* is_default;

@property(nonatomic) NSNumber<Optional>* click_count;

@property(nonatomic) NSNumber<Optional>* unique_click_count;

@property(nonatomic) NSNumber<Optional>* total_click_count;

@end
