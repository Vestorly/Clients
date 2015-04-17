#import "SWGNewsletters.h"

@implementation SWGNewsletters
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"newletters": @"_newletters" }];
}

@end
