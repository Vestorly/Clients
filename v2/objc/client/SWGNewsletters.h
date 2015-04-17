#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGNewsletter.h"


@protocol SWGNewsletters
@end
  
@interface SWGNewsletters : SWGObject


@property(nonatomic) NSArray<Optional, SWGNewsletter>* _newletters;

@end
