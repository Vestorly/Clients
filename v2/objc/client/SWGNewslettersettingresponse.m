#import "SWGNewslettersettingresponse.h"

@implementation SWGNewslettersettingresponse
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"newsletter_setting": @"_newsletter_setting" }];
}

@end
