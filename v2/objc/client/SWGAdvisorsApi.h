#import <Foundation/Foundation.h>
#import "SWGVoid.h"
#import "SWGObject.h"


@interface SWGAdvisorsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGAdvisorsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Read a specific advisor
 
 This retrieves a specific article advisor
 

 
 @param vestorly-auth Authentication token
 
 @param _id Id of advisor
 

 return type: SWGVoid*
 */
-(NSNumber*) showWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    



@end