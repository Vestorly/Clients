#import "SWGDate.h"
#import "SWGAdvisor.h"

@implementation SWGAdvisor

-(id)_id: (NSString*) _id
    company: (NSString*) company
    address: (NSString*) address
    city: (NSString*) city
    state: (NSString*) state
    zip: (NSString*) zip
    first_name: (NSString*) first_name
    last_name: (NSString*) last_name
    reg_number: (NSString*) reg_number
    account_type: (NSString*) account_type
    advisor_employees: (NSString*) advisor_employees
    assets: (NSString*) assets
    num_clients: (NSNumber*) num_clients
    
{
    __id = _id;
    _company = company;
    _address = address;
    _city = city;
    _state = state;
    _zip = zip;
    _first_name = first_name;
    _last_name = last_name;
    _reg_number = reg_number;
    _account_type = account_type;
    _advisor_employees = advisor_employees;
    _assets = assets;
    _num_clients = num_clients;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        __id = dict[@"_id"];
        
        _company = dict[@"company"];
        
        _address = dict[@"address"];
        
        _city = dict[@"city"];
        
        _state = dict[@"state"];
        
        _zip = dict[@"zip"];
        
        _first_name = dict[@"first_name"];
        
        _last_name = dict[@"last_name"];
        
        _reg_number = dict[@"reg_number"];
        
        _account_type = dict[@"account_type"];
        
        _advisor_employees = dict[@"advisor_employees"];
        
        _assets = dict[@"assets"];
        
        _num_clients = dict[@"num_clients"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(__id != nil) dict[@"_id"] = __id ;
        
    
    
            if(_company != nil) dict[@"company"] = _company ;
        
    
    
            if(_address != nil) dict[@"address"] = _address ;
        
    
    
            if(_city != nil) dict[@"city"] = _city ;
        
    
    
            if(_state != nil) dict[@"state"] = _state ;
        
    
    
            if(_zip != nil) dict[@"zip"] = _zip ;
        
    
    
            if(_first_name != nil) dict[@"first_name"] = _first_name ;
        
    
    
            if(_last_name != nil) dict[@"last_name"] = _last_name ;
        
    
    
            if(_reg_number != nil) dict[@"reg_number"] = _reg_number ;
        
    
    
            if(_account_type != nil) dict[@"account_type"] = _account_type ;
        
    
    
            if(_advisor_employees != nil) dict[@"advisor_employees"] = _advisor_employees ;
        
    
    
            if(_assets != nil) dict[@"assets"] = _assets ;
        
    
    
            if(_num_clients != nil) dict[@"num_clients"] = _num_clients ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
