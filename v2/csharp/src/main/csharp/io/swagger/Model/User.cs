using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class User {
    

    
    public string Id { get; set; }

    

    
    public string Company { get; set; }

    

    
    public string PictureUrl { get; set; }

    

    
    public string Website { get; set; }

    

    
    public string UserType { get; set; }

    

    
    public string Slug { get; set; }

    

    
    public string Name { get; set; }

    

    
    public string Username { get; set; }

    

    
    public string FirstName { get; set; }

    

    
    public string LastName { get; set; }

    

    
    public bool? NewUser { get; set; }

    

    
    public bool? ShowTour { get; set; }

    

    
    public bool? PlanSetup { get; set; }

    

    
    public bool? PlanExpired { get; set; }

    

    
    public string PlanStatus { get; set; }

    

    
    public string PlanId { get; set; }

    

    
    public bool? PlanStripe { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class User {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  Company: ").Append(Company).Append("\n");
      
      sb.Append("  PictureUrl: ").Append(PictureUrl).Append("\n");
      
      sb.Append("  Website: ").Append(Website).Append("\n");
      
      sb.Append("  UserType: ").Append(UserType).Append("\n");
      
      sb.Append("  Slug: ").Append(Slug).Append("\n");
      
      sb.Append("  Name: ").Append(Name).Append("\n");
      
      sb.Append("  Username: ").Append(Username).Append("\n");
      
      sb.Append("  FirstName: ").Append(FirstName).Append("\n");
      
      sb.Append("  LastName: ").Append(LastName).Append("\n");
      
      sb.Append("  NewUser: ").Append(NewUser).Append("\n");
      
      sb.Append("  ShowTour: ").Append(ShowTour).Append("\n");
      
      sb.Append("  PlanSetup: ").Append(PlanSetup).Append("\n");
      
      sb.Append("  PlanExpired: ").Append(PlanExpired).Append("\n");
      
      sb.Append("  PlanStatus: ").Append(PlanStatus).Append("\n");
      
      sb.Append("  PlanId: ").Append(PlanId).Append("\n");
      
      sb.Append("  PlanStripe: ").Append(PlanStripe).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}