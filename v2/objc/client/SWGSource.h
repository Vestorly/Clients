#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGSource
@end
  
@interface SWGSource : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* name;

@property(nonatomic) NSString* url;

@property(nonatomic) NSString* logoUrl;

@property(nonatomic) BOOL enabled;

@property(nonatomic) BOOL customRssFeed;

@property(nonatomic) NSString* rssPublisher;

@end
