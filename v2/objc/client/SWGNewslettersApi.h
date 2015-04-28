#import <Foundation/Foundation.h>
#import "SWGNewsletter.h"
#import "SWGNewsletterresponse.h"
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
 @param newsletter Newsletter
 

 return type: SWGNewsletterresponse*
 */
-(NSNumber*) createNewsletterWithCompletionBlock :(NSString*) vestorly-auth 
     newsletter:(SWGNewsletterInput*) newsletter 
    
    completionHandler: (void (^)(SWGNewsletterresponse* output, NSError* error))completionBlock;
    


/**

 
 Get a newsletter by ID

 @param vestorly-auth Vestorly Auth Token
 @param _id Mongo ID of event to get
 

 return type: SWGNewsletterresponse*
 */
-(NSNumber*) getNewsletterByIDWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGNewsletterresponse* output, NSError* error))completionBlock;
    


/**

 
 Updates a newsletter

 @param vestorly-auth Vestorly Auth Token
 @param _id Mongo ID of event to update
 @param newsletter Newsletter
 

 return type: SWGNewsletterresponse*
 */
-(NSNumber*) updateNewsletterByIDWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
     newsletter:(SWGNewsletterInput*) newsletter 
    
    completionHandler: (void (^)(SWGNewsletterresponse* output, NSError* error))completionBlock;
    



@end