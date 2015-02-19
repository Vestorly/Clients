#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGUrl.h"


@interface SWGRSSFeed : SWGObject

@property(nonatomic) NSString* _id;  /* Id of object  */
@property(nonatomic) NSString* name;  /* Name of rss feed  */
@property(nonatomic) NSString* category;  /* Category of rss feed  */
@property(nonatomic) SWGUrl* url;  /* URL of rss feed  */
@property(nonatomic) SWGUrl* logo_url;  /* Logo URL of rss feed  */
@property(nonatomic) NSString* needs_sanitize;  /* Does the feed need to be sanatized.  */
- (id) _id: (NSString*) _id     
    name: (NSString*) name     
    category: (NSString*) category     
    url: (SWGUrl*) url     
    logo_url: (SWGUrl*) logo_url     
    needs_sanitize: (NSString*) needs_sanitize;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
