#import "SWGDate.h"
#import "SWGSource.h"

@implementation SWGSource

-(id)_id: (NSString*) _id
    name: (NSString*) name
    url: (NSString*) url
    logo_url: (NSString*) logo_url
    enabled: (NSNumber*) enabled
    custom_rss_feed: (NSNumber*) custom_rss_feed
    rss_publisher: (NSString*) rss_publisher
    
{
    __id = _id;
    _name = name;
    _url = url;
    _logo_url = logo_url;
    _enabled = enabled;
    _custom_rss_feed = custom_rss_feed;
    _rss_publisher = rss_publisher;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        __id = dict[@"_id"];
        
        _name = dict[@"name"];
        
        _url = dict[@"url"];
        
        _logo_url = dict[@"logo_url"];
        
        _enabled = dict[@"enabled"];
        
        _custom_rss_feed = dict[@"custom_rss_feed"];
        
        _rss_publisher = dict[@"rss_publisher"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(__id != nil) dict[@"_id"] = __id ;
        
    
    
            if(_name != nil) dict[@"name"] = _name ;
        
    
    
            if(_url != nil) dict[@"url"] = _url ;
        
    
    
            if(_logo_url != nil) dict[@"logo_url"] = _logo_url ;
        
    
    
            if(_enabled != nil) dict[@"enabled"] = _enabled ;
        
    
    
            if(_custom_rss_feed != nil) dict[@"custom_rss_feed"] = _custom_rss_feed ;
        
    
    
            if(_rss_publisher != nil) dict[@"rss_publisher"] = _rss_publisher ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
