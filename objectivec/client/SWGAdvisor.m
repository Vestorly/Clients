#import "SWGDate.h"
#import "SWGAdvisor.h"

@implementation SWGAdvisor

-(id)_id: (NSString*) _id
    email: (NSString*) email
    phone: (NSString*) phone
    company: (NSString*) company
    address: (NSString*) address
    city: (NSString*) city { 
    
    __id = _id;
    _email = email;
    _phone = phone;
    _company = company;
    _address = address;
    _city = city;
    
    return self;
}
-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        __id = dict[@"_id"];
        _email = dict[@"email"];
        _phone = dict[@"phone"];
        _company = dict[@"company"];
        _address = dict[@"address"];
        _city = dict[@"city"];
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
    if(__id != nil)
        dict[@"_id"] = __id;
    
    
    
    
    if(_email != nil)
        dict[@"email"] = _email;
    
    
    
    
    if(_phone != nil)
        dict[@"phone"] = _phone;
    
    
    
    
    if(_company != nil)
        dict[@"company"] = _company;
    
    
    
    
    if(_address != nil)
        dict[@"address"] = _address;
    
    
    
    
    if(_city != nil)
        dict[@"city"] = _city;
    
    
    
    NSDictionary* output = [dict copy];
    return output;
}

@end
