#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGSourceInput
@end
  
@interface SWGSourceInput : SWGObject


@property(nonatomic) NSString* name;

@property(nonatomic) NSString* url;

@property(nonatomic) NSString<Optional>* logo_url;

@property(nonatomic) NSNumber<Optional>* enabled;

@property(nonatomic) NSNumber<Optional>* custom_rss_feed;

@property(nonatomic) NSString* rss_publisher;

@end
