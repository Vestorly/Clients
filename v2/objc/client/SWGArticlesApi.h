#import <Foundation/Foundation.h>
#import "SWGArticles.h"
#import "SWGArticle.h"
#import "SWGObject.h"


@interface SWGArticlesApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGArticlesApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all articles

 @param vestorly_auth Vestorly Auth Token
 @param limit Limit on the number of articles to return
 @param text_query Search query parameter
 

 return type: SWGArticles*
 */
-(NSNumber*) findArticlesWithCompletionBlock :(NSString*) vestorly_auth 
     limit:(NSNumber*) limit 
     text_query:(NSString*) text_query 
    
    completionHandler: (void (^)(SWGArticles* output, NSError* error))completionBlock;
    


/**

 
 Returns a single article

 @param _id Article Id to fetch
 

 return type: SWGArticle*
 */
-(NSNumber*) findArticleByIDWithCompletionBlock :(NSString*) _id 
    
    completionHandler: (void (^)(SWGArticle* output, NSError* error))completionBlock;
    



@end