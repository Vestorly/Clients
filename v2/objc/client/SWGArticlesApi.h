#import <Foundation/Foundation.h>
#import "SWGArticles.h"
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
 @param suitability_score Sort by suitability score (true or false)
 @param all_query Query all articles
 

 return type: SWGArticles*
 */
-(NSNumber*) findArticlesWithCompletionBlock :(NSString*) vestorly-auth 
     limit:(NSNumber*) limit 
     text_query:(NSString*) text_query 
     suitability_score:(NSString*) suitability_score 
     all_query:(NSString*) all_query 
    
    completionHandler: (void (^)(SWGArticles* output, NSError* error))completionBlock;
    



@end