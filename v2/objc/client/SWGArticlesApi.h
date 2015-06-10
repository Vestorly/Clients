#import <Foundation/Foundation.h>
#import "SWGArticles.h"
#import "SWGArticleresponse.h"
#import "SWGObject.h"


@interface SWGArticlesApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGArticlesApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all articles

 @param vestorlyAuth Vestorly Auth Token
 @param limit Limit on the number of articles to return
 @param textQuery Search query parameter
 @param sortDirection Direction of sort (used with sort_by parameter)
 @param sortBy Field on model to sort by
 

 return type: SWGArticles*
 */
-(NSNumber*) findArticlesWithCompletionBlock :(NSString*) vestorlyAuth 
     limit:(NSNumber*) limit 
     textQuery:(NSString*) textQuery 
     sortDirection:(NSString*) sortDirection 
     sortBy:(NSString*) sortBy 
    
    completionHandler: (void (^)(SWGArticles* output, NSError* error))completionBlock;
    


/**

 
 Returns a single article

 @param vestorlyAuth Vestorly Auth Token
 @param _id Article Id to fetch
 

 return type: SWGArticleresponse*
 */
-(NSNumber*) findArticleByIDWithCompletionBlock :(NSString*) vestorlyAuth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGArticleresponse* output, NSError* error))completionBlock;
    



@end