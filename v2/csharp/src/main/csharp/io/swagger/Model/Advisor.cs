using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Advisor {
    

    /* Id of object */
    
    public string Id { get; set; }

    

    /* Company of advisor */
    
    public string Company { get; set; }

    

    /* Address of advisor */
    
    public string Address { get; set; }

    

    /* City of advisor */
    
    public string City { get; set; }

    

    /* State of advisor */
    
    public string State { get; set; }

    

    /* Zip of advisor */
    
    public string Zip { get; set; }

    

    /* First name of advisor */
    
    public string FirstName { get; set; }

    

    /* Last name of advisor */
    
    public string LastName { get; set; }

    

    /* Registration number of advisor */
    
    public string RegNumber { get; set; }

    

    /* Account type of advisor */
    
    public string AccountType { get; set; }

    

    /* Employees of advisor */
    
    public string AdvisorEmployees { get; set; }

    

    /* Assets of advisor */
    
    public string Assets { get; set; }

    

    /* Number of clients the advisor has */
    
    public int? NumClients { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Advisor {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  Company: ").Append(Company).Append("\n");
      
      sb.Append("  Address: ").Append(Address).Append("\n");
      
      sb.Append("  City: ").Append(City).Append("\n");
      
      sb.Append("  State: ").Append(State).Append("\n");
      
      sb.Append("  Zip: ").Append(Zip).Append("\n");
      
      sb.Append("  FirstName: ").Append(FirstName).Append("\n");
      
      sb.Append("  LastName: ").Append(LastName).Append("\n");
      
      sb.Append("  RegNumber: ").Append(RegNumber).Append("\n");
      
      sb.Append("  AccountType: ").Append(AccountType).Append("\n");
      
      sb.Append("  AdvisorEmployees: ").Append(AdvisorEmployees).Append("\n");
      
      sb.Append("  Assets: ").Append(Assets).Append("\n");
      
      sb.Append("  NumClients: ").Append(NumClients).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}