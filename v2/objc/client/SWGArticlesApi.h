#import <Foundation/Foundation.h>
#import "SWGVoid.h"
#import "SWGObject.h"


@interface SWGArticlesApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGArticlesApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Read a list of articles
 
 This retrieves a list of articles objects
 

 
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

 Read a specific article
 
 This retrieves a specific article document
 

 
 @param vestorly-auth Authentication token
 
 @param _id Id of article
 

 return type: SWGVoid*
 */
-(NSNumber*) showWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Update an article
 
 This updates an article in the database
 

 
 @param vestorly-auth Authentication token
 
 @param article JSON block of article data
 

 return type: SWGVoid*
 */
-(NSNumber*) updateWithCompletionBlock :(NSString*) vestorly-auth 
     article:(NSString*) article 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    



@end