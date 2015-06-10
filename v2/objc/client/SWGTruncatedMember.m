#import "SWGTruncatedMember.h"

@implementation SWGTruncatedMember
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"first_name": @"firstName", @"last_name": @"lastName", @"email": @"email", @"picture_url": @"pictureUrl", @"added_on": @"addedOn" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"_id", @"firstName", @"lastName", @"email", @"pictureUrl", @"addedOn"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
