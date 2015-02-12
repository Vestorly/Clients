#import <Foundation/Foundation.h>
#import "SWGVoid.h"


@interface SWGAdvisorsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGAdvisorsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Create an advisor
 This creates an advisor in the database

 @param vestorly-auth Authentication token
 @param advisor JSON block of advisor data
 
 */
-(NSNumber*) createWithCompletionBlock : (NSString*) vestorly-auth
            advisor: (NSString*) advisor
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;

/**

 Read a specific advisor
 This retrieves a specifp advisor object

 @param vestorly-auth Authentication token
 @param _id Id of advisor
 @param filter_by Filtered by [signups/page_views]
 
 */
-(NSNumber*) showWithCompletionBlock : (NSString*) vestorly-auth
            _id: (NSString*) _id
            filter_by: (NSString*) filter_by
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;

/**

 Update a advisor
 This updates a advisor in the database

 @param vestorly-auth Authentication token
 @param _id Id of advisor
 
 */
-(NSNumber*) updateWithCompletionBlock : (NSString*) vestorly-auth
            _id: (NSString*) _id
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;

@end