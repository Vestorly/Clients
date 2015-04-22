#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGAdvisor
@end
  
@interface SWGAdvisor : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* name;

@property(nonatomic) NSString<Optional>* tag;

@end
