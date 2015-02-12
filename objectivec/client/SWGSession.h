#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SWGSession : SWGObject

@property(nonatomic) NSString* _id;  /* Id of session  */
- (id) _id: (NSString*) _id;
       
- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
