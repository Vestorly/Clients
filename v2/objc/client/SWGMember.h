#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGMember
@end
  
@interface SWGMember : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* email;

@property(nonatomic) NSString<Optional>* first_name;

@property(nonatomic) NSString<Optional>* last_name;

@property(nonatomic) NSString<Optional>* phone;

@property(nonatomic) NSString<Optional>* address;

@property(nonatomic) NSString<Optional>* city;

@property(nonatomic) NSString<Optional>* state;

@property(nonatomic) NSString<Optional>* zip;

@property(nonatomic) NSString<Optional>* gender;

@property(nonatomic) NSString<Optional>* age;

@property(nonatomic) NSString<Optional>* education;

@property(nonatomic) NSNumber<Optional>* high_net_worth;

@property(nonatomic) NSString<Optional>* home_market_value;

@property(nonatomic) NSString<Optional>* home_owner_status;

@property(nonatomic) NSString<Optional>* household_income;

@property(nonatomic) NSString<Optional>* marital_status;

@property(nonatomic) NSString<Optional>* occupation;

@property(nonatomic) NSString<Optional>* hometown;

@property(nonatomic) NSString<Optional>* family;

@property(nonatomic) NSString<Optional>* tags;

@property(nonatomic) NSString<Optional>* message;

@property(nonatomic) NSString<Optional>* location;

@property(nonatomic) NSString<Optional>* picture_url;

@property(nonatomic) NSString<Optional>* profile_url;

@property(nonatomic) NSString<Optional>* estimated_location;

@property(nonatomic) NSString<Optional>* estimated_zip;

@property(nonatomic) NSString<Optional>* register_ip_addr;

@property(nonatomic) NSNumber<Optional>* data_estimated;

@property(nonatomic) NSNumber<Optional>* genuine_email;

@end
