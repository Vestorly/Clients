#import <Foundation/Foundation.h>
#import "SWGEvents.h"
#import "SWGEventcreateresponse.h"
#import "SWGEventInput.h"
#import "SWGEventresponse.h"
#import "SWGObject.h"


@interface SWGEventsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGEventsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all events

 @param vestorlyAuth Vestorly Auth Token
 

 return type: SWGEvents*
 */
-(NSNumber*) findEventsWithCompletionBlock :(NSString*) vestorlyAuth 
    
    completionHandler: (void (^)(SWGEvents* output, NSError* error))completionBlock;
    


/**

 
 Creates a new event in the system

 @param vestorlyAuth Vestorly Auth Token
 @param event Event
 

 return type: SWGEventcreateresponse*
 */
-(NSNumber*) createEventWithCompletionBlock :(NSString*) vestorlyAuth 
     event:(SWGEventInput*) event 
    
    completionHandler: (void (^)(SWGEventcreateresponse* output, NSError* error))completionBlock;
    


/**

 
 Returns a single event if the user has access

 @param _id Mongo ID of event to fetch
 @param vestorlyAuth Vestorly Auth Token
 

 return type: SWGEventresponse*
 */
-(NSNumber*) findEventByIDWithCompletionBlock :(NSString*) _id 
     vestorlyAuth:(NSString*) vestorlyAuth 
    
    completionHandler: (void (^)(SWGEventresponse* output, NSError* error))completionBlock;
    



@end