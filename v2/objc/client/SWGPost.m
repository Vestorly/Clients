#import "SWGPost.h"

@implementation SWGPost
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"title": @"title", @"post_date": @"post_date", @"body": @"body", @"comment": @"comment", @"client_only": @"client_only", @"attachment": @"attachment", @"video": @"video", @"img": @"img", @"image_url": @"image_url", @"img_compressed": @"img_compressed", @"img_changed": @"img_changed", @"topic": @"topic" }];
}

@end
