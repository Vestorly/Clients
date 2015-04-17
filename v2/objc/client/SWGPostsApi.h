#import <Foundation/Foundation.h>
#import "SWGPost.h"
#import "SWGObject.h"


@interface SWGPostsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGPostsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Create a new post in the Vestorly Platform

 @param Post Post
 

 return type: SWGPost*
 */
-(NSNumber*) createPostWithCompletionBlock :(NSString*) Post 
    
    completionHandler: (void (^)(SWGPost* output, NSError* error))completionBlock;
    



@end