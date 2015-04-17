#import <Foundation/Foundation.h>
#import "SWGArticle.h"
#import "SWGObject.h"


@interface SWGArticleApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGArticleApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns a single article

 @param _id Article Id to fetch
 

 return type: SWGArticle*
 */
-(NSNumber*) findArticleByIDWithCompletionBlock :(NSString*) _id 
    
    completionHandler: (void (^)(SWGArticle* output, NSError* error))completionBlock;
    



@end