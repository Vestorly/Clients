#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGUser.h"
#import "SWGSettings.h"


@protocol SWGSession
@end
  
@interface SWGSession : SWGObject


@property(nonatomic) NSString<Optional>* _id;

@property(nonatomic) NSString<Optional>* vestorlyauth;

@property(nonatomic) NSNumber<Optional>* _new_user;

@property(nonatomic) SWGUser<Optional, SWGUser>* current_user;

@property(nonatomic) SWGSettings<Optional, SWGSettings>* settings;

@end
