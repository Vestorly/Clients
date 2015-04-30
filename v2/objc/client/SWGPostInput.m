#import "SWGPostInput.h"

@implementation SWGPostInput
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"title": @"title", @"post_date": @"post_date", @"body": @"body", @"comment": @"comment", @"client_only": @"client_only", @"attachment": @"attachment", @"video": @"video", @"img": @"img", @"image_url": @"image_url", @"img_compressed": @"img_compressed", @"img_changed": @"img_changed", @"topic": @"topic" }];
}

@end
