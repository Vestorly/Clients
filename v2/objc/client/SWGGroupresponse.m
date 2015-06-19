#import "SWGGroupresponse.h"

@implementation SWGGroupresponse
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"group": @"group" }];
}

+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"group"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

@end
