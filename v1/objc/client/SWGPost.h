#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SWGPost : SWGObject

@property(nonatomic) NSString* _id;  /* Id of object  */
@property(nonatomic) NSString* title;  /* Title of the post  */
@property(nonatomic) NSString* body;  /* Body of the post  */
@property(nonatomic) NSString* comment;  /* Comment associated with the post  */
@property(nonatomic) NSString* video;  /* Video associated with the post  */
@property(nonatomic) NSString* img;  /* Image associated with the post  */
- (id) _id: (NSString*) _id     
    title: (NSString*) title     
    body: (NSString*) body     
    comment: (NSString*) comment     
    video: (NSString*) video     
    img: (NSString*) img;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
