#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGArticle
@end
  
@interface SWGArticle : SWGObject


@property(nonatomic) NSString<Optional>* _id;

@property(nonatomic) NSString<Optional>* created_at;

@property(nonatomic) NSString<Optional>* title;

@property(nonatomic) NSString<Optional>* open_calais_topics;

@property(nonatomic) NSString<Optional>* open_calais_keywords;

@property(nonatomic) NSString<Optional>* vestorly_topics;

@property(nonatomic) NSString<Optional>* categories;

@property(nonatomic) NSString<Optional>* summary;

@property(nonatomic) NSString<Optional>* unparsed_html;

@property(nonatomic) NSString<Optional>* logo_url;

@property(nonatomic) NSString<Optional>* image_url;

@property(nonatomic) NSString<Optional>* url;

@property(nonatomic) NSString<Optional>* external_url;

@property(nonatomic) NSString<Optional>* tags;

@end
