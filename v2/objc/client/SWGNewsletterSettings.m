#import "SWGNewsletterSettings.h"

@implementation SWGNewsletterSettings
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"email_status": @"email_status", @"twitter_status": @"twitter_status", @"linkedin_status": @"linkedin_status", @"email_hour": @"email_hour", @"twitter_hour": @"twitter_hour", @"linkedin_hour": @"linkedin_hour", @"facebook_hour": @"facebook_hour" }];
}

@end
