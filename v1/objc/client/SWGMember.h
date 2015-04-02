#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SWGMember : SWGObject

@property(nonatomic) NSString* _id;  /* Id of object  */
@property(nonatomic) NSString* email;  /* Email Address  */
@property(nonatomic) NSString* first_name;  /* First Name  */
@property(nonatomic) NSString* last_name;  /* Last Name  */
@property(nonatomic) NSString* phone;  /* Phone Number  */
@property(nonatomic) NSString* address;  /* Postal Address  */
@property(nonatomic) NSString* city;  /* Postal City  */
@property(nonatomic) NSString* state;  /* Postal State  */
@property(nonatomic) NSString* zip;  /* Postal Zipcode  */
@property(nonatomic) NSString* gender;  /* Gender  */
@property(nonatomic) NSString* age;  /* Age Range  */
@property(nonatomic) NSString* education;  /* Education  */
@property(nonatomic) NSNumber* high_net_worth;  /* High Net Worth  */
@property(nonatomic) NSString* home_market_value;  /* Home Market Value  */
@property(nonatomic) NSString* home_owner_status;  /* Home Owner Status  */
@property(nonatomic) NSString* household_income;  /* Household Income  */
@property(nonatomic) NSString* marital_status;  /* Marital Status  */
@property(nonatomic) NSString* occupation;  /* Occupation  */
@property(nonatomic) NSString* hometown;  /* Hometown  */
@property(nonatomic) NSString* family;  /* Family Members  */
@property(nonatomic) NSString* tags;  /* Tags  */
@property(nonatomic) NSString* message;  /* Message and notes  */
@property(nonatomic) NSString* location;  /* Location  */
@property(nonatomic) NSString* picture_url;  /* Picture URL  */
@property(nonatomic) NSString* profile_url;  /* Social Profile URL  */
@property(nonatomic) NSString* estimated_location;  /* Estimated Location  */
@property(nonatomic) NSString* estimated_zip;  /* Estimated Zipcode  */
@property(nonatomic) NSString* register_ip_addr;  /* First recorded IP Address  */
@property(nonatomic) NSNumber* data_estimated;  /* Data Estimated  */
@property(nonatomic) NSNumber* genuine_email;  /* Genuine Email address  */
- (id) _id: (NSString*) _id     
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
    genuine_email: (NSNumber*) genuine_email;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
