#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGOrgSetting.h"
#import "SWGFeatures.h"
#import "SWGPersonalSettings.h"


@protocol SWGSettings
@end
  
@interface SWGSettings : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* company;

@property(nonatomic) NSString* pictureUrl;

@property(nonatomic) NSString* website;

@property(nonatomic) NSString* disclosure;

@property(nonatomic) NSString* advBrochure;

@property(nonatomic) NSString* slug;

@property(nonatomic) NSString* name;

@property(nonatomic) SWGOrgSetting* orgsetting;

@property(nonatomic) SWGFeatures* feature;

@property(nonatomic) SWGPersonalSettings* personalsetting;

@end
