#import "SWGGroup.h"

@implementation SWGGroup
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"name": @"name", @"is_default": @"isDefault", @"is_hidden": @"isHidden", @"new_weekly_mailer_content": @"newWeeklyMailerContent", @"newsletter_subject": @"newsletterSubject", @"autopublish": @"autopublish", @"number_articles_per_group": @"numberArticlesPerGroup", @"number_articles_per_newsletter": @"numberArticlesPerNewsletter" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"name", @"isDefault", @"isHidden", @"newWeeklyMailerContent", @"newsletterSubject", @"autopublish", @"numberArticlesPerGroup", @"numberArticlesPerNewsletter"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
