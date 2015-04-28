#import <Foundation/Foundation.h>
#import "SWGNewsletter.h"
#import "SWGNewsletterInput.h"
#import "SWGObject.h"


@interface SWGNewslettersApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGNewslettersApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all events

 @param vestorly-auth Vestorly Auth Token
 

 return type: SWGNewsletter*
 */
-(NSNumber*) findNewslettersWithCompletionBlock :(NSString*) vestorly-auth 
    
    completionHandler: (void (^)(SWGNewsletter* output, NSError* error))completionBlock;
    


/**

 
 Creates a newsletter

 @param vestorly-auth Vestorly Auth Token
 @param Event Newsletter
 

 return type: SWGNewsletter*
 */
-(NSNumber*) createNewsletterWithCompletionBlock :(NSString*) vestorly-auth 
     Event:(SWGNewsletterInput*) Event 
    
    completionHandler: (void (^)(SWGNewsletter* output, NSError* error))completionBlock;
    


/**

 
 Get a newsletter by ID

 @param vestorly-auth Vestorly Auth Token
 @param _id Mongo ID of event to get
 

 return type: SWGNewsletter*
 */
-(NSNumber*) getNewsletterByIDWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGNewsletter* output, NSError* error))completionBlock;
    


/**

 
 Updates a newsletter

 @param vestorly-auth Vestorly Auth Token
 @param _id Mongo ID of event to update
 @param Event Newsletter
 

 return type: SWGNewsletter*
 */
-(NSNumber*) updateNewsletterByIDWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
     Event:(SWGNewsletterInput*) Event 
    
    completionHandler: (void (^)(SWGNewsletter* output, NSError* error))completionBlock;
    



@end