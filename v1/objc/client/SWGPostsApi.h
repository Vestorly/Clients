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
 
 @param filter_by Supports [all/published/unpublished/features/vestorly/newsletter]
 
 @param filter_by_group_id Filter by group id
 
 @param filter_by_newsletter_id Filter by newsletter
 

 return type: SWGVoid*
 */
-(NSNumber*) indexWithCompletionBlock :(NSString*) vestorly-auth 
     filter_by:(NSString*) filter_by 
     filter_by_group_id:(NSString*) filter_by_group_id 
     filter_by_newsletter_id:(NSString*) filter_by_newsletter_id 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Create an post
 
 This creates an post in the database
 

 
 @param vestorly-auth Authentication token
 
 @param advisor_id Id of advisor
 
 @param post JSON block of post data
 

 return type: SWGVoid*
 */
-(NSNumber*) createWithCompletionBlock :(NSString*) vestorly-auth 
     advisor_id:(NSString*) advisor_id 
     post:(NSString*) post 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Read a specific post
 
 This retrieves a specific post object
 

 
 @param vestorly-auth Authentication token
 
 @param _id Id of post
 
 @param advisor_id Id of advisor
 

 return type: SWGVoid*
 */
-(NSNumber*) showWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
     advisor_id:(NSString*) advisor_id 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Update a post
 
 This updates a post in the database
 

 
 @param vestorly-auth Authentication token
 
 @param _id Id of post
 
 @param advisor_id Id of advisor
 
 @param post JSON block of post data
 

 return type: SWGVoid*
 */
-(NSNumber*) updateWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
     advisor_id:(NSString*) advisor_id 
     post:(NSString*) post 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Deletes a post
 
 This deletes a post in the database
 

 
 @param vestorly-auth Authentication token
 
 @param _id Id of advisor
 

 return type: SWGVoid*
 */
-(NSNumber*) destroyWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    



@end