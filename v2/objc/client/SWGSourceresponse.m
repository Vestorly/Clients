#import "SWGSourceresponse.h"

@implementation SWGSourceresponse
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"source": @"source" }];
}

@end
