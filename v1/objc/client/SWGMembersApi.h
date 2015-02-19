#import <Foundation/Foundation.h>
#import "SWGVoid.h"
#import "SWGObject.h"


@interface SWGMembersApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGMembersApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Read member lead data
 
 This lists all the active members for a given advisor
 

 
 @param vestorly-auth Authentication token
 
 @param advisor_id Id of Advisor
 
 @param search Fuzzy search by name
 
 @param sorted_by Sort by: first_name, last_name, content_views, shares, posts_read, signed_up, last_active
 
 @param sorted_order Sort order: asc, desc
 

 return type: SWGVoid*
 */
-(NSNumber*) indexWithCompletionBlock :(NSString*) vestorly-auth 
     advisor_id:(NSString*) advisor_id 
     search:(NSString*) search 
     sorted_by:(NSString*) sorted_by 
     sorted_order:(NSString*) sorted_order 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Create a member
 
 This creates a member in the database
 

 
 @param vestorly-auth Authentication token
 
 @param advisor_id Id of advisor
 
 @param member JSON block of member data
 

 return type: SWGVoid*
 */
-(NSNumber*) createWithCompletionBlock :(NSString*) vestorly-auth 
     advisor_id:(NSString*) advisor_id 
     member:(NSString*) member 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Read a specific member
 
 This retrieves a specifp ic member object
 

 
 @param vestorly-auth Authentication token
 
 @param advisor_id Id of advisor
 
 @param _id Id of member
 

 return type: SWGVoid*
 */
-(NSNumber*) showWithCompletionBlock :(NSString*) vestorly-auth 
     advisor_id:(NSString*) advisor_id 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Update a member
 
 This updates a member in the database
 

 
 @param vestorly-auth Authentication token
 
 @param advisor_id Id of advisor
 
 @param _id Id of member
 
 @param member JSON block of member data
 

 return type: SWGVoid*
 */
-(NSNumber*) updateWithCompletionBlock :(NSString*) vestorly-auth 
     advisor_id:(NSString*) advisor_id 
     _id:(NSString*) _id 
     member:(NSString*) member 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    


/**

 Deletes a member
 
 This deletes a member in the database
 

 
 @param vestorly-auth Authentication token
 
 @param advisor_id Id of advisor
 
 @param _id Id of member
 

 return type: SWGVoid*
 */
-(NSNumber*) destroyWithCompletionBlock :(NSString*) vestorly-auth 
     advisor_id:(NSString*) advisor_id 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock;
    



@end