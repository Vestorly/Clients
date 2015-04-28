#import "SWGNewsletterresponse.h"

@implementation SWGNewsletterresponse
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"newsletter": @"_newsletter" }];
}

@end
