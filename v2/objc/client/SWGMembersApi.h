#import <Foundation/Foundation.h>
#import "SWGMembers.h"
#import "SWGMemberresponse.h"
#import "SWGMember.h"
#import "SWGObject.h"


@interface SWGMembersApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGMembersApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all members

 @param vestorlyAuth Vestorly Auth Token
 

 return type: SWGMembers*
 */
-(NSNumber*) findMembersWithCompletionBlock :(NSString*) vestorlyAuth 
    
    completionHandler: (void (^)(SWGMembers* output, NSError* error))completionBlock;
    


/**

 
 Create a new member in the Vestorly Platform

 @param vestorlyAuth Vestorly Auth Token
 @param member Member you want to create
 

 return type: SWGMemberresponse*
 */
-(NSNumber*) createMemberWithCompletionBlock :(NSString*) vestorlyAuth 
     member:(SWGMember*) member 
    
    completionHandler: (void (^)(SWGMemberresponse* output, NSError* error))completionBlock;
    


/**

 
 Returns a single member

 @param _id Mongo ID of member to fetch
 @param vestorlyAuth Vestorly Auth Token
 

 return type: SWGMemberresponse*
 */
-(NSNumber*) findMemberByIDWithCompletionBlock :(NSString*) _id 
     vestorlyAuth:(NSString*) vestorlyAuth 
    
    completionHandler: (void (^)(SWGMemberresponse* output, NSError* error))completionBlock;
    


/**

 
 Updates a single member

 @param _id Mongo ID of member to fetch
 @param vestorlyAuth Vestorly Auth Token
 @param member Member you want to update
 

 return type: SWGMemberresponse*
 */
-(NSNumber*) updateMemberByIDWithCompletionBlock :(NSString*) _id 
     vestorlyAuth:(NSString*) vestorlyAuth 
     member:(SWGMember*) member 
    
    completionHandler: (void (^)(SWGMemberresponse* output, NSError* error))completionBlock;
    



@end