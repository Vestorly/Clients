#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGNewsletter
@end
  
@interface SWGNewsletter : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) BOOL isSent;

@property(nonatomic) BOOL isDefault;

@property(nonatomic) NSNumber* clickCount;

@property(nonatomic) NSNumber* uniqueClickCount;

@property(nonatomic) NSNumber* totalClickCount;

@end
