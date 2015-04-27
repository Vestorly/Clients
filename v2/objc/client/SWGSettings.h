#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGOrgSetting.h"
#import "SWGPersonalSettings.h"
#import "SWGFeatures.h"


@protocol SWGSettings
@end
  
@interface SWGSettings : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString<Optional>* company;

@property(nonatomic) NSString<Optional>* picture_url;

@property(nonatomic) NSString<Optional>* website;

@property(nonatomic) NSString<Optional>* disclosure;

@property(nonatomic) NSString<Optional>* adv_brochure;

@property(nonatomic) NSString<Optional>* slug;

@property(nonatomic) NSString<Optional>* name;

@property(nonatomic) SWGOrgSetting<Optional, SWGOrgSetting>* orgsetting;

@property(nonatomic) SWGFeatures<Optional, SWGFeatures>* feature;

@property(nonatomic) SWGPersonalSettings<Optional, SWGPersonalSettings>* personalsetting;

@end
