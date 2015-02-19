#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGDatetime.h"


@interface SWGArticle : SWGObject

@property(nonatomic) NSString* _id;  /* Id of object  */
@property(nonatomic) NSString* url;  /* URL of the article  */
@property(nonatomic) NSString* title;  /* Title of the article  */
@property(nonatomic) NSString* open_calais_topics;  /* Open calcais optics  */
@property(nonatomic) NSString* open_calais_keywords;  /* Open calais keywords  */
@property(nonatomic) NSString* categories;  /* Categories of article  */
@property(nonatomic) NSString* summary;  /* Summary of article  */
@property(nonatomic) NSString* unparsed_html;  /* Unparsed HTML  */
@property(nonatomic) NSString* parsed_html;  /* Parsed HTML  */
@property(nonatomic) NSString* content;  /* Content of article  */
@property(nonatomic) NSString* vestorly_topics;  /* Vestorly topics  */
@property(nonatomic) NSString* override_topic;  /* Override topics  */
@property(nonatomic) SWGDatetime* published_at;  /* Article published at time  */
@property(nonatomic) NSString* original_image_url;  /* Original image url  */
@property(nonatomic) NSString* small_image_url;  /* Small image url  */
@property(nonatomic) NSString* large_image_url;  /* Large image url  */
@property(nonatomic) NSString* img;  /* Image  */
@property(nonatomic) NSString* webpage_mobile_image_url;  /* Webpage mobile url  */
@property(nonatomic) NSString* webpage_tablet_image_url;  /* Webpage tablet url  */
@property(nonatomic) NSString* rss_feed_url;  /* Article URL  */
@property(nonatomic) NSString* rss_feed_category;  /* Article category  */
@property(nonatomic) NSString* rss_feed_logo_url;  /* Article logo  */
@property(nonatomic) NSNumber* needs_sanitize;  /* Does this article need sanitizing?  */
@property(nonatomic) NSNumber* is_responsive;  /* Is this article responsive  */
@property(nonatomic) NSNumber* is_proxy_needed;  /* Is a proxy used for this article  */
@property(nonatomic) NSNumber* is_mobile_proxy_needed;  /* Is mobile proxying needed  */
@property(nonatomic) NSNumber* is_working_url;  /* Is working url?  */
- (id) _id: (NSString*) _id     
    url: (NSString*) url     
    title: (NSString*) title     
    open_calais_topics: (NSString*) open_calais_topics     
    open_calais_keywords: (NSString*) open_calais_keywords     
    categories: (NSString*) categories     
    summary: (NSString*) summary     
    unparsed_html: (NSString*) unparsed_html     
    parsed_html: (NSString*) parsed_html     
    content: (NSString*) content     
    vestorly_topics: (NSString*) vestorly_topics     
    override_topic: (NSString*) override_topic     
    published_at: (SWGDatetime*) published_at     
    original_image_url: (NSString*) original_image_url     
    small_image_url: (NSString*) small_image_url     
    large_image_url: (NSString*) large_image_url     
    img: (NSString*) img     
    webpage_mobile_image_url: (NSString*) webpage_mobile_image_url     
    webpage_tablet_image_url: (NSString*) webpage_tablet_image_url     
    rss_feed_url: (NSString*) rss_feed_url     
    rss_feed_category: (NSString*) rss_feed_category     
    rss_feed_logo_url: (NSString*) rss_feed_logo_url     
    needs_sanitize: (NSNumber*) needs_sanitize     
    is_responsive: (NSNumber*) is_responsive     
    is_proxy_needed: (NSNumber*) is_proxy_needed     
    is_mobile_proxy_needed: (NSNumber*) is_mobile_proxy_needed     
    is_working_url: (NSNumber*) is_working_url;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
