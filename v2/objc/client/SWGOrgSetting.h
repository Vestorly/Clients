#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGOrgSetting
@end
  
@interface SWGOrgSetting : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSNumber<Optional>* is_default;

@property(nonatomic) NSString<Optional>* name;

@property(nonatomic) NSString<Optional>* email_theme_name;

@property(nonatomic) NSString<Optional>* company_address;

@property(nonatomic) NSString<Optional>* company_contact_email;

@property(nonatomic) NSString<Optional>* site_url;

@property(nonatomic) NSString<Optional>* company_homepage_url;

@property(nonatomic) NSString<Optional>* privacy_policy_url;

@property(nonatomic) NSString<Optional>* terms_and_conditions_url;

@end
