#import "SWGNewsletterSettingsInput.h"

@implementation SWGNewsletterSettingsInput
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"email_status": @"email_status", @"twitter_status": @"twitter_status", @"linkedin_status": @"linkedin_status" }];
}

@end
