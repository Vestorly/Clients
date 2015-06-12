#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGNewsletterInput
@end
  
@interface SWGNewsletterInput : SWGObject


@property(nonatomic) BOOL isSent;

@property(nonatomic) BOOL isDefault;

@property(nonatomic) NSNumber* clickCount;

@property(nonatomic) NSNumber* uniqueClickCount;

@property(nonatomic) NSNumber* totalClickCount;

@end
