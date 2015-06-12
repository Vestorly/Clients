#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGMember
@end
  
@interface SWGMember : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* email;

@property(nonatomic) NSString* firstName;

@property(nonatomic) NSString* lastName;

@property(nonatomic) NSString* phone;

@property(nonatomic) NSString* address;

@property(nonatomic) NSString* city;

@property(nonatomic) NSString* state;

@property(nonatomic) NSString* zip;

@property(nonatomic) NSString* gender;

@property(nonatomic) NSString* interestConsultation;

@property(nonatomic) NSString* interestInNewAdvisor;

@property(nonatomic) NSString* assets;

@property(nonatomic) NSString* age;

@property(nonatomic) BOOL dataEstimated;

@property(nonatomic) NSString* education;

@property(nonatomic) BOOL highNetWorth;

@property(nonatomic) NSString* homeMarketValue;

@property(nonatomic) NSString* homeOwnerStatus;

@property(nonatomic) NSString* householdIncome;

@property(nonatomic) NSString* maritalStatus;

@property(nonatomic) NSString* occupation;

@property(nonatomic) NSString* hometown;

@property(nonatomic) NSString* family;

@property(nonatomic) NSArray* tags;

@property(nonatomic) NSArray* subscribedGroupIds;

@property(nonatomic) BOOL unsubscribed;

@property(nonatomic) BOOL unsubscribedDate;

@property(nonatomic) NSString* userType;

@property(nonatomic) NSString* signedUpWith;

@property(nonatomic) NSString* message;

@property(nonatomic) NSString* location;

@property(nonatomic) NSString* pictureUrl;

@property(nonatomic) NSString* profileUrl;

@property(nonatomic) NSString* estimatedLocation;

@property(nonatomic) NSString* estimatedZip;

@property(nonatomic) NSString* registerIpAddr;

@property(nonatomic) BOOL genuineEmail;

@property(nonatomic) NSString* lastActiveDate;

@property(nonatomic) BOOL isClient;

@property(nonatomic) BOOL isHidden;

@property(nonatomic) NSString* invitedOn;

@property(nonatomic) NSString* invitedBy;

@property(nonatomic) NSString* portfolioSize;

@end
