#import <Foundation/Foundation.h>
#import "SWGPosts.h"
#import "SWGPost.h"
#import "SWGPostInput.h"
#import "SWGObject.h"


@interface SWGPostsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGPostsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Query all posts

 @param vestorly-auth Vestorly Auth Token
 @param filter_by Filter post by parameters
 

 return type: SWGPosts*
 */
-(NSNumber*) findPostsWithCompletionBlock :(NSString*) vestorly-auth 
     filter_by:(NSString*) filter_by 
    
    completionHandler: (void (^)(SWGPosts* output, NSError* error))completionBlock;
    


/**

 
 Create a new post in the Vestorly Platform

 @param vestorly-auth Vestorly Auth Token
 @param post Post you want to create
 

 return type: SWGPost*
 */
-(NSNumber*) createPostWithCompletionBlock :(NSString*) vestorly-auth 
     post:(SWGPostInput*) post 
    
    completionHandler: (void (^)(SWGPost* output, NSError* error))completionBlock;
    


/**

 
 Query all posts

 @param vestorly-auth Vestorly Auth Token
 @param _id ID of post to fetch
 

 return type: SWGPost*
 */
-(NSNumber*) getPostByIDWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGPost* output, NSError* error))completionBlock;
    


/**

 
 Update A Post

 @param vestorly-auth Vestorly Auth Token
 @param _id id of post to fetch
 @param post Post you want to update
 

 return type: SWGPost*
 */
-(NSNumber*) updatePostByIDWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
     post:(SWGPostInput*) post 
    
    completionHandler: (void (^)(SWGPost* output, NSError* error))completionBlock;
    



@end