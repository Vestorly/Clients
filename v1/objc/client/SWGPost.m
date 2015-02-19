#import "SWGDate.h"
#import "SWGPost.h"

@implementation SWGPost

-(id)_id: (NSString*) _id
    title: (NSString*) title
    body: (NSString*) body
    comment: (NSString*) comment
    video: (NSString*) video
    img: (NSString*) img
    
{
    __id = _id;
    _title = title;
    _body = body;
    _comment = comment;
    _video = video;
    _img = img;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        __id = dict[@"_id"];
        
        _title = dict[@"title"];
        
        _body = dict[@"body"];
        
        _comment = dict[@"comment"];
        
        _video = dict[@"video"];
        
        _img = dict[@"img"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(__id != nil) dict[@"_id"] = __id ;
        
    
    
            if(_title != nil) dict[@"title"] = _title ;
        
    
    
            if(_body != nil) dict[@"body"] = _body ;
        
    
    
            if(_comment != nil) dict[@"comment"] = _comment ;
        
    
    
            if(_video != nil) dict[@"video"] = _video ;
        
    
    
            if(_img != nil) dict[@"img"] = _img ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
