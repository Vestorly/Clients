#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGSymbol.h"


@interface SWGEvent : SWGObject

@property(nonatomic) NSString* _id;  /* Id of object  */
@property(nonatomic) SWGSymbol* type;  /* Type of the event  */
@property(nonatomic) NSString* referrer;  /* Event referrer  */
@property(nonatomic) NSString* original_url;  /* Originator URL  */
@property(nonatomic) NSString* originator_email;  /* Originator email  */
@property(nonatomic) NSString* subject_email;  /* Subject email  */
@property(nonatomic) NSString* advisor_email;  /* Advisor email  */
@property(nonatomic) NSString* originator_group_name;  /* Original group name  */
@property(nonatomic) NSString* _newsletter;  /* Newsletter  */
- (id) _id: (NSString*) _id     
    type: (SWGSymbol*) type     
    referrer: (NSString*) referrer     
    original_url: (NSString*) original_url     
    originator_email: (NSString*) originator_email     
    subject_email: (NSString*) subject_email     
    advisor_email: (NSString*) advisor_email     
    originator_group_name: (NSString*) originator_group_name     
    _newsletter: (NSString*) _newsletter;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
