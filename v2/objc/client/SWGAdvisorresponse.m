#import "SWGAdvisorresponse.h"

@implementation SWGAdvisorresponse
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"advisor": @"advisor" }];
}

@end
