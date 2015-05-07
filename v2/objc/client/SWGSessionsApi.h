#import <Foundation/Foundation.h>
#import "SWGSession.h"
#import "SWGSessionLogoutResponse.h"
#import "SWGObject.h"


@interface SWGSessionsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGSessionsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
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

 
 Logout of the vestorly platform

 @param vestorly-auth Authenication token
 @param _id ID of pet to session
 

 return type: SWGSessionLogoutResponse*
 */
-(NSNumber*) logoutWithCompletionBlock :(NSString*) vestorly-auth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGSessionLogoutResponse* output, NSError* error))completionBlock;
    



@end