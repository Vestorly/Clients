#import "SWGMemberReports.h"

@implementation SWGMemberReports
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"member_reports": @"member_reports" }];
}

@end
