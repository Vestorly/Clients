#import <Foundation/Foundation.h>
#import "SWGVoid.h"
#import "SWGObject.h"


@interface SWGEventsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGEventsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Read a list of events
 
 This retrieves a list of events objects
 

 
 @param vestorly-auth Authentication token
 

 return type: SWGVoid*
 */
-(NSNumber*) indexWithCompletionBlock :(NSString*) vestorly-auth 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Create a event
 
 This creates an event in the database
 

 
 @param event JSON block of event data
 

 return type: SWGVoid*
 */
-(NSNumber*) createWithCompletionBlock :(NSString*) event 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Read a specific event
 
 This retrieves a specific event document
 

 
 @param vestorly-auth Authentication token
 
 @param _id Id of event
 

 return type: SWGVoid*
 */
-(NSNumber*) showWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Create a event
 
 This creates an event in the database
 

 
 @param _id Id of g
 
 @param event JSON block of event data
 

 return type: SWGVoid*
 */
-(NSNumber*) updateWithCompletionBlock :(NSString*) _id 
     event:(NSString*) event 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    



@end