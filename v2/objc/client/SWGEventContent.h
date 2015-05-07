#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGEventContent
@end
  
@interface SWGEventContent : SWGObject

/* Mongo id of event [optional]
 */
@property(nonatomic) NSString<Optional>* _id;

@property(nonatomic) NSString<Optional>* content_field;

@property(nonatomic) NSString<Optional>* content_id;

@property(nonatomic) NSString<Optional>* content_type;

@property(nonatomic) NSString<Optional>* created_at;

@property(nonatomic) NSString<Optional>* slug;

@property(nonatomic) NSString<Optional>* updated_at;

@end
