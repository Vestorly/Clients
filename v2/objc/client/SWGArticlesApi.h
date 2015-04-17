#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SWGArticlesApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGArticlesApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all articles

 @param vestorly-auth Vestorly Auth Token
 @param limit Limit on the number of articles to return
 @param text_query Search query parameter
 

 return type: 
 */
-(NSNumber*) findArticlesWithCompletionBlock :(NSString*) vestorly-auth 
     limit:(NSNumber*) limit 
     text_query:(NSString*) text_query 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;



@end