#import "SWGSettings.h"

@implementation SWGSettings
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"company": @"company", @"picture_url": @"pictureUrl", @"website": @"website", @"disclosure": @"disclosure", @"adv_brochure": @"advBrochure", @"slug": @"slug", @"name": @"name", @"orgsetting": @"orgsetting", @"feature": @"feature", @"personalsetting": @"personalsetting" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"company", @"pictureUrl", @"website", @"disclosure", @"advBrochure", @"slug", @"name", @"orgsetting", @"feature", @"personalsetting"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
