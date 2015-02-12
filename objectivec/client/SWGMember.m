#import "SWGDate.h"
#import "SWGMember.h"

@implementation SWGMember

-(id)_id: (NSString*) _id
    email: (NSString*) email
    first_name: (NSString*) first_name
    last_name: (NSString*) last_name
    phone: (NSString*) phone
    address: (NSString*) address
    city: (NSString*) city
    state: (NSString*) state
    zip: (NSString*) zip
    gender: (NSString*) gender
    age: (NSString*) age
    education: (NSString*) education
    high_net_worth: (NSNumber*) high_net_worth
    home_market_value: (NSString*) home_market_value
    home_owner_status: (NSString*) home_owner_status
    household_income: (NSString*) household_income
    marital_status: (NSString*) marital_status
    occupation: (NSString*) occupation
    hometown: (NSString*) hometown
    family: (NSString*) family
    tags: (NSString*) tags
    message: (NSString*) message
    location: (NSString*) location
    picture_url: (NSString*) picture_url
    profile_url: (NSString*) profile_url
    estimated_location: (NSString*) estimated_location
    estimated_zip: (NSString*) estimated_zip
    register_ip_addr: (NSString*) register_ip_addr
    data_estimated: (NSNumber*) data_estimated
    genuine_email: (NSNumber*) genuine_email { 
    
    __id = _id;
    _email = email;
    _first_name = first_name;
    _last_name = last_name;
    _phone = phone;
    _address = address;
    _city = city;
    _state = state;
    _zip = zip;
    _gender = gender;
    _age = age;
    _education = education;
    _high_net_worth = high_net_worth;
    _home_market_value = home_market_value;
    _home_owner_status = home_owner_status;
    _household_income = household_income;
    _marital_status = marital_status;
    _occupation = occupation;
    _hometown = hometown;
    _family = family;
    _tags = tags;
    _message = message;
    _location = location;
    _picture_url = picture_url;
    _profile_url = profile_url;
    _estimated_location = estimated_location;
    _estimated_zip = estimated_zip;
    _register_ip_addr = register_ip_addr;
    _data_estimated = data_estimated;
    _genuine_email = genuine_email;
    
    return self;
}
-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        __id = dict[@"_id"];
        _email = dict[@"email"];
        _first_name = dict[@"first_name"];
        _last_name = dict[@"last_name"];
        _phone = dict[@"phone"];
        _address = dict[@"address"];
        _city = dict[@"city"];
        _state = dict[@"state"];
        _zip = dict[@"zip"];
        _gender = dict[@"gender"];
        _age = dict[@"age"];
        _education = dict[@"education"];
        _high_net_worth = dict[@"high_net_worth"];
        _home_market_value = dict[@"home_market_value"];
        _home_owner_status = dict[@"home_owner_status"];
        _household_income = dict[@"household_income"];
        _marital_status = dict[@"marital_status"];
        _occupation = dict[@"occupation"];
        _hometown = dict[@"hometown"];
        _family = dict[@"family"];
        _tags = dict[@"tags"];
        _message = dict[@"message"];
        _location = dict[@"location"];
        _picture_url = dict[@"picture_url"];
        _profile_url = dict[@"profile_url"];
        _estimated_location = dict[@"estimated_location"];
        _estimated_zip = dict[@"estimated_zip"];
        _register_ip_addr = dict[@"register_ip_addr"];
        _data_estimated = dict[@"data_estimated"];
        _genuine_email = dict[@"genuine_email"];
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
    if(__id != nil)
        dict[@"_id"] = __id;
    
    
    
    
    if(_email != nil)
        dict[@"email"] = _email;
    
    
    
    
    if(_first_name != nil)
        dict[@"first_name"] = _first_name;
    
    
    
    
    if(_last_name != nil)
        dict[@"last_name"] = _last_name;
    
    
    
    
    if(_phone != nil)
        dict[@"phone"] = _phone;
    
    
    
    
    if(_address != nil)
        dict[@"address"] = _address;
    
    
    
    
    if(_city != nil)
        dict[@"city"] = _city;
    
    
    
    
    if(_state != nil)
        dict[@"state"] = _state;
    
    
    
    
    if(_zip != nil)
        dict[@"zip"] = _zip;
    
    
    
    
    if(_gender != nil)
        dict[@"gender"] = _gender;
    
    
    
    
    if(_age != nil)
        dict[@"age"] = _age;
    
    
    
    
    if(_education != nil)
        dict[@"education"] = _education;
    
    
    
    
    if(_high_net_worth != nil)
        dict[@"high_net_worth"] = _high_net_worth;
    
    
    
    
    if(_home_market_value != nil)
        dict[@"home_market_value"] = _home_market_value;
    
    
    
    
    if(_home_owner_status != nil)
        dict[@"home_owner_status"] = _home_owner_status;
    
    
    
    
    if(_household_income != nil)
        dict[@"household_income"] = _household_income;
    
    
    
    
    if(_marital_status != nil)
        dict[@"marital_status"] = _marital_status;
    
    
    
    
    if(_occupation != nil)
        dict[@"occupation"] = _occupation;
    
    
    
    
    if(_hometown != nil)
        dict[@"hometown"] = _hometown;
    
    
    
    
    if(_family != nil)
        dict[@"family"] = _family;
    
    
    
    
    if(_tags != nil)
        dict[@"tags"] = _tags;
    
    
    
    
    if(_message != nil)
        dict[@"message"] = _message;
    
    
    
    
    if(_location != nil)
        dict[@"location"] = _location;
    
    
    
    
    if(_picture_url != nil)
        dict[@"picture_url"] = _picture_url;
    
    
    
    
    if(_profile_url != nil)
        dict[@"profile_url"] = _profile_url;
    
    
    
    
    if(_estimated_location != nil)
        dict[@"estimated_location"] = _estimated_location;
    
    
    
    
    if(_estimated_zip != nil)
        dict[@"estimated_zip"] = _estimated_zip;
    
    
    
    
    if(_register_ip_addr != nil)
        dict[@"register_ip_addr"] = _register_ip_addr;
    
    
    
    
    if(_data_estimated != nil)
        dict[@"data_estimated"] = _data_estimated;
    
    
    
    
    if(_genuine_email != nil)
        dict[@"genuine_email"] = _genuine_email;
    
    
    
    NSDictionary* output = [dict copy];
    return output;
}

@end
