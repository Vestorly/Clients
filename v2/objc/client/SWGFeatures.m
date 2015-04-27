#import "SWGFeatures.h"

@implementation SWGFeatures
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id" }];
}

@end
