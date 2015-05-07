#import "SWGTruncatedMember.h"

@implementation SWGTruncatedMember
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"first_name": @"first_name", @"last_name": @"last_name", @"email": @"email", @"picture_url": @"picture_url", @"added_on": @"added_on" }];
}

@end
