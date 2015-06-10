#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGOrgSetting
@end
  
@interface SWGOrgSetting : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) BOOL isDefault;

@property(nonatomic) NSString* name;

@property(nonatomic) NSString* emailThemeName;

@property(nonatomic) NSString* companyAddress;

@property(nonatomic) NSString* companyContactEmail;

@property(nonatomic) NSString* siteUrl;

@property(nonatomic) NSString* companyHomepageUrl;

@property(nonatomic) NSString* privacyPolicyUrl;

@property(nonatomic) NSString* termsAndConditionsUrl;

@end
