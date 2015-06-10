#import <Foundation/Foundation.h>
#import "SWGGroups.h"
#import "SWGGroupresponse.h"
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

 @param vestorlyAuth Vestorly Auth Token
 

 return type: SWGGroups*
 */
-(NSNumber*) findGroupsWithCompletionBlock :(NSString*) vestorlyAuth 
    
    completionHandler: (void (^)(SWGGroups* output, NSError* error))completionBlock;
    


/**

 
 Creates a new Group

 @param vestorlyAuth Vestorly Auth Token
 @param group Group to add
 

 return type: SWGGroupresponse*
 */
-(NSNumber*) createGroupWithCompletionBlock :(NSString*) vestorlyAuth 
     group:(SWGGroupInput*) group 
    
    completionHandler: (void (^)(SWGGroupresponse* output, NSError* error))completionBlock;
    


/**

 
 Returns a single group if user has access

 @param vestorlyAuth Vestorly Auth Token
 @param _id Mongo ID of group to fetch
 

 return type: SWGGroupresponse*
 */
-(NSNumber*) findGroupByIDWithCompletionBlock :(NSString*) vestorlyAuth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGGroupresponse* output, NSError* error))completionBlock;
    


/**

 
 Updates a Group

 @param vestorlyAuth Vestorly Auth Token
 @param _id id of group to update
 @param group Group to update
 

 return type: SWGGroupresponse*
 */
-(NSNumber*) updateGroupByIdWithCompletionBlock :(NSString*) vestorlyAuth 
     _id:(NSString*) _id 
     group:(SWGGroupInput*) group 
    
    completionHandler: (void (^)(SWGGroupresponse* output, NSError* error))completionBlock;
    


/**

 
 Deletes a Group

 @param vestorlyAuth Vestorly Auth Token
 @param _id id of group to delete
 

 return type: SWGGroupresponse*
 */
-(NSNumber*) deleteGroupWithCompletionBlock :(NSString*) vestorlyAuth 
     _id:(NSString*) _id 
    
    completionHandler: (void (^)(SWGGroupresponse* output, NSError* error))completionBlock;
    



@end