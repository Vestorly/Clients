#import <Foundation/Foundation.h>
#import "SWGVoid.h"


@interface SWGSessionmanagementApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGSessionmanagementApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Authenticate and signs in user
 This retrieves a list of group objects

 @param login_with_email_only Login to application by email only
 @param create_account Create an account
 
 */
-(NSNumber*) sign_inWithCompletionBlock : (NSNumber*) login_with_email_only
            create_account: (NSNumber*) create_account
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;

/**

 De-Authenticate and signs a user out of the application
 This retrieves a list of group objects

 
 */
-(NSNumber*) sign_outWithCompletionBlock :
(void (^)(SWGVoid* output, NSError* error))completionBlock;

@end