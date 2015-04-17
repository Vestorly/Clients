#import <Foundation/Foundation.h>
#import "SWGSession.h"
#import "SWGObject.h"


@interface SWGSessionApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGSessionApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Login To Vestorly Platform

 @param username Username in the vestorly platform
 @param password Password in Vestorly Platform
 

 return type: SWGSession*
 */
-(NSNumber*) loginWithCompletionBlock :(NSString*) username 
     password:(NSString*) password 
    
    completionHandler: (void (^)(SWGSession* output, NSError* error))completionBlock;
    


/**

 
 Logout

 @param vestorly-auth Authenication token
 

 return type: SWGSession*
 */
-(NSNumber*) logoutWithCompletionBlock :(NSString*) vestorly-auth 
    
    completionHandler: (void (^)(SWGSession* output, NSError* error))completionBlock;
    



@end