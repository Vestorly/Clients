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

@property(nonatomic) NSString<Optional>* interest_consultation;

@property(nonatomic) NSString<Optional>* interest_in_new_advisor;

@property(nonatomic) NSString<Optional>* assets;

@property(nonatomic) NSNumber<Optional>* age;

@property(nonatomic) NSNumber<Optional>* data_estimated;

@property(nonatomic) NSString<Optional>* education;

@property(nonatomic) NSNumber<Optional>* high_net_worth;

@property(nonatomic) NSString<Optional>* home_market_value;

@property(nonatomic) NSString<Optional>* home_owner_status;

@property(nonatomic) NSNumber<Optional>* household_income;

@property(nonatomic) NSString<Optional>* marital_status;

@property(nonatomic) NSString<Optional>* occupation;

@property(nonatomic) NSString<Optional>* hometown;

@property(nonatomic) NSString<Optional>* family;

@property(nonatomic) NSArray<Optional>* tags;

@property(nonatomic) NSArray<Optional>* subscribed_group_ids;

@property(nonatomic) NSNumber<Optional>* unsubscribed;

@property(nonatomic) NSNumber<Optional>* unsubscribed_date;

@property(nonatomic) NSNumber<Optional>* user_type;

@property(nonatomic) NSNumber<Optional>* signed_up_with;

@property(nonatomic) NSString<Optional>* message;

@property(nonatomic) NSString<Optional>* location;

@property(nonatomic) NSString<Optional>* picture_url;

@property(nonatomic) NSString<Optional>* profile_url;

@property(nonatomic) NSString<Optional>* estimated_location;

@property(nonatomic) NSString<Optional>* estimated_zip;

@property(nonatomic) NSString<Optional>* register_ip_addr;

@property(nonatomic) NSNumber<Optional>* genuine_email;

@property(nonatomic) NSString<Optional>* last_active_date;

@property(nonatomic) NSNumber<Optional>* is_client;

@property(nonatomic) NSNumber<Optional>* is_hidden;

@property(nonatomic) NSString<Optional>* invited_on;

@property(nonatomic) NSString<Optional>* invited_by;

@property(nonatomic) NSNumber<Optional>* portfolio_size;

@end
