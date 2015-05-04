#import "SWGMemberresponse.h"

@implementation SWGMemberresponse
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"member": @"member" }];
}

@end
