#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SWGSourcesApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGSourcesApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all sources

 @param vestorly-auth Vestorly Auth Token
 

 return type: 
 */
-(NSNumber*) findSourcesWithCompletionBlock :(NSString*) vestorly-auth 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;



@end