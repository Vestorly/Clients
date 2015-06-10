#import "SWGSessionsApi.h"
#import "SWGFile.h"
#import "SWGQueryParamCollection.h"
#import "SWGApiClient.h"
#import "SWGSession.h"
#import "SWGSessionLogoutResponse.h"


@interface SWGSessionsApi ()
    @property (readwrite, nonatomic, strong) NSMutableDictionary *defaultHeaders;
@end

@implementation SWGSessionsApi
static NSString * basePath = @"https://staging.vestorly.com/api/v2";

+(SWGSessionsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {
    static SWGSessionsApi* singletonAPI = nil;

    if (singletonAPI == nil) {
        singletonAPI = [[SWGSessionsApi alloc] init];
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
    [self.defaultHeaders setValue:value forKey:key];
}

-(id) init {
    self = [super init];
    self.defaultHeaders = [NSMutableDictionary dictionary];
    [self apiClient];
    return self;
}

-(void) setHeaderValue:(NSString*) value
           forKey:(NSString*)key {
    [self.defaultHeaders setValue:value forKey:key];
}

-(unsigned long) requestQueueSize {
    return [SWGApiClient requestQueueSize];
}


/*!
 * 
 * Login To Vestorly Platform
 * \param username Username in the vestorly platform
 * \param password Password in Vestorly Platform
 * \returns SWGSession*
 */
-(NSNumber*) loginWithCompletionBlock: (NSString*) username
         password: (NSString*) password
        
        completionHandler: (void (^)(SWGSession* output, NSError* error))completionBlock
         {

    
    // verify the required parameter 'username' is set
    NSAssert(username != nil, @"Missing the required parameter `username` when calling login");
    
    // verify the required parameter 'password' is set
    NSAssert(password != nil, @"Missing the required parameter `password` when calling login");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/sessions", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if(username != nil) {
        
        queryParams[@"username"] = username;
    }
    if(password != nil) {
        
        queryParams[@"password"] = password;
    }
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    
    
    // HTTP header `Accept` 
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/x-www-form-urlencoded"]];

    id bodyDictionary = nil;
    
    

    NSMutableDictionary * formParams = [[NSMutableDictionary alloc]init];

    
    

    

    SWGApiClient* client = [SWGApiClient sharedClientFromPool:basePath];

    

    
    // non container response

    

    
    // complex response
        
    // comples response type
    return [client dictionary: requestUrl
                       method: @"POST"
                  queryParams: queryParams
                         body: bodyDictionary
                 headerParams: headerParams
           requestContentType: requestContentType
          responseContentType: responseContentType
              completionBlock: ^(NSDictionary *data, NSError *error) {
                if (error) {
                    completionBlock(nil, error);
                    
                    return;
                }
                SWGSession* result = nil;
                if (data) {
                    result = [[SWGSession  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}

/*!
 * 
 * Logout of the vestorly platform
 * \param vestorlyAuth Authenication token
 * \param _id ID of pet to session
 * \returns SWGSessionLogoutResponse*
 */
-(NSNumber*) logoutWithCompletionBlock: (NSString*) vestorlyAuth
         _id: (NSString*) _id
        
        completionHandler: (void (^)(SWGSessionLogoutResponse* output, NSError* error))completionBlock
         {

    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling logout");
    
    // verify the required parameter '_id' is set
    NSAssert(_id != nil, @"Missing the required parameter `_id` when calling logout");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/sessions/{id}", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:[NSString stringWithFormat:@"%@%@%@", @"{", @"id", @"}"]] withString: [SWGApiClient escape:_id]];
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if(vestorlyAuth != nil) {
        
        queryParams[@"vestorly_auth"] = vestorlyAuth;
    }
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    
    
    // HTTP header `Accept` 
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[]];

    id bodyDictionary = nil;
    
    

    NSMutableDictionary * formParams = [[NSMutableDictionary alloc]init];

    
    

    

    SWGApiClient* client = [SWGApiClient sharedClientFromPool:basePath];

    

    
    // non container response

    

    
    // complex response
        
    // comples response type
    return [client dictionary: requestUrl
                       method: @"DELETE"
                  queryParams: queryParams
                         body: bodyDictionary
                 headerParams: headerParams
           requestContentType: requestContentType
          responseContentType: responseContentType
              completionBlock: ^(NSDictionary *data, NSError *error) {
                if (error) {
                    completionBlock(nil, error);
                    
                    return;
                }
                SWGSessionLogoutResponse* result = nil;
                if (data) {
                    result = [[SWGSessionLogoutResponse  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}



@end
