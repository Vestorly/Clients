/*
 * SamiAdvisor.h
 * 
 * An Advisor object.
 */

#ifndef SamiAdvisor_H_
#define SamiAdvisor_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiAdvisor: public SamiObject {
public:
    SamiAdvisor();
    SamiAdvisor(String* json);
    virtual ~SamiAdvisor();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAdvisor* fromJson(String* obj);

    
    String* get_id();
    void set_id(String* p_id);
    
    String* getCompany();
    void setCompany(String* pCompany);
    
    String* getAddress();
    void setAddress(String* pAddress);
    
    String* getCity();
    void setCity(String* pCity);
    
    String* getState();
    void setState(String* pState);
    
    String* getZip();
    void setZip(String* pZip);
    
    String* getFirst_name();
    void setFirst_name(String* pFirst_name);
    
    String* getLast_name();
    void setLast_name(String* pLast_name);
    
    String* getReg_number();
    void setReg_number(String* pReg_number);
    
    String* getAccount_type();
    void setAccount_type(String* pAccount_type);
    
    String* getAdvisor_employees();
    void setAdvisor_employees(String* pAdvisor_employees);
    
    String* getAssets();
    void setAssets(String* pAssets);
    
    Integer* getNum_clients();
    void setNum_clients(Integer* pNum_clients);
    

private:
    String* p_id;
    String* pCompany;
    String* pAddress;
    String* pCity;
    String* pState;
    String* pZip;
    String* pFirst_name;
    String* pLast_name;
    String* pReg_number;
    String* pAccount_type;
    String* pAdvisor_employees;
    String* pAssets;
    Integer* pNum_clients;
    
};

} /* namespace Swagger */

#endif /* SamiAdvisor_H_ */
