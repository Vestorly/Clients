#import <Foundation/Foundation.h>
#import "SWGMembers.h"
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

 @param vestorly_auth Vestorly Auth Token
 

 return type: SWGMembers*
 */
-(NSNumber*) findMembersWithCompletionBlock :(NSString*) vestorly_auth 
    
    completionHandler: (void (^)(SWGMembers* output, NSError* error))completionBlock;
    


/**

 
 Returns a single member

 @param _id Mongo ID of member to fetch
 @param vestorly_auth Vestorly Auth Token
 

 return type: SWGMember*
 */
-(NSNumber*) findMemberByIDWithCompletionBlock :(NSString*) _id 
     vestorly_auth:(NSString*) vestorly_auth 
    
    completionHandler: (void (^)(SWGMember* output, NSError* error))completionBlock;
    


/**

 
 Returns a single member

 @param _id Mongo ID of member to fetch
 @param vestorly_auth Vestorly Auth Token
 

 return type: SWGMember*
 */
-(NSNumber*) findMemberByID_1WithCompletionBlock :(NSString*) _id 
     vestorly_auth:(NSString*) vestorly_auth 
    
    completionHandler: (void (^)(SWGMember* output, NSError* error))completionBlock;
    



@end