#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGSource
@end
  
@interface SWGSource : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* name;

@property(nonatomic) NSString<Optional>* url;

@property(nonatomic) NSString* logo_url;

@property(nonatomic) NSNumber* enabled;

@property(nonatomic) NSNumber* custom_rss_feed;

@property(nonatomic) NSString* rss_publisher;

@end
