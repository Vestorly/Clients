#import <Foundation/Foundation.h>
#import "SWGMembers.h"
#import "SWGMember.h"
#import "SWGMemberresponse.h"
#import "SWGObject.h"


@interface SWGMembersApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGMembersApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all members

 @param vestorly-auth Vestorly Auth Token
 

 return type: SWGMembers*
 */
-(NSNumber*) findMembersWithCompletionBlock :(NSString*) vestorly-auth 
    
    completionHandler: (void (^)(SWGMembers* output, NSError* error))completionBlock;
    


/**

 
 Create a new member in the Vestorly Platform

 @param vestorly-auth Vestorly Auth Token
 @param member Member you want to create
 

 return type: SWGMemberresponse*
 */
-(NSNumber*) createMemberWithCompletionBlock :(NSString*) vestorly-auth 
     member:(SWGMember*) member 
    
    completionHandler: (void (^)(SWGMemberresponse* output, NSError* error))completionBlock;
    


/**

 
 Returns a single member

 @param _id Mongo ID of member to fetch
 @param vestorly-auth Vestorly Auth Token
 

 return type: SWGMemberresponse*
 */
-(NSNumber*) findMemberByIDWithCompletionBlock :(NSString*) _id 
     vestorly-auth:(NSString*) vestorly-auth 
    
    completionHandler: (void (^)(SWGMemberresponse* output, NSError* error))completionBlock;
    


/**

 
 Returns a single member

 @param _id Mongo ID of member to fetch
 @param vestorly-auth Vestorly Auth Token
 @param member Member you want to update
 

 return type: SWGMemberresponse*
 */
-(NSNumber*) findMemberByID_1WithCompletionBlock :(NSString*) _id 
     vestorly-auth:(NSString*) vestorly-auth 
     member:(SWGMember*) member 
    
    completionHandler: (void (^)(SWGMemberresponse* output, NSError* error))completionBlock;
    



@end