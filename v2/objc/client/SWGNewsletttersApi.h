#import <Foundation/Foundation.h>
#import "SWGNewsletter.h"
#import "SWGObject.h"


@interface SWGNewsletttersApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGNewsletttersApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all newsletters

 @param vestorly-auth Vestorly Auth Token
 

 return type: SWGNewsletter*
 */
-(NSNumber*) findNewslettersWithCompletionBlock :(NSString*) vestorly-auth 
    
    completionHandler: (void (^)(SWGNewsletter* output, NSError* error))completionBlock;
    



@end