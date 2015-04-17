#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGArticle.h"


@protocol SWGArticles
@end
  
@interface SWGArticles : SWGObject


@property(nonatomic) NSArray<Optional, SWGArticle>* articles;

@end
