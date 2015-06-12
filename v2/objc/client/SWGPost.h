#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGPost
@end
  
@interface SWGPost : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* createdAt;

@property(nonatomic) NSString* updatedAt;

@property(nonatomic) NSString* externalUrl;

@property(nonatomic) NSString* externalUrlSource;

@property(nonatomic) NSString* externalUrlType;

@property(nonatomic) NSString* imagePath;

@property(nonatomic) NSString* imageUrl;

@property(nonatomic) NSString* imageHeight;

@property(nonatomic) NSString* imageWidth;

@property(nonatomic) NSString* logoUrl;

@property(nonatomic) NSString* squareLogoUrl;

@property(nonatomic) NSString* needsSanitize;

@property(nonatomic) NSString* summary;

@property(nonatomic) NSString* topic;

@property(nonatomic) NSString* approvalStatus;

@property(nonatomic) NSArray* approvalTransactions;

@property(nonatomic) NSArray* groupIds;

@property(nonatomic) NSString* slug;

@property(nonatomic) NSString* articleId;

@property(nonatomic) NSString* comment;

@property(nonatomic) NSArray* newsletterIds;

@property(nonatomic) BOOL isFeatured;

@property(nonatomic) NSString* advisorId;

@property(nonatomic) BOOL isPublished;

@property(nonatomic) BOOL isResponsive;

@property(nonatomic) BOOL isProxyNeeded;

@property(nonatomic) BOOL isMobileProxyNeeded;

@property(nonatomic) NSString* proxyUrl;

@property(nonatomic) NSString* video;

@property(nonatomic) NSString* pdfAttachmentUrl;

@property(nonatomic) NSString* postDate;

@property(nonatomic) NSString* displayDate;

@property(nonatomic) NSString* suitabilityScore;

@property(nonatomic) NSString* videoId;

@property(nonatomic) NSString* displayTag;

@property(nonatomic) NSString* displaySummary;

@property(nonatomic) NSString* vestorlyUrl;

@property(nonatomic) NSString* title;

@end
