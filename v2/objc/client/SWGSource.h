#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SWGSource : SWGObject

@property(nonatomic) NSString* _id;  /* Id of source  */
@property(nonatomic) NSString* name;  /* Name of source  */
@property(nonatomic) NSString* url;  /* Url of source  */
@property(nonatomic) NSString* logo_url;  /* Logo url of source  */
@property(nonatomic) NSNumber* enabled;  /* Is the source enabled  */
@property(nonatomic) NSNumber* custom_rss_feed;  /* Is the source using custom RSS feed  */
@property(nonatomic) NSString* rss_publisher;  /* RSS publisher of the source  */
- (id) _id: (NSString*) _id     
    name: (NSString*) name     
    url: (NSString*) url     
    logo_url: (NSString*) logo_url     
    enabled: (NSNumber*) enabled     
    custom_rss_feed: (NSNumber*) custom_rss_feed     
    rss_publisher: (NSString*) rss_publisher;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
