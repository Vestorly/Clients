#import "SWGMembersApi.h"
#import "SWGFile.h"
#import "SWGQueryParamCollection.h"
#import "SWGApiClient.h"
#import "SWGMembers.h"
#import "SWGMemberresponse.h"
#import "SWGMember.h"


@interface SWGMembersApi ()
    @property (readwrite, nonatomic, strong) NSMutableDictionary *defaultHeaders;
@end

@implementation SWGMembersApi
static NSString * basePath = @"https://staging.vestorly.com/api/v2";

+(SWGMembersApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {
    static SWGMembersApi* singletonAPI = nil;

    if (singletonAPI == nil) {
        singletonAPI = [[SWGMembersApi alloc] init];
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
 * Returns all members
 * \param vestorlyAuth Vestorly Auth Token
 * \returns SWGMembers*
 */
-(NSNumber*) findMembersWithCompletionBlock: (NSString*) vestorlyAuth
        
        completionHandler: (void (^)(SWGMembers* output, NSError* error))completionBlock
         {

    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling findMembers");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/members", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    

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
                       method: @"GET"
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
                SWGMembers* result = nil;
                if (data) {
                    result = [[SWGMembers  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}

/*!
 * 
 * Create a new member in the Vestorly Platform
 * \param vestorlyAuth Vestorly Auth Token
 * \param member Member you want to create
 * \returns SWGMemberresponse*
 */
-(NSNumber*) createMemberWithCompletionBlock: (NSString*) vestorlyAuth
         member: (SWGMember*) member
        
        completionHandler: (void (^)(SWGMemberresponse* output, NSError* error))completionBlock
         {

    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling createMember");
    
    // verify the required parameter 'member' is set
    NSAssert(member != nil, @"Missing the required parameter `member` when calling createMember");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/members", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    

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
    
    id __body = member;

    if(__body != nil && [__body isKindOfClass:[NSArray class]]){
        NSMutableArray * objs = [[NSMutableArray alloc] init];
        for (id dict in (NSArray*)__body) {
            if([dict respondsToSelector:@selector(toDictionary)]) {
                [objs addObject:[(SWGObject*)dict toDictionary]];
            }
            else{
                [objs addObject:dict];
            }
        }
        bodyDictionary = objs;
    }
    else if([__body respondsToSelector:@selector(toDictionary)]) {
        bodyDictionary = [(SWGObject*)__body toDictionary];
    }
    else if([__body isKindOfClass:[NSString class]]) {
        // convert it to a dictionary
        NSError * error;
        NSString * str = (NSString*)__body;
        NSDictionary *JSON =
            [NSJSONSerialization JSONObjectWithData: [str dataUsingEncoding: NSUTF8StringEncoding]
                                            options: NSJSONReadingMutableContainers
                                              error: &error];
        bodyDictionary = JSON;
    }
    
    

    

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
                SWGMemberresponse* result = nil;
                if (data) {
                    result = [[SWGMemberresponse  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}

/*!
 * 
 * Returns a single member
 * \param _id Mongo ID of member to fetch
 * \param vestorlyAuth Vestorly Auth Token
 * \returns SWGMemberresponse*
 */
-(NSNumber*) findMemberByIDWithCompletionBlock: (NSString*) _id
         vestorlyAuth: (NSString*) vestorlyAuth
        
        completionHandler: (void (^)(SWGMemberresponse* output, NSError* error))completionBlock
         {

    
    // verify the required parameter '_id' is set
    NSAssert(_id != nil, @"Missing the required parameter `_id` when calling findMemberByID");
    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling findMemberByID");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/members/{id}", basePath];

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
                       method: @"GET"
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
                SWGMemberresponse* result = nil;
                if (data) {
                    result = [[SWGMemberresponse  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}

/*!
 * 
 * Updates a single member
 * \param _id Mongo ID of member to fetch
 * \param vestorlyAuth Vestorly Auth Token
 * \param member Member you want to update
 * \returns SWGMemberresponse*
 */
-(NSNumber*) updateMemberByIDWithCompletionBlock: (NSString*) _id
         vestorlyAuth: (NSString*) vestorlyAuth
         member: (SWGMember*) member
        
        completionHandler: (void (^)(SWGMemberresponse* output, NSError* error))completionBlock
         {

    
    // verify the required parameter '_id' is set
    NSAssert(_id != nil, @"Missing the required parameter `_id` when calling updateMemberByID");
    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling updateMemberByID");
    
    // verify the required parameter 'member' is set
    NSAssert(member != nil, @"Missing the required parameter `member` when calling updateMemberByID");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/members/{id}", basePath];

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
    
    id __body = member;

    if(__body != nil && [__body isKindOfClass:[NSArray class]]){
        NSMutableArray * objs = [[NSMutableArray alloc] init];
        for (id dict in (NSArray*)__body) {
            if([dict respondsToSelector:@selector(toDictionary)]) {
                [objs addObject:[(SWGObject*)dict toDictionary]];
            }
            else{
                [objs addObject:dict];
            }
        }
        bodyDictionary = objs;
    }
    else if([__body respondsToSelector:@selector(toDictionary)]) {
        bodyDictionary = [(SWGObject*)__body toDictionary];
    }
    else if([__body isKindOfClass:[NSString class]]) {
        // convert it to a dictionary
        NSError * error;
        NSString * str = (NSString*)__body;
        NSDictionary *JSON =
            [NSJSONSerialization JSONObjectWithData: [str dataUsingEncoding: NSUTF8StringEncoding]
                                            options: NSJSONReadingMutableContainers
                                              error: &error];
        bodyDictionary = JSON;
    }
    
    

    

    SWGApiClient* client = [SWGApiClient sharedClientFromPool:basePath];

    

    
    // non container response

    

    
    // complex response
        
    // comples response type
    return [client dictionary: requestUrl
                       method: @"PUT"
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
                SWGMemberresponse* result = nil;
                if (data) {
                    result = [[SWGMemberresponse  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}



@end
