#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGPostInput
@end
  
@interface SWGPostInput : SWGObject


@property(nonatomic) NSString<Optional>* _id;

@property(nonatomic) NSString* title;

@property(nonatomic) NSString<Optional>* post_date;

@property(nonatomic) NSString<Optional>* body;

@property(nonatomic) NSString<Optional>* comment;

@property(nonatomic) NSNumber<Optional>* client_only;

@property(nonatomic) NSString<Optional>* attachment;

@property(nonatomic) NSString<Optional>* video;

@property(nonatomic) NSString<Optional>* img;

@property(nonatomic) NSString<Optional>* image_url;

@property(nonatomic) NSNumber<Optional>* img_compressed;

@property(nonatomic) NSNumber<Optional>* img_changed;

@property(nonatomic) NSString<Optional>* topic;

@end
