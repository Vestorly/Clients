#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGSourceInput
@end
  
@interface SWGSourceInput : SWGObject


@property(nonatomic) NSString* name;

@property(nonatomic) NSString<Optional>* url;

@property(nonatomic) NSString* logo_url;

@property(nonatomic) NSNumber* enabled;

@property(nonatomic) NSNumber* custom_rss_feed;

@property(nonatomic) NSString* rss_publisher;

@end
