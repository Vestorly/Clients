#import <Foundation/Foundation.h>
#import "SWGAdvisorresponse.h"
#import "SWGObject.h"


@interface SWGAdvisorsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGAdvisorsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns a single advisors

 @param vestorly-auth Vestorly Auth Token
 @param _id Advisor Id to fetch
 

 return type: SWGAdvisorresponse*
 */
-(NSNumber*) findAdvisorByIDWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGAdvisorresponse* output, NSError* error))completionBlock;
    



@end