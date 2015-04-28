#import "SWGNewslettersettings.h"

@implementation SWGNewslettersettings
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"newletter_settings": @"_newletter_settings" }];
}

@end
