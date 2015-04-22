#import "SWGAdvisor.h"

@implementation SWGAdvisor
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"id": @"_id", @"name": @"name", @"tag": @"tag" }];
}

@end
