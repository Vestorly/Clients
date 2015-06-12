using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class User {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    
    [DataMember(Name="company", EmitDefaultValue=false)]
    public string Company { get; set; }

    
    
    [DataMember(Name="picture_url", EmitDefaultValue=false)]
    public string PictureUrl { get; set; }

    
    
    [DataMember(Name="website", EmitDefaultValue=false)]
    public string Website { get; set; }

    
    
    [DataMember(Name="user_type", EmitDefaultValue=false)]
    public string UserType { get; set; }

    
    
    [DataMember(Name="slug", EmitDefaultValue=false)]
    public string Slug { get; set; }

    
    
    [DataMember(Name="name", EmitDefaultValue=false)]
    public string Name { get; set; }

    
    
    [DataMember(Name="username", EmitDefaultValue=false)]
    public string Username { get; set; }

    
    
    [DataMember(Name="first_name", EmitDefaultValue=false)]
    public string FirstName { get; set; }

    
    
    [DataMember(Name="last_name", EmitDefaultValue=false)]
    public string LastName { get; set; }

    
    
    [DataMember(Name="new_user", EmitDefaultValue=false)]
    public bool? NewUser { get; set; }

    
    
    [DataMember(Name="show_tour", EmitDefaultValue=false)]
    public bool? ShowTour { get; set; }

    
    
    [DataMember(Name="plan_setup", EmitDefaultValue=false)]
    public bool? PlanSetup { get; set; }

    
    
    [DataMember(Name="plan_expired", EmitDefaultValue=false)]
    public bool? PlanExpired { get; set; }

    
    
    [DataMember(Name="plan_status", EmitDefaultValue=false)]
    public string PlanStatus { get; set; }

    
    
    [DataMember(Name="plan_id", EmitDefaultValue=false)]
    public string PlanId { get; set; }

    
    
    [DataMember(Name="plan_stripe", EmitDefaultValue=false)]
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
