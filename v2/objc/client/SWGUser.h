#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGUser
@end
  
@interface SWGUser : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString<Optional>* company;

@property(nonatomic) NSString<Optional>* picture_url;

@property(nonatomic) NSString<Optional>* website;

@property(nonatomic) NSString<Optional>* user_type;

@property(nonatomic) NSString<Optional>* slug;

@property(nonatomic) NSString<Optional>* name;

@property(nonatomic) NSString<Optional>* username;

@property(nonatomic) NSString<Optional>* first_name;

@property(nonatomic) NSString<Optional>* last_name;

@property(nonatomic) NSNumber<Optional>* _new_user;

@property(nonatomic) NSNumber<Optional>* show_tour;

@property(nonatomic) NSNumber<Optional>* plan_setup;

@property(nonatomic) NSNumber<Optional>* plan_expired;

@property(nonatomic) NSString<Optional>* plan_status;

@property(nonatomic) NSString<Optional>* plan_id;

@property(nonatomic) NSNumber<Optional>* plan_stripe;

@end
