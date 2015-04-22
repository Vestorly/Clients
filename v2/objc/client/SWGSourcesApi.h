#import <Foundation/Foundation.h>
#import "SWGSources.h"
#import "SWGSourceInput.h"
#import "SWGSource.h"
#import "SWGObject.h"


@interface SWGSourcesApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGSourcesApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all sources

 @param vestorly-auth Vestorly Auth Token
 

 return type: SWGSources*
 */
-(NSNumber*) findSourcesWithCompletionBlock :(NSString*) vestorly-auth 
    
    completionHandler: (void (^)(SWGSources* output, NSError* error))completionBlock;
    


/**

 
 Create source

 @param vestorly-auth Vestorly Auth Token
 @param source Source
 

 return type: SWGSource*
 */
-(NSNumber*) createSourceWithCompletionBlock :(NSString*) vestorly-auth 
     source:(SWGSourceInput*) source 
    
    completionHandler: (void (^)(SWGSource* output, NSError* error))completionBlock;
    


/**

 
 Get Source By ID

 @param vestorly-auth Vestorly Auth Token
 @param _id ID of source to fetch
 

 return type: SWGSource*
 */
-(NSNumber*) getSourceByIDWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGSource* output, NSError* error))completionBlock;
    


/**

 
 Update Source By ID

 @param vestorly-auth Vestorly Auth Token
 @param _id ID of source to fetch
 @param source Source
 

 return type: SWGSource*
 */
-(NSNumber*) UpdateSourceByIDWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
     source:(SWGSourceInput*) source 
    
    completionHandler: (void (^)(SWGSource* output, NSError* error))completionBlock;
    



@end