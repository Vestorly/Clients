#import "SWGDate.h"
#import "SWGEvent.h"

@implementation SWGEvent

-(id)_id: (NSString*) _id
    type: (SWGSymbol*) type
    referrer: (NSString*) referrer
    original_url: (NSString*) original_url
    originator_email: (NSString*) originator_email
    subject_email: (NSString*) subject_email
    advisor_email: (NSString*) advisor_email
    originator_group_name: (NSString*) originator_group_name
    _newsletter: (NSString*) _newsletter
    
{
    __id = _id;
    _type = type;
    _referrer = referrer;
    _original_url = original_url;
    _originator_email = originator_email;
    _subject_email = subject_email;
    _advisor_email = advisor_email;
    _originator_group_name = originator_group_name;
    __newsletter = _newsletter;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        __id = dict[@"_id"];
        
        
        
        id type_dict = dict[@"type"];
        
        if(type_dict != nil)
            _type = [[SWGSymbol  alloc]initWithValues:type_dict];
        
        
        _referrer = dict[@"referrer"];
        
        _original_url = dict[@"original_url"];
        
        _originator_email = dict[@"originator_email"];
        
        _subject_email = dict[@"subject_email"];
        
        _advisor_email = dict[@"advisor_email"];
        
        _originator_group_name = dict[@"originator_group_name"];
        
        __newsletter = dict[@"newsletter"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(__id != nil) dict[@"_id"] = __id ;
        
    
    
    if(_type != nil){
        if([_type isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SWGSymbol *type in (NSArray*)_type) {
                [array addObject:[(SWGObject*)type asDictionary]];
            }
            dict[@"type"] = array;
        }
        else if(_type && [_type isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_type toString];
            if(dateString){
                dict[@"type"] = dateString;
            }
        }
        else {
        
            if(_type != nil) dict[@"type"] = [(SWGObject*)_type asDictionary];
        
        }
    }
    
    
    
            if(_referrer != nil) dict[@"referrer"] = _referrer ;
        
    
    
            if(_original_url != nil) dict[@"original_url"] = _original_url ;
        
    
    
            if(_originator_email != nil) dict[@"originator_email"] = _originator_email ;
        
    
    
            if(_subject_email != nil) dict[@"subject_email"] = _subject_email ;
        
    
    
            if(_advisor_email != nil) dict[@"advisor_email"] = _advisor_email ;
        
    
    
            if(_originator_group_name != nil) dict[@"originator_group_name"] = _originator_group_name ;
        
    
    
            if(__newsletter != nil) dict[@"newsletter"] = __newsletter ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
