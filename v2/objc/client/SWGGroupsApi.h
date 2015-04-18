#import <Foundation/Foundation.h>
#import "SWGGroups.h"
#import "SWGGroup.h"
#import "SWGErrorModel.h"
#import "SWGGroupInput.h"
#import "SWGObject.h"


@interface SWGGroupsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGGroupsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all groups

 @param vestorly_auth Vestorly Auth Token
 

 return type: SWGGroups*
 */
-(NSNumber*) findGroupsWithCompletionBlock :(NSString*) vestorly_auth 
    
    completionHandler: (void (^)(SWGGroups* output, NSError* error))completionBlock;
    


/**

 
 Returns a single group if user has access

 @param vestorly_auth Vestorly Auth Token
 @param _id Mongo ID of group to fetch
 

 return type: SWGGroup*
 */
-(NSNumber*) findGroupByIDWithCompletionBlock :(NSString*) vestorly_auth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGGroup* output, NSError* error))completionBlock;
    


/**

 
 Creates a new Group

 @param group Group to add
 

 return type: SWGGroupInput*
 */
-(NSNumber*) addGroupWithCompletionBlock :(SWGGroup*) group 
    
    completionHandler: (void (^)(SWGGroupInput* output, NSError* error))completionBlock;
    


/**

 
 Creates a new Group

 @param group Group to add
 

 return type: SWGGroupInput*
 */
-(NSNumber*) addGroup_1WithCompletionBlock :(SWGGroup*) group 
    
    completionHandler: (void (^)(SWGGroupInput* output, NSError* error))completionBlock;
    


/**

 
 Deletes a Group

 @param group Group to remove
 

 return type: SWGGroupInput*
 */
-(NSNumber*) deleteGroupWithCompletionBlock :(SWGGroup*) group 
    
    completionHandler: (void (^)(SWGGroupInput* output, NSError* error))completionBlock;
    



@end