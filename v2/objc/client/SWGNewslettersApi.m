#import "SWGNewslettersApi.h"
#import "SWGFile.h"
#import "SWGQueryParamCollection.h"
#import "SWGApiClient.h"
#import "SWGNewsletters.h"
#import "SWGNewsletterresponse.h"
#import "SWGNewsletterInput.h"


@interface SWGNewslettersApi ()
    @property (readwrite, nonatomic, strong) NSMutableDictionary *defaultHeaders;
@end

@implementation SWGNewslettersApi
static NSString * basePath = @"https://staging.vestorly.com/api/v2";

+(SWGNewslettersApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {
    static SWGNewslettersApi* singletonAPI = nil;

    if (singletonAPI == nil) {
        singletonAPI = [[SWGNewslettersApi alloc] init];
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
 * Returns all newsletters
 * \param vestorlyAuth Vestorly Auth Token
 * \returns SWGNewsletters*
 */
-(NSNumber*) findNewslettersWithCompletionBlock: (NSString*) vestorlyAuth
        
        completionHandler: (void (^)(SWGNewsletters* output, NSError* error))completionBlock
         {

    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling findNewsletters");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/newsletters", basePath];

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
                SWGNewsletters* result = nil;
                if (data) {
                    result = [[SWGNewsletters  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}

/*!
 * 
 * Get a newsletter by ID
 * \param vestorlyAuth Vestorly Auth Token
 * \param _id Mongo ID of event to get
 * \returns SWGNewsletterresponse*
 */
-(NSNumber*) getNewsletterByIDWithCompletionBlock: (NSString*) vestorlyAuth
         _id: (NSString*) _id
        
        completionHandler: (void (^)(SWGNewsletterresponse* output, NSError* error))completionBlock
         {

    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling getNewsletterByID");
    
    // verify the required parameter '_id' is set
    NSAssert(_id != nil, @"Missing the required parameter `_id` when calling getNewsletterByID");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/newsletters/{id}", basePath];

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
                SWGNewsletterresponse* result = nil;
                if (data) {
                    result = [[SWGNewsletterresponse  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}

/*!
 * 
 * Updates a newsletter
 * \param vestorlyAuth Vestorly Auth Token
 * \param _id Mongo ID of event to update
 * \param newsletter Newsletter
 * \returns SWGNewsletterresponse*
 */
-(NSNumber*) updateNewsletterByIDWithCompletionBlock: (NSString*) vestorlyAuth
         _id: (NSString*) _id
         newsletter: (SWGNewsletterInput*) newsletter
        
        completionHandler: (void (^)(SWGNewsletterresponse* output, NSError* error))completionBlock
         {

    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling updateNewsletterByID");
    
    // verify the required parameter '_id' is set
    NSAssert(_id != nil, @"Missing the required parameter `_id` when calling updateNewsletterByID");
    
    // verify the required parameter 'newsletter' is set
    NSAssert(newsletter != nil, @"Missing the required parameter `newsletter` when calling updateNewsletterByID");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/newsletters/{id}", basePath];

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
    
    id __body = newsletter;

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
                SWGNewsletterresponse* result = nil;
                if (data) {
                    result = [[SWGNewsletterresponse  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}



@end
