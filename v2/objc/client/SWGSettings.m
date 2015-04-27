#import "SWGSettings.h"

@implementation SWGSettings
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"company": @"company", @"picture_url": @"picture_url", @"website": @"website", @"disclosure": @"disclosure", @"adv_brochure": @"adv_brochure", @"slug": @"slug", @"name": @"name", @"orgsetting": @"orgsetting", @"feature": @"feature", @"personalsetting": @"personalsetting" }];
}

@end
