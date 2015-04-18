#import <Foundation/Foundation.h>
#import "SWGNewsletterSettings.h"
#import "SWGObject.h"


@interface SWGNewslettersettingsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGNewslettersettingsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all newsletter settings

 @param vestorly_auth Vestorly Auth Token
 

 return type: SWGNewsletterSettings*
 */
-(NSNumber*) findNewsletterSettingsWithCompletionBlock :(NSString*) vestorly_auth 
    
    completionHandler: (void (^)(SWGNewsletterSettings* output, NSError* error))completionBlock;
    


/**

 
 Update a single newsletter setting by ID

 @param vestorly_auth Vestorly Auth Token
 @param newsletter_settings newsletter settings
 

 return type: SWGNewsletterSettings*
 */
-(NSNumber*) updateNewsletterSettingsByIDWithCompletionBlock :(NSString*) vestorly_auth 
     newsletter_settings:(NSString*) newsletter_settings 
    
    completionHandler: (void (^)(SWGNewsletterSettings* output, NSError* error))completionBlock;
    


/**

 
 Returns a single newsletter settings if the user has access

 @param _id Mongo ID of newsletter settings to fetch
 @param vestorly_auth Vestorly Auth Token
 

 return type: SWGNewsletterSettings*
 */
-(NSNumber*) findNewsletterSettingsByIDWithCompletionBlock :(NSString*) _id 
     vestorly_auth:(NSString*) vestorly_auth 
    
    completionHandler: (void (^)(SWGNewsletterSettings* output, NSError* error))completionBlock;
    



@end