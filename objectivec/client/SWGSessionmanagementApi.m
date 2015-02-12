#import "SWGSessionmanagementApi.h"
#import "SWGFile.h"
#import "SWGApiClient.h"
#import "SWGVoid.h"



@implementation SWGSessionmanagementApi
static NSString * basePath = @"http://developers.vestorly.com/";

+(SWGSessionmanagementApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {
    static SWGSessionmanagementApi* singletonAPI = nil;

    if (singletonAPI == nil) {
        singletonAPI = [[SWGSessionmanagementApi alloc] init];
        [singletonAPI addHeader:headerValue forKey:key];
    }
    return singletonAPI;
}

+(void) setBasePath:(NSString*)path {
    basePath = path;
}

+(NSString*) getBasePath {
    return basePath;
}

-(SWGApiClient*) apiClient {
    return [SWGApiClient sharedClientFromPool:basePath];
}

-(void) addHeader:(NSString*)value forKey:(NSString*)key {
    [[self apiClient] setHeaderValue:value forKey:key];
}

-(id) init {
    self = [super init];
    [self apiClient];
    return self;
}

-(void) setHeaderValue:(NSString*) value
           forKey:(NSString*)key {
    [[self apiClient] setHeaderValue:value forKey:key];
}

-(unsigned long) requestQueueSize {
    return [SWGApiClient requestQueueSize];
}


-(NSNumber*) sign_inWithCompletionBlock:(NSNumber*) login_with_email_only        
            create_account:(NSNumber*) create_account        
        completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock
         {

    id m_body = nil;
    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@api/session_management/sign_in.json", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    

    NSString* requestContentType = @"application/json";
    NSString* responseContentType = @"application/json";

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if(login_with_email_only != nil)
        queryParams[@"login_with_email_only"] = login_with_email_only;if(create_account != nil)
        queryParams[@"create_account"] = create_account;
    NSMutableDictionary* headerParams = [[NSMutableDictionary alloc] init];
    

    id bodyDictionary = nil;
    
    
    

    SWGApiClient* client = [SWGApiClient sharedClientFromPool:basePath];

    

    
    
    
    return [client dictionary:requestUrl 
                              method:@"POST" 
                         queryParams:queryParams 
                                body:bodyDictionary 
                        headerParams:headerParams
                  requestContentType:requestContentType
                 responseContentType:responseContentType
                     completionBlock:^(NSDictionary *data, NSError *error) {
                        if (error) {
                            completionBlock(nil, error);
                            
                            return;
                        }
                        
                        SWGVoid *result = nil;
                        if (data) {
                            result = [[SWGVoid    alloc]initWithValues: data];
                        }
                        completionBlock(result , nil);
                        
                    }];
    

}

-(NSNumber*) sign_outWithCompletionBlock: 
        (void (^)(SWGVoid* output, NSError* error))completionBlock
         {

    id m_body = nil;
    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@api/session_management/{id}/sign_out.json", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    

    NSString* requestContentType = @"application/json";
    NSString* responseContentType = @"application/json";

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [[NSMutableDictionary alloc] init];
    

    id bodyDictionary = nil;
    
    
    

    SWGApiClient* client = [SWGApiClient sharedClientFromPool:basePath];

    

    
    
    
    return [client dictionary:requestUrl 
                              method:@"DELETE" 
                         queryParams:queryParams 
                                body:bodyDictionary 
                        headerParams:headerParams
                  requestContentType:requestContentType
                 responseContentType:responseContentType
                     completionBlock:^(NSDictionary *data, NSError *error) {
                        if (error) {
                            completionBlock(nil, error);
                            
                            return;
                        }
                        
                        SWGVoid *result = nil;
                        if (data) {
                            result = [[SWGVoid    alloc]initWithValues: data];
                        }
                        completionBlock(result , nil);
                        
                    }];
    

}



@end