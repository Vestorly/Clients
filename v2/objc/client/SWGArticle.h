#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGArticle
@end
  
@interface SWGArticle : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* createdAt;

@property(nonatomic) NSString* title;

@property(nonatomic) NSString* body;

@property(nonatomic) BOOL isResponsive;

@property(nonatomic) BOOL isProxyNeeded;

@property(nonatomic) BOOL isMobileProxyNeeded;

@property(nonatomic) BOOL needsSanitize;

@property(nonatomic) NSString* proxyUrl;

@property(nonatomic) NSString* topic;

@property(nonatomic) NSString* suitabilityScore;

@property(nonatomic) NSString* summary;

@property(nonatomic) NSString* imagePath;

@property(nonatomic) NSString* imageUrl;

@property(nonatomic) NSNumber* imageHeight;

@property(nonatomic) NSNumber* imageWidth;

@property(nonatomic) NSString* logoUrl;

@property(nonatomic) NSString* squareLogoUrl;

@property(nonatomic) NSString* url;

@property(nonatomic) NSString* externalUrl;

@property(nonatomic) NSString* externalUrlSource;

@property(nonatomic) NSString* externalUrlType;

@end
