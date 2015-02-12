#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SWGAdvisor : SWGObject

@property(nonatomic) NSString* _id;  /* Id of object  */
@property(nonatomic) NSString* email;  /* Email address of advisor  */
@property(nonatomic) NSString* phone;  /* Phone number of advisor  */
@property(nonatomic) NSString* company;  /* Company of advisor  */
@property(nonatomic) NSString* address;  /* Address of advisor  */
@property(nonatomic) NSString* city;  /* City of advisor  */
- (id) _id: (NSString*) _id
  
       email: (NSString*) email
  
       phone: (NSString*) phone
  
       company: (NSString*) company
  
       address: (NSString*) address
  
       city: (NSString*) city;
       
- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
