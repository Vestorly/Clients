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

 @param vestorly-auth Vestorly Auth Token
 

 return type: SWGNewsletterSettings*
 */
-(NSNumber*) findNewsletterSettingsWithCompletionBlock :(NSString*) vestorly-auth 
    
    completionHandler: (void (^)(SWGNewsletterSettings* output, NSError* error))completionBlock;
    


/**

 
 Update a single newsletter setting by ID

 @param vestorly-auth Vestorly Auth Token
 @param newsletter_settings newsletter settings
 

 return type: SWGNewsletterSettings*
 */
-(NSNumber*) updateNewsletterSettingsByIDWithCompletionBlock :(NSString*) vestorly-auth 
     newsletter_settings:(NSString*) newsletter_settings 
    
    completionHandler: (void (^)(SWGNewsletterSettings* output, NSError* error))completionBlock;
    


/**

 
 Returns a single newsletter settings if the user has access

 @param _id Mongo ID of newsletter settings to fetch
 @param vestorly-auth Vestorly Auth Token
 

 return type: SWGNewsletterSettings*
 */
-(NSNumber*) findNewsletterSettingsByIDWithCompletionBlock :(NSString*) _id 
     vestorly-auth:(NSString*) vestorly-auth 
    
    completionHandler: (void (^)(SWGNewsletterSettings* output, NSError* error))completionBlock;
    



@end