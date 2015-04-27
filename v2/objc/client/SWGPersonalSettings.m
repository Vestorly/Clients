#import "SWGPersonalSettings.h"

@implementation SWGPersonalSettings
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id" }];
}

@end
