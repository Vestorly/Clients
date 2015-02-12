#import "SWGAdvisorsApi.h"
#import "SWGFile.h"
#import "SWGApiClient.h"
#import "SWGVoid.h"



@implementation SWGAdvisorsApi
static NSString * basePath = @"http://developers.vestorly.com/";

+(SWGAdvisorsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {
    static SWGAdvisorsApi* singletonAPI = nil;

    if (singletonAPI == nil) {
        singletonAPI = [[SWGAdvisorsApi alloc] init];
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


-(NSNumber*) createWithCompletionBlock:(NSString*) vestorly-auth        
            advisor:(NSString*) advisor        
        completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock
         {

    id m_body = nil;
    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@api/advisors.json", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    

    NSString* requestContentType = @"application/json";
    NSString* responseContentType = @"application/json";

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if(vestorly-auth != nil)
        queryParams[@"vestorly-auth"] = vestorly-auth;
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

-(NSNumber*) showWithCompletionBlock:(NSString*) vestorly-auth        
            _id:(NSString*) _id        
            filter_by:(NSString*) filter_by        
        completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock
         {

    id m_body = nil;
    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@api/advisors/{id}.json", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:[NSString stringWithFormat:@"%@%@%@", @"{", @"id", @"}"]] withString: [SWGApiClient escape:_id]];
    

    NSString* requestContentType = @"application/json";
    NSString* responseContentType = @"application/json";

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if(vestorly-auth != nil)
        queryParams[@"vestorly-auth"] = vestorly-auth;if(filter_by != nil)
        queryParams[@"filter_by"] = filter_by;
    NSMutableDictionary* headerParams = [[NSMutableDictionary alloc] init];
    

    id bodyDictionary = nil;
    
    
    

    SWGApiClient* client = [SWGApiClient sharedClientFromPool:basePath];

    

    
    
    
    return [client dictionary:requestUrl 
                              method:@"GET" 
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

-(NSNumber*) updateWithCompletionBlock:(NSString*) vestorly-auth        
            _id:(NSString*) _id        
        completionHandler: (void (^)(SWGVoid* output, NSError* error))completionBlock
         {

    id m_body = nil;
    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@api/advisors/{id}.json", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:[NSString stringWithFormat:@"%@%@%@", @"{", @"id", @"}"]] withString: [SWGApiClient escape:_id]];
    

    NSString* requestContentType = @"application/json";
    NSString* responseContentType = @"application/json";

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if(vestorly-auth != nil)
        queryParams[@"vestorly-auth"] = vestorly-auth;
    NSMutableDictionary* headerParams = [[NSMutableDictionary alloc] init];
    

    id bodyDictionary = nil;
    
    
    

    SWGApiClient* client = [SWGApiClient sharedClientFromPool:basePath];

    

    
    
    
    return [client dictionary:requestUrl 
                              method:@"PUT" 
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