#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGArticle.h"


@protocol SWGArticleresponse
@end
  
@interface SWGArticleresponse : SWGObject


@property(nonatomic) SWGArticle<Optional, SWGArticle>* article;

@end
