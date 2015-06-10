#import "SWGMemberReport.h"

@implementation SWGMemberReport
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"day": @"day", @"event_count": @"eventCount", @"originator_group_id": @"originatorGroupId", @"parent_originator_id": @"parentOriginatorId", @"source": @"source", @"type": @"type", @"year": @"year" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"day", @"eventCount", @"originatorGroupId", @"parentOriginatorId", @"source", @"type", @"year"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
