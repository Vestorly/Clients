#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGSettings.h"
#import "SWGUser.h"


@protocol SWGSession
@end
  
@interface SWGSession : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* vestorlyAuth;

@property(nonatomic) BOOL newUser;

@property(nonatomic) SWGUser* currentUser;

@property(nonatomic) SWGSettings* settings;

@end
