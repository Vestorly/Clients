#import <Foundation/Foundation.h>
#import "SWGAdvisor.h"
#import "SWGObject.h"


@interface SWGAdvisorsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGAdvisorsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns a single advisor given their ID

 @param vestorlyAuth Vestorly Auth Token
 @param _id Advisor Id to fetch
 

 return type: SWGAdvisor*
 */
-(NSNumber*) findAdvisorByIDWithCompletionBlock :(NSString*) vestorlyAuth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGAdvisor* output, NSError* error))completionBlock;
    



@end