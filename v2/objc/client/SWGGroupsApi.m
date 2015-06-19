#import "SWGGroupsApi.h"
#import "SWGFile.h"
#import "SWGQueryParamCollection.h"
#import "SWGApiClient.h"
#import "SWGGroups.h"
#import "SWGGroupresponse.h"
#import "SWGGroupInput.h"


@interface SWGGroupsApi ()
    @property (readwrite, nonatomic, strong) NSMutableDictionary *defaultHeaders;
@end

@implementation SWGGroupsApi
static NSString * basePath = @"https://staging.vestorly.com/api/v2";

+(SWGGroupsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {
    static SWGGroupsApi* singletonAPI = nil;

    if (singletonAPI == nil) {
        singletonAPI = [[SWGGroupsApi alloc] init];
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
 * Returns all groups
 * \param vestorlyAuth Vestorly Auth Token
 * \returns SWGGroups*
 */
-(NSNumber*) findGroupsWithCompletionBlock: (NSString*) vestorlyAuth
        
        completionHandler: (void (^)(SWGGroups* output, NSError* error))completionBlock
         {

    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling findGroups");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/groups", basePath];

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
                SWGGroups* result = nil;
                if (data) {
                    result = [[SWGGroups  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}

/*!
 * 
 * Creates a new Group
 * \param vestorlyAuth Vestorly Auth Token
 * \param group Group to add
 * \returns SWGGroupresponse*
 */
-(NSNumber*) createGroupWithCompletionBlock: (NSString*) vestorlyAuth
         group: (SWGGroupInput*) group
        
        completionHandler: (void (^)(SWGGroupresponse* output, NSError* error))completionBlock
         {

    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling createGroup");
    
    // verify the required parameter 'group' is set
    NSAssert(group != nil, @"Missing the required parameter `group` when calling createGroup");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/groups", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if(vestorlyAuth != nil) {
        
        queryParams[@"vestorly_auth"] = vestorlyAuth;
    }
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    
    
    // HTTP header `Accept` 
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
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
    
    id __body = group;

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
                SWGGroupresponse* result = nil;
                if (data) {
                    result = [[SWGGroupresponse  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}

/*!
 * 
 * Returns a single group if user has access
 * \param vestorlyAuth Vestorly Auth Token
 * \param _id Mongo ID of group to fetch
 * \returns SWGGroupresponse*
 */
-(NSNumber*) findGroupByIDWithCompletionBlock: (NSString*) vestorlyAuth
         _id: (NSString*) _id
        
        completionHandler: (void (^)(SWGGroupresponse* output, NSError* error))completionBlock
         {

    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling findGroupByID");
    
    // verify the required parameter '_id' is set
    NSAssert(_id != nil, @"Missing the required parameter `_id` when calling findGroupByID");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/groups/{id}", basePath];

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
                SWGGroupresponse* result = nil;
                if (data) {
                    result = [[SWGGroupresponse  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}

/*!
 * 
 * Updates a Group
 * \param vestorlyAuth Vestorly Auth Token
 * \param _id id of group to update
 * \param group Group to update
 * \returns SWGGroupresponse*
 */
-(NSNumber*) updateGroupByIdWithCompletionBlock: (NSString*) vestorlyAuth
         _id: (NSString*) _id
         group: (SWGGroupInput*) group
        
        completionHandler: (void (^)(SWGGroupresponse* output, NSError* error))completionBlock
         {

    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling updateGroupById");
    
    // verify the required parameter '_id' is set
    NSAssert(_id != nil, @"Missing the required parameter `_id` when calling updateGroupById");
    
    // verify the required parameter 'group' is set
    NSAssert(group != nil, @"Missing the required parameter `group` when calling updateGroupById");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/groups/{id}", basePath];

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
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
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
    
    id __body = group;

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
                SWGGroupresponse* result = nil;
                if (data) {
                    result = [[SWGGroupresponse  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}

/*!
 * 
 * Deletes a Group
 * \param vestorlyAuth Vestorly Auth Token
 * \param _id id of group to delete
 * \returns SWGGroupresponse*
 */
-(NSNumber*) deleteGroupWithCompletionBlock: (NSString*) vestorlyAuth
         _id: (NSString*) _id
        
        completionHandler: (void (^)(SWGGroupresponse* output, NSError* error))completionBlock
         {

    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling deleteGroup");
    
    // verify the required parameter '_id' is set
    NSAssert(_id != nil, @"Missing the required parameter `_id` when calling deleteGroup");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/groups/{id}", basePath];

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
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
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
                SWGGroupresponse* result = nil;
                if (data) {
                    result = [[SWGGroupresponse  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}



@end
