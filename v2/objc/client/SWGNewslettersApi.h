#import <Foundation/Foundation.h>
#import "SWGNewsletters.h"
#import "SWGNewsletter.h"
#import "SWGObject.h"


@interface SWGNewslettersApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGNewslettersApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all newsletters

 @param vestorly_auth Vestorly Auth Token
 

 return type: SWGNewsletters*
 */
-(NSNumber*) findNewslettersWithCompletionBlock :(NSString*) vestorly_auth 
    
    completionHandler: (void (^)(SWGNewsletters* output, NSError* error))completionBlock;
    


/**

 
 Returns newsletter by ID

 @param vestorly_auth Vestorly Auth Token
 @param _id ID of newsletter to fetch
 

 return type: SWGNewsletter*
 */
-(NSNumber*) getNewsletterByIDWithCompletionBlock :(NSString*) vestorly_auth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGNewsletter* output, NSError* error))completionBlock;
    


/**

 
 Update newsletter by ID

 @param vestorly_auth Vestorly Auth Token
 @param _id ID of newsletter to fetch
 @param Newsletter Newsletter
 

 return type: SWGNewsletter*
 */
-(NSNumber*) updateNewsletterWithCompletionBlock :(NSString*) vestorly_auth 
     _id:(NSString*) _id 
     Newsletter:(NSString*) Newsletter 
    
    completionHandler: (void (^)(SWGNewsletter* output, NSError* error))completionBlock;
    



@end