#import "SWGSources.h"

@implementation SWGSources
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"sources": @"sources" }];
}

@end
