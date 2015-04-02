#import <Foundation/Foundation.h>
#import "SWGVoid.h"
#import "SWGObject.h"


@interface SWGPostsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGPostsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Read a list of posts
 
 This retrieves a list of post objects
 

 
 @param vestorly-auth Authentication token
 
 @param is_published Filter by published articles
 
 @param external_url_source Filter by posts with external URL source
 
 @param ids Return posts with list of IDs provided
 

 return type: SWGVoid*
 */
-(NSNumber*) indexWithCompletionBlock :(NSString*) vestorly-auth 
     is_published:(NSString*) is_published 
     external_url_source:(NSString*) external_url_source 
     ids:(NSString*) ids 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Create an post
 
 This creates an post in the database
 

 
 @param post JSON block of post data
 

 return type: SWGVoid*
 */
-(NSNumber*) createWithCompletionBlock :(NSString*) post 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Retreive a single post
 
 Retrieve a single post from the database
 

 
 @param vestorly-auth Authentication token
 
 @param _id Id of post
 

 return type: SWGVoid*
 */
-(NSNumber*) showWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Create an advisor
 
 This creates an advisor in the database
 

 
 @param _id Id of post
 
 @param post JSON block of post data
 

 return type: SWGVoid*
 */
-(NSNumber*) updateWithCompletionBlock :(NSString*) _id 
     post:(NSString*) post 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Destroy a post
 
 This destroys a post in the database
 

 
 @param _id Id of pow5
 

 return type: SWGVoid*
 */
-(NSNumber*) destroyWithCompletionBlock :(NSString*) _id 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    



@end