#import "SWGNewslettersettingsApi.h"
#import "SWGFile.h"
#import "SWGQueryParamCollection.h"
#import "SWGApiClient.h"
#import "SWGNewsletterSettings.h"
#import "SWGNewslettersettingresponse.h"
#import "SWGNewsletterSettingsInput.h"


@interface SWGNewslettersettingsApi ()
    @property (readwrite, nonatomic, strong) NSMutableDictionary *defaultHeaders;
@end

@implementation SWGNewslettersettingsApi
static NSString * basePath = @"https://staging.vestorly.com/api/v2";

+(SWGNewslettersettingsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {
    static SWGNewslettersettingsApi* singletonAPI = nil;

    if (singletonAPI == nil) {
        singletonAPI = [[SWGNewslettersettingsApi alloc] init];
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
 * Returns all newsletter settings
 * \param vestorlyAuth Vestorly Auth Token
 * \returns SWGNewsletterSettings*
 */
-(NSNumber*) findNewsletterSettingsWithCompletionBlock: (NSString*) vestorlyAuth
        
        completionHandler: (void (^)(SWGNewsletterSettings* output, NSError* error))completionBlock
         {

    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling findNewsletterSettings");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/newsletter_settings", basePath];

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
                SWGNewsletterSettings* result = nil;
                if (data) {
                    result = [[SWGNewsletterSettings  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}

/*!
 * 
 * Returns a single newsletter settings if the user has access
 * \param _id Mongo ID of newsletter settings to fetch
 * \param vestorlyAuth Vestorly Auth Token
 * \returns SWGNewslettersettingresponse*
 */
-(NSNumber*) findNewsletterSettingsByIDWithCompletionBlock: (NSString*) _id
         vestorlyAuth: (NSString*) vestorlyAuth
        
        completionHandler: (void (^)(SWGNewslettersettingresponse* output, NSError* error))completionBlock
         {

    
    // verify the required parameter '_id' is set
    NSAssert(_id != nil, @"Missing the required parameter `_id` when calling findNewsletterSettingsByID");
    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling findNewsletterSettingsByID");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/newsletter_settings/{id}", basePath];

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
                SWGNewslettersettingresponse* result = nil;
                if (data) {
                    result = [[SWGNewslettersettingresponse  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}

/*!
 * 
 * Update a single newsletter setting by ID
 * \param _id Mongo ID of newsletter settings to update
 * \param vestorlyAuth Vestorly Auth Token
 * \param newsletterSetting newsletter settings
 * \returns SWGNewslettersettingresponse*
 */
-(NSNumber*) updateNewsletterSettingsByIDWithCompletionBlock: (NSString*) _id
         vestorlyAuth: (NSString*) vestorlyAuth
         newsletterSetting: (SWGNewsletterSettingsInput*) newsletterSetting
        
        completionHandler: (void (^)(SWGNewslettersettingresponse* output, NSError* error))completionBlock
         {

    
    // verify the required parameter '_id' is set
    NSAssert(_id != nil, @"Missing the required parameter `_id` when calling updateNewsletterSettingsByID");
    
    // verify the required parameter 'vestorlyAuth' is set
    NSAssert(vestorlyAuth != nil, @"Missing the required parameter `vestorlyAuth` when calling updateNewsletterSettingsByID");
    
    // verify the required parameter 'newsletterSetting' is set
    NSAssert(newsletterSetting != nil, @"Missing the required parameter `newsletterSetting` when calling updateNewsletterSettingsByID");
    

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/newsletter_settings/{id}", basePath];

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
    
    id __body = newsletterSetting;

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
                SWGNewslettersettingresponse* result = nil;
                if (data) {
                    result = [[SWGNewslettersettingresponse  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}



@end
