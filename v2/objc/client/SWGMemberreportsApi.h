#import <Foundation/Foundation.h>
#import "SWGMemberReports.h"
#import "SWGObject.h"


@interface SWGMemberreportsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGMemberreportsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 Returns all member reports

 @param vestorlyAuth Vestorly Auth Token
 

 return type: SWGMemberReports*
 */
-(NSNumber*) findMemberReportsWithCompletionBlock :(NSString*) vestorlyAuth 
    
    completionHandler: (void (^)(SWGMemberReports* output, NSError* error))completionBlock;
    



@end