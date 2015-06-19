#import <Foundation/Foundation.h>
#import "SWGPosts.h"
#import "SWGPostInput.h"
#import "SWGPostresponse.h"
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

 @param vestorlyAuth Vestorly Auth Token
 @param textQuery Filter post by parameters
 @param externalUrl Filter by External URL
 @param isPublished Filter by is_published boolean
 

 return type: SWGPosts*
 */
-(NSNumber*) findPostsWithCompletionBlock :(NSString*) vestorlyAuth 
     textQuery:(NSString*) textQuery 
     externalUrl:(NSString*) externalUrl 
     isPublished:(NSString*) isPublished 
    
    completionHandler: (void (^)(SWGPosts* output, NSError* error))completionBlock;
    


/**

 
 Create a new post in the Vestorly Platform

 @param vestorlyAuth Vestorly Auth Token
 @param post Post you want to create
 

 return type: SWGPostresponse*
 */
-(NSNumber*) createPostWithCompletionBlock :(NSString*) vestorlyAuth 
     post:(SWGPostInput*) post 
    
    completionHandler: (void (^)(SWGPostresponse* output, NSError* error))completionBlock;
    


/**

 
 Query all posts

 @param vestorlyAuth Vestorly Auth Token
 @param _id ID of post to fetch
 

 return type: SWGPostresponse*
 */
-(NSNumber*) getPostByIDWithCompletionBlock :(NSString*) vestorlyAuth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGPostresponse* output, NSError* error))completionBlock;
    


/**

 
 Update A Post

 @param vestorlyAuth Vestorly Auth Token
 @param _id id of post to update
 @param post Post you want to update
 

 return type: SWGPostresponse*
 */
-(NSNumber*) updatePostByIDWithCompletionBlock :(NSString*) vestorlyAuth 
     _id:(NSString*) _id 
     post:(SWGPost*) post 
    
    completionHandler: (void (^)(SWGPostresponse* output, NSError* error))completionBlock;
    



@end