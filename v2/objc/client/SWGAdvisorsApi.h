#import <Foundation/Foundation.h>
#import "SWGAdvisors.h"
#import "SWGAdvisor.h"
#import "SWGObject.h"


@interface SWGAdvisorsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGAdvisorsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all advisors

 @param vestorly-auth Vestorly Auth Token
 

 return type: SWGAdvisors*
 */
-(NSNumber*) findAdvisorsWithCompletionBlock :(NSString*) vestorly-auth 
    
    completionHandler: (void (^)(SWGAdvisors* output, NSError* error))completionBlock;
    


/**

 
 Returns a single advisor if the user has access

 @param _id Mongo ID of advisor to fetch
 @param vestorly-auth Vestorly Auth Token
 

 return type: SWGAdvisor*
 */
-(NSNumber*) findAdvisorByIDWithCompletionBlock :(NSString*) _id 
     vestorly-auth:(NSString*) vestorly-auth 
    
    completionHandler: (void (^)(SWGAdvisor* output, NSError* error))completionBlock;
    



@end