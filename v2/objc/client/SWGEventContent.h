#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGEventContent
@end
  
@interface SWGEventContent : SWGObject

/* Mongo id of event [optional]
 */
@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* contentField;

@property(nonatomic) NSString* contentId;

@property(nonatomic) NSString* contentType;

@property(nonatomic) NSString* createdAt;

@property(nonatomic) NSString* slug;

@property(nonatomic) NSString* updatedAt;

@end
