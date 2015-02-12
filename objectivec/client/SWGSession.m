#import "SWGDate.h"
#import "SWGSession.h"

@implementation SWGSession

-(id)_id: (NSString*) _id { 
    
    __id = _id;
    
    return self;
}
-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        __id = dict[@"_id"];
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
    if(__id != nil)
        dict[@"_id"] = __id;
    
    
    
    NSDictionary* output = [dict copy];
    return output;
}

@end
