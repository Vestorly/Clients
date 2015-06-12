#import <Foundation/Foundation.h>
#import "SWGNewsletterSettings.h"
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

 @param vestorlyAuth Vestorly Auth Token
 

 return type: SWGNewsletterSettings*
 */
-(NSNumber*) findNewsletterSettingsWithCompletionBlock :(NSString*) vestorlyAuth 
    
    completionHandler: (void (^)(SWGNewsletterSettings* output, NSError* error))completionBlock;
    


/**

 
 Returns a single newsletter settings if the user has access

 @param _id Mongo ID of newsletter settings to fetch
 @param vestorlyAuth Vestorly Auth Token
 

 return type: SWGNewslettersettingresponse*
 */
-(NSNumber*) findNewsletterSettingsByIDWithCompletionBlock :(NSString*) _id 
     vestorlyAuth:(NSString*) vestorlyAuth 
    
    completionHandler: (void (^)(SWGNewslettersettingresponse* output, NSError* error))completionBlock;
    


/**

 
 Update a single newsletter setting by ID

 @param _id Mongo ID of newsletter settings to update
 @param vestorlyAuth Vestorly Auth Token
 @param newsletterSetting newsletter settings
 

 return type: SWGNewslettersettingresponse*
 */
-(NSNumber*) updateNewsletterSettingsByIDWithCompletionBlock :(NSString*) _id 
     vestorlyAuth:(NSString*) vestorlyAuth 
     newsletterSetting:(SWGNewsletterSettingsInput*) newsletterSetting 
    
    completionHandler: (void (^)(SWGNewslettersettingresponse* output, NSError* error))completionBlock;
    



@end