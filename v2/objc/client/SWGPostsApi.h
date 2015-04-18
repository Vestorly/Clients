#import <Foundation/Foundation.h>
#import "SWGPosts.h"
#import "SWGPost.h"
#import "SWGObject.h"


@interface SWGPostsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGPostsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Query all posts

 @param vestorly_auth Vestorly Auth Token
 @param filter_by Filter post by parameters
 

 return type: SWGPosts*
 */
-(NSNumber*) findPostsWithCompletionBlock :(NSString*) vestorly_auth 
     filter_by:(NSString*) filter_by 
    
    completionHandler: (void (^)(SWGPosts* output, NSError* error))completionBlock;
    


/**

 
 Create a new post in the Vestorly Platform

 @param vestorly_auth Vestorly Auth Token
 @param Post Post
 

 return type: SWGPost*
 */
-(NSNumber*) createPostWithCompletionBlock :(NSString*) vestorly_auth 
     Post:(NSString*) Post 
    
    completionHandler: (void (^)(SWGPost* output, NSError* error))completionBlock;
    


/**

 
 Query all posts

 @param vestorly_auth Vestorly Auth Token
 @param _id ID of post to fetch
 @param filter_by Filter post by parameters
 

 return type: SWGPost*
 */
-(NSNumber*) getPostByIDWithCompletionBlock :(NSString*) vestorly_auth 
     _id:(NSString*) _id 
     filter_by:(NSString*) filter_by 
    
    completionHandler: (void (^)(SWGPost* output, NSError* error))completionBlock;
    


/**

 
 Update A Post

 @param vestorly_auth Vestorly Auth Token
 @param _id ID of post to fetch
 @param Post Post
 

 return type: SWGPost*
 */
-(NSNumber*) updatePostByIDWithCompletionBlock :(NSString*) vestorly_auth 
     _id:(NSString*) _id 
     Post:(NSString*) Post 
    
    completionHandler: (void (^)(SWGPost* output, NSError* error))completionBlock;
    



@end