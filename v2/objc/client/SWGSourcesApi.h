#import <Foundation/Foundation.h>
#import "SWGVoid.h"
#import "SWGObject.h"


@interface SWGSourcesApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGSourcesApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Read a list of sources
 
 This retrieves a list of sources objects
 

 
 @param vestorly-auth Authentication token
 
 @param ids Return sources with list of IDs provided
 

 return type: SWGVoid*
 */
-(NSNumber*) indexWithCompletionBlock :(NSString*) vestorly-auth 
     ids:(NSString*) ids 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Read a specific source
 
 This retrieves a specific source document
 

 
 @param vestorly-auth Authentication token
 
 @param _id Id of source
 

 return type: SWGVoid*
 */
-(NSNumber*) showWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Create a source
 
 This creates an source in the database
 

 
 @param _id Id of g
 
 @param source JSON block of source data
 

 return type: SWGVoid*
 */
-(NSNumber*) updateWithCompletionBlock :(NSString*) _id 
     source:(NSString*) source 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    



@end