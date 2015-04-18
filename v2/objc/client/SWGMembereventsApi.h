#import <Foundation/Foundation.h>
#import "SWGMemberEvents.h"
#import "SWGObject.h"


@interface SWGMembereventsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGMembereventsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all MemberEvents

 @param vestorly-auth Vestorly Auth Token
 

 return type: SWGMemberEvents*
 */
-(NSNumber*) findMemberEventsWithCompletionBlock :(NSString*) vestorly-auth 
    
    completionHandler: (void (^)(SWGMemberEvents* output, NSError* error))completionBlock;
    



@end