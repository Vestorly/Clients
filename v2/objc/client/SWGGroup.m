#import "SWGGroup.h"

@implementation SWGGroup
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"name": @"name", @"is_default": @"is_default", @"is_hidden": @"is_hidden", @"new_weekly_mailer_content": @"_new_weekly_mailer_content", @"newsletter_subject": @"_newsletter_subject", @"autopublish": @"autopublish", @"number_articles_per_group": @"number_articles_per_group", @"number_articles_per_newsletter": @"number_articles_per_newsletter" }];
}

@end
