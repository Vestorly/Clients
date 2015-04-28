#import <Foundation/Foundation.h>
#import "SWGNewslettersettings.h"
#import "SWGNewslettersettingresponse.h"
#import "SWGNewsletterSettingsInput.h"
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
 

 return type: SWGNewslettersettings*
 */
-(NSNumber*) findNewsletterSettingsWithCompletionBlock :(NSString*) vestorly-auth 
    
    completionHandler: (void (^)(SWGNewslettersettings* output, NSError* error))completionBlock;
    


/**

 
 Returns a single newsletter settings if the user has access

 @param _id Mongo ID of newsletter settings to fetch
 @param vestorly-auth Vestorly Auth Token
 

 return type: SWGNewslettersettingresponse*
 */
-(NSNumber*) findNewsletterSettingsByIDWithCompletionBlock :(NSString*) _id 
     vestorly-auth:(NSString*) vestorly-auth 
    
    completionHandler: (void (^)(SWGNewslettersettingresponse* output, NSError* error))completionBlock;
    


/**

 
 Update a single newsletter setting by ID

 @param _id Mongo ID of newsletter settings to update
 @param vestorly-auth Vestorly Auth Token
 @param newsletter_setting newsletter settings
 

 return type: SWGNewslettersettingresponse*
 */
-(NSNumber*) updateNewsletterSettingsByIDWithCompletionBlock :(NSString*) _id 
     vestorly-auth:(NSString*) vestorly-auth 
     newsletter_setting:(SWGNewsletterSettingsInput*) newsletter_setting 
    
    completionHandler: (void (^)(SWGNewslettersettingresponse* output, NSError* error))completionBlock;
    



@end