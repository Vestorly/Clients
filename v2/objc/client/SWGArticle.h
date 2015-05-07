#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGArticle
@end
  
@interface SWGArticle : SWGObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString<Optional>* created_at;

@property(nonatomic) NSString* title;

@property(nonatomic) NSString<Optional>* body;

@property(nonatomic) NSNumber<Optional>* is_responsive;

@property(nonatomic) NSNumber<Optional>* is_proxy_needed;

@property(nonatomic) NSNumber<Optional>* is_mobile_proxy_needed;

@property(nonatomic) NSNumber<Optional>* needs_sanitize;

@property(nonatomic) NSString<Optional>* proxy_url;

@property(nonatomic) NSString<Optional>* topic;

@property(nonatomic) NSString<Optional>* suitability_score;

@property(nonatomic) NSString<Optional>* summary;

@property(nonatomic) NSString<Optional>* image_path;

@property(nonatomic) NSString<Optional>* image_url;

@property(nonatomic) NSNumber<Optional>* image_height;

@property(nonatomic) NSNumber<Optional>* image_width;

@property(nonatomic) NSString<Optional>* logo_url;

@property(nonatomic) NSString<Optional>* square_logo_url;

@property(nonatomic) NSString<Optional>* url;

@property(nonatomic) NSString<Optional>* external_url;

@property(nonatomic) NSString<Optional>* external_url_source;

@property(nonatomic) NSString<Optional>* external_url_type;

@end
