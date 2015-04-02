#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SWGAdvisor : SWGObject

@property(nonatomic) NSString* _id;  /* Id of object  */
@property(nonatomic) NSString* company;  /* Company of advisor  */
@property(nonatomic) NSString* address;  /* Address of advisor  */
@property(nonatomic) NSString* city;  /* City of advisor  */
@property(nonatomic) NSString* state;  /* State of advisor  */
@property(nonatomic) NSString* zip;  /* Zip of advisor  */
@property(nonatomic) NSString* first_name;  /* First name of advisor  */
@property(nonatomic) NSString* last_name;  /* Last name of advisor  */
@property(nonatomic) NSString* reg_number;  /* Registration number of advisor  */
@property(nonatomic) NSString* account_type;  /* Account type of advisor  */
@property(nonatomic) NSString* advisor_employees;  /* Employees of advisor  */
@property(nonatomic) NSString* assets;  /* Assets of advisor  */
@property(nonatomic) NSNumber* num_clients;  /* Number of clients the advisor has  */
- (id) _id: (NSString*) _id     
    company: (NSString*) company     
    address: (NSString*) address     
    city: (NSString*) city     
    state: (NSString*) state     
    zip: (NSString*) zip     
    first_name: (NSString*) first_name     
    last_name: (NSString*) last_name     
    reg_number: (NSString*) reg_number     
    account_type: (NSString*) account_type     
    advisor_employees: (NSString*) advisor_employees     
    assets: (NSString*) assets     
    num_clients: (NSNumber*) num_clients;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
