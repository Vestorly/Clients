#import "SWGMeta.h"

@implementation SWGMeta
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"sort_order": @"sort_order", @"more_results": @"more_results", @"message": @"message", @"sorted_by": @"sorted_by" }];
}

@end
