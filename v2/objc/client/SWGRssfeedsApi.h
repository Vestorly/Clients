#import <Foundation/Foundation.h>
#import "SWGVoid.h"
#import "SWGObject.h"


@interface SWGRssfeedsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGRssfeedsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Read a list of rss feed
 
 This retrieves a list of rss feed objects
 

 
 @param vestorly-auth Authentication token
 
 @param ids Return rss feed with list of IDs provided
 

 return type: SWGVoid*
 */
-(NSNumber*) indexWithCompletionBlock :(NSString*) vestorly-auth 
     ids:(NSString*) ids 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Create an post
 
 This creates an post in the database
 

 
 @param rss_feed JSON block of rss feed data
 

 return type: SWGVoid*
 */
-(NSNumber*) createWithCompletionBlock :(NSString*) rss_feed 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Retreive a single rss feed
 
 Retrieve a single rss feed from the database
 

 
 @param vestorly-auth Authentication token
 
 @param _id Id of rss feed
 

 return type: SWGVoid*
 */
-(NSNumber*) showWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Create an advisor
 
 This creates an advisor in the database
 

 
 @param _id Id of post
 
 @param rss_feed JSON block of rss feed data
 

 return type: SWGVoid*
 */
-(NSNumber*) updateWithCompletionBlock :(NSString*) _id 
     rss_feed:(NSString*) rss_feed 
    
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