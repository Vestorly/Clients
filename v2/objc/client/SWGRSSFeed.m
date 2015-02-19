#import "SWGDate.h"
#import "SWGRSSFeed.h"

@implementation SWGRSSFeed

-(id)_id: (NSString*) _id
    name: (NSString*) name
    category: (NSString*) category
    url: (SWGUrl*) url
    logo_url: (SWGUrl*) logo_url
    needs_sanitize: (NSString*) needs_sanitize
    
{
    __id = _id;
    _name = name;
    _category = category;
    _url = url;
    _logo_url = logo_url;
    _needs_sanitize = needs_sanitize;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        __id = dict[@"_id"];
        
        _name = dict[@"name"];
        
        _category = dict[@"category"];
        
        
        
        id url_dict = dict[@"url"];
        
        if(url_dict != nil)
            _url = [[SWGUrl  alloc]initWithValues:url_dict];
        
        
        
        
        id logo_url_dict = dict[@"logo_url"];
        
        if(logo_url_dict != nil)
            _logo_url = [[SWGUrl  alloc]initWithValues:logo_url_dict];
        
        
        _needs_sanitize = dict[@"needs_sanitize"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(__id != nil) dict[@"_id"] = __id ;
        
    
    
            if(_name != nil) dict[@"name"] = _name ;
        
    
    
            if(_category != nil) dict[@"category"] = _category ;
        
    
    
    if(_url != nil){
        if([_url isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SWGUrl *url in (NSArray*)_url) {
                [array addObject:[(SWGObject*)url asDictionary]];
            }
            dict[@"url"] = array;
        }
        else if(_url && [_url isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_url toString];
            if(dateString){
                dict[@"url"] = dateString;
            }
        }
        else {
        
            if(_url != nil) dict[@"url"] = [(SWGObject*)_url asDictionary];
        
        }
    }
    
    
    
    if(_logo_url != nil){
        if([_logo_url isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SWGUrl *logo_url in (NSArray*)_logo_url) {
                [array addObject:[(SWGObject*)logo_url asDictionary]];
            }
            dict[@"logo_url"] = array;
        }
        else if(_logo_url && [_logo_url isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_logo_url toString];
            if(dateString){
                dict[@"logo_url"] = dateString;
            }
        }
        else {
        
            if(_logo_url != nil) dict[@"logo_url"] = [(SWGObject*)_logo_url asDictionary];
        
        }
    }
    
    
    
            if(_needs_sanitize != nil) dict[@"needs_sanitize"] = _needs_sanitize ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
