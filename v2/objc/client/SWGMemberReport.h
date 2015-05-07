#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGMemberReport
@end
  
@interface SWGMemberReport : SWGObject


@property(nonatomic) NSNumber<Optional>* day;

@property(nonatomic) NSNumber<Optional>* event_count;

@property(nonatomic) NSString<Optional>* originator_group_id;

@property(nonatomic) NSString<Optional>* parent_originator_id;

@property(nonatomic) NSString<Optional>* source;

@property(nonatomic) NSString<Optional>* type;

@property(nonatomic) NSNumber<Optional>* year;

@end
