#import <Foundation/Foundation.h>
#import "SWGNewsletters.h"
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

 
 Returns all newsletters

 @param vestorlyAuth Vestorly Auth Token
 

 return type: SWGNewsletters*
 */
-(NSNumber*) findNewslettersWithCompletionBlock :(NSString*) vestorlyAuth 
    
    completionHandler: (void (^)(SWGNewsletters* output, NSError* error))completionBlock;
    


/**

 
 Get a newsletter by ID

 @param vestorlyAuth Vestorly Auth Token
 @param _id Mongo ID of event to get
 

 return type: SWGNewsletterresponse*
 */
-(NSNumber*) getNewsletterByIDWithCompletionBlock :(NSString*) vestorlyAuth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGNewsletterresponse* output, NSError* error))completionBlock;
    


/**

 
 Updates a newsletter

 @param vestorlyAuth Vestorly Auth Token
 @param _id Mongo ID of event to update
 @param newsletter Newsletter
 

 return type: SWGNewsletterresponse*
 */
-(NSNumber*) updateNewsletterByIDWithCompletionBlock :(NSString*) vestorlyAuth 
     _id:(NSString*) _id 
     newsletter:(SWGNewsletterInput*) newsletter 
    
    completionHandler: (void (^)(SWGNewsletterresponse* output, NSError* error))completionBlock;
    



@end