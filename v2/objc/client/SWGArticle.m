#import "SWGArticle.h"

@implementation SWGArticle
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"created_at": @"created_at", @"title": @"title", @"open_calais_topics": @"open_calais_topics", @"open_calais_keywords": @"open_calais_keywords", @"vestorly_topics": @"vestorly_topics", @"categories": @"categories", @"summary": @"summary", @"unparsed_html": @"unparsed_html", @"logo_url": @"logo_url", @"image_url": @"image_url", @"url": @"url", @"external_url": @"external_url", @"tags": @"tags" }];
}

@end
