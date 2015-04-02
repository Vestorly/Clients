#import "SWGDate.h"
#import "SWGArticle.h"

@implementation SWGArticle

-(id)_id: (NSString*) _id
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
    is_working_url: (NSNumber*) is_working_url
    
{
    __id = _id;
    _url = url;
    _title = title;
    _open_calais_topics = open_calais_topics;
    _open_calais_keywords = open_calais_keywords;
    _categories = categories;
    _summary = summary;
    _unparsed_html = unparsed_html;
    _parsed_html = parsed_html;
    _content = content;
    _vestorly_topics = vestorly_topics;
    _override_topic = override_topic;
    _published_at = published_at;
    _original_image_url = original_image_url;
    _small_image_url = small_image_url;
    _large_image_url = large_image_url;
    _img = img;
    _webpage_mobile_image_url = webpage_mobile_image_url;
    _webpage_tablet_image_url = webpage_tablet_image_url;
    _rss_feed_url = rss_feed_url;
    _rss_feed_category = rss_feed_category;
    _rss_feed_logo_url = rss_feed_logo_url;
    _needs_sanitize = needs_sanitize;
    _is_responsive = is_responsive;
    _is_proxy_needed = is_proxy_needed;
    _is_mobile_proxy_needed = is_mobile_proxy_needed;
    _is_working_url = is_working_url;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        __id = dict[@"_id"];
        
        _url = dict[@"url"];
        
        _title = dict[@"title"];
        
        _open_calais_topics = dict[@"open_calais_topics"];
        
        _open_calais_keywords = dict[@"open_calais_keywords"];
        
        _categories = dict[@"categories"];
        
        _summary = dict[@"summary"];
        
        _unparsed_html = dict[@"unparsed_html"];
        
        _parsed_html = dict[@"parsed_html"];
        
        _content = dict[@"content"];
        
        _vestorly_topics = dict[@"vestorly_topics"];
        
        _override_topic = dict[@"override_topic"];
        
        
        
        id published_at_dict = dict[@"published_at"];
        
        if(published_at_dict != nil)
            _published_at = [[SWGDatetime  alloc]initWithValues:published_at_dict];
        
        
        _original_image_url = dict[@"original_image_url"];
        
        _small_image_url = dict[@"small_image_url"];
        
        _large_image_url = dict[@"large_image_url"];
        
        _img = dict[@"img"];
        
        _webpage_mobile_image_url = dict[@"webpage_mobile_image_url"];
        
        _webpage_tablet_image_url = dict[@"webpage_tablet_image_url"];
        
        _rss_feed_url = dict[@"rss_feed_url"];
        
        _rss_feed_category = dict[@"rss_feed_category"];
        
        _rss_feed_logo_url = dict[@"rss_feed_logo_url"];
        
        _needs_sanitize = dict[@"needs_sanitize"];
        
        _is_responsive = dict[@"is_responsive"];
        
        _is_proxy_needed = dict[@"is_proxy_needed"];
        
        _is_mobile_proxy_needed = dict[@"is_mobile_proxy_needed"];
        
        _is_working_url = dict[@"is_working_url"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(__id != nil) dict[@"_id"] = __id ;
        
    
    
            if(_url != nil) dict[@"url"] = _url ;
        
    
    
            if(_title != nil) dict[@"title"] = _title ;
        
    
    
            if(_open_calais_topics != nil) dict[@"open_calais_topics"] = _open_calais_topics ;
        
    
    
            if(_open_calais_keywords != nil) dict[@"open_calais_keywords"] = _open_calais_keywords ;
        
    
    
            if(_categories != nil) dict[@"categories"] = _categories ;
        
    
    
            if(_summary != nil) dict[@"summary"] = _summary ;
        
    
    
            if(_unparsed_html != nil) dict[@"unparsed_html"] = _unparsed_html ;
        
    
    
            if(_parsed_html != nil) dict[@"parsed_html"] = _parsed_html ;
        
    
    
            if(_content != nil) dict[@"content"] = _content ;
        
    
    
            if(_vestorly_topics != nil) dict[@"vestorly_topics"] = _vestorly_topics ;
        
    
    
            if(_override_topic != nil) dict[@"override_topic"] = _override_topic ;
        
    
    
    if(_published_at != nil){
        if([_published_at isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SWGDatetime *published_at in (NSArray*)_published_at) {
                [array addObject:[(SWGObject*)published_at asDictionary]];
            }
            dict[@"published_at"] = array;
        }
        else if(_published_at && [_published_at isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_published_at toString];
            if(dateString){
                dict[@"published_at"] = dateString;
            }
        }
        else {
        
            if(_published_at != nil) dict[@"published_at"] = [(SWGObject*)_published_at asDictionary];
        
        }
    }
    
    
    
            if(_original_image_url != nil) dict[@"original_image_url"] = _original_image_url ;
        
    
    
            if(_small_image_url != nil) dict[@"small_image_url"] = _small_image_url ;
        
    
    
            if(_large_image_url != nil) dict[@"large_image_url"] = _large_image_url ;
        
    
    
            if(_img != nil) dict[@"img"] = _img ;
        
    
    
            if(_webpage_mobile_image_url != nil) dict[@"webpage_mobile_image_url"] = _webpage_mobile_image_url ;
        
    
    
            if(_webpage_tablet_image_url != nil) dict[@"webpage_tablet_image_url"] = _webpage_tablet_image_url ;
        
    
    
            if(_rss_feed_url != nil) dict[@"rss_feed_url"] = _rss_feed_url ;
        
    
    
            if(_rss_feed_category != nil) dict[@"rss_feed_category"] = _rss_feed_category ;
        
    
    
            if(_rss_feed_logo_url != nil) dict[@"rss_feed_logo_url"] = _rss_feed_logo_url ;
        
    
    
            if(_needs_sanitize != nil) dict[@"needs_sanitize"] = _needs_sanitize ;
        
    
    
            if(_is_responsive != nil) dict[@"is_responsive"] = _is_responsive ;
        
    
    
            if(_is_proxy_needed != nil) dict[@"is_proxy_needed"] = _is_proxy_needed ;
        
    
    
            if(_is_mobile_proxy_needed != nil) dict[@"is_mobile_proxy_needed"] = _is_mobile_proxy_needed ;
        
    
    
            if(_is_working_url != nil) dict[@"is_working_url"] = _is_working_url ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
