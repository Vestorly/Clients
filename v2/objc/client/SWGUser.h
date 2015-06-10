#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGUser
@end
  
@interface SWGUser : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* company;

@property(nonatomic) NSString* pictureUrl;

@property(nonatomic) NSString* website;

@property(nonatomic) NSString* userType;

@property(nonatomic) NSString* slug;

@property(nonatomic) NSString* name;

@property(nonatomic) NSString* username;

@property(nonatomic) NSString* firstName;

@property(nonatomic) NSString* lastName;

@property(nonatomic) BOOL newUser;

@property(nonatomic) BOOL showTour;

@property(nonatomic) BOOL planSetup;

@property(nonatomic) BOOL planExpired;

@property(nonatomic) NSString* planStatus;

@property(nonatomic) NSString* planId;

@property(nonatomic) BOOL planStripe;

@end
