#import "SWGArticlesApi.h"
#import "SWGFile.h"
#import "SWGQueryParamCollection.h"
#import "SWGApiClient.h"
#import "SWGArticles.h"
#import "SWGArticle.h"



@implementation SWGArticlesApi
static NSString * basePath = @"https://staging.vestorly.com/api/v2";

+(SWGArticlesApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {
    static SWGArticlesApi* singletonAPI = nil;

    if (singletonAPI == nil) {
        singletonAPI = [[SWGArticlesApi alloc] init];
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


-(NSNumber*) findArticlesWithCompletionBlock: (NSString*) vestorly_auth
         limit: (NSNumber*) limit
         text_query: (NSString*) text_query
        
        completionHandler: (void (^)(SWGArticles* output, NSError* error))completionBlock
         {

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/articles", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    

    NSArray* requestContentTypes = @[];
    NSString* requestContentType = [requestContentTypes count] > 0 ? requestContentTypes[0] : @"application/json";

    NSArray* responseContentTypes = @[];
    NSString* responseContentType = [responseContentTypes count] > 0 ? responseContentTypes[0] : @"application/json";

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if(vestorly_auth != nil) {
        
        queryParams[@"vestorly_auth"] = vestorly_auth;
    }
    if(limit != nil) {
        
        queryParams[@"limit"] = limit;
    }
    if(text_query != nil) {
        
        queryParams[@"text_query"] = text_query;
    }
    
    NSMutableDictionary* headerParams = [[NSMutableDictionary alloc] init];
    

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
                SWGArticles* result = nil;
                if (data) {
                    result = [[SWGArticles  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}

-(NSNumber*) findArticleByIDWithCompletionBlock: (NSString*) _id
        
        completionHandler: (void (^)(SWGArticle* output, NSError* error))completionBlock
         {

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/articles/{id}", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:[NSString stringWithFormat:@"%@%@%@", @"{", @"id", @"}"]] withString: [SWGApiClient escape:_id]];
    

    NSArray* requestContentTypes = @[];
    NSString* requestContentType = [requestContentTypes count] > 0 ? requestContentTypes[0] : @"application/json";

    NSArray* responseContentTypes = @[];
    NSString* responseContentType = [responseContentTypes count] > 0 ? responseContentTypes[0] : @"application/json";

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [[NSMutableDictionary alloc] init];
    

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
                SWGArticle* result = nil;
                if (data) {
                    result = [[SWGArticle  alloc]  initWithDictionary:data error:nil];
                }
                completionBlock(result , nil);
                
              }];
    

    

    
}



@end
