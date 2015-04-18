#import <Foundation/Foundation.h>
#import "SWGEvents.h"
#import "SWGEvent.h"
#import "SWGObject.h"


@interface SWGEventsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGEventsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all events

 @param vestorly_auth Vestorly Auth Token
 

 return type: SWGEvents*
 */
-(NSNumber*) findEventsWithCompletionBlock :(NSString*) vestorly_auth 
    
    completionHandler: (void (^)(SWGEvents* output, NSError* error))completionBlock;
    


/**

 
 Returns a single event if the user has access

 @param _id Mongo ID of event to fetch
 @param vestorly_auth Vestorly Auth Token
 

 return type: SWGEvent*
 */
-(NSNumber*) findEventByIDWithCompletionBlock :(NSString*) _id 
     vestorly_auth:(NSString*) vestorly_auth 
    
    completionHandler: (void (^)(SWGEvent* output, NSError* error))completionBlock;
    


/**

 
 Updates a single event by mongo id

 @param _id Mongo ID of event to update
 @param vestorly_auth Vestorly Auth Token
 @param Event Event
 

 return type: SWGEvent*
 */
-(NSNumber*) updateEventByIDWithCompletionBlock :(NSString*) _id 
     vestorly_auth:(NSString*) vestorly_auth 
     Event:(NSString*) Event 
    
    completionHandler: (void (^)(SWGEvent* output, NSError* error))completionBlock;
    



@end