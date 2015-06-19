using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class User {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    
    [DataMember(Name="company", EmitDefaultValue=false)]
    public string company { get; set; }

    
    
    [DataMember(Name="picture_url", EmitDefaultValue=false)]
    public string pictureUrl { get; set; }

    
    
    [DataMember(Name="website", EmitDefaultValue=false)]
    public string website { get; set; }

    
    
    [DataMember(Name="user_type", EmitDefaultValue=false)]
    public string userType { get; set; }

    
    
    [DataMember(Name="slug", EmitDefaultValue=false)]
    public string slug { get; set; }

    
    
    [DataMember(Name="name", EmitDefaultValue=false)]
    public string name { get; set; }

    
    
    [DataMember(Name="username", EmitDefaultValue=false)]
    public string username { get; set; }

    
    
    [DataMember(Name="first_name", EmitDefaultValue=false)]
    public string firstName { get; set; }

    
    
    [DataMember(Name="last_name", EmitDefaultValue=false)]
    public string lastName { get; set; }

    
    
    [DataMember(Name="new_user", EmitDefaultValue=false)]
    public bool? newUser { get; set; }

    
    
    [DataMember(Name="show_tour", EmitDefaultValue=false)]
    public bool? showTour { get; set; }

    
    
    [DataMember(Name="plan_setup", EmitDefaultValue=false)]
    public bool? planSetup { get; set; }

    
    
    [DataMember(Name="plan_expired", EmitDefaultValue=false)]
    public bool? planExpired { get; set; }

    
    
    [DataMember(Name="plan_status", EmitDefaultValue=false)]
    public string planStatus { get; set; }

    
    
    [DataMember(Name="plan_id", EmitDefaultValue=false)]
    public string planId { get; set; }

    
    
    [DataMember(Name="plan_stripe", EmitDefaultValue=false)]
    public bool? planStripe { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class User {\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("  company: ").Append(company).Append("\n");
      
      sb.Append("  pictureUrl: ").Append(pictureUrl).Append("\n");
      
      sb.Append("  website: ").Append(website).Append("\n");
      
      sb.Append("  userType: ").Append(userType).Append("\n");
      
      sb.Append("  slug: ").Append(slug).Append("\n");
      
      sb.Append("  name: ").Append(name).Append("\n");
      
      sb.Append("  username: ").Append(username).Append("\n");
      
      sb.Append("  firstName: ").Append(firstName).Append("\n");
      
      sb.Append("  lastName: ").Append(lastName).Append("\n");
      
      sb.Append("  newUser: ").Append(newUser).Append("\n");
      
      sb.Append("  showTour: ").Append(showTour).Append("\n");
      
      sb.Append("  planSetup: ").Append(planSetup).Append("\n");
      
      sb.Append("  planExpired: ").Append(planExpired).Append("\n");
      
      sb.Append("  planStatus: ").Append(planStatus).Append("\n");
      
      sb.Append("  planId: ").Append(planId).Append("\n");
      
      sb.Append("  planStripe: ").Append(planStripe).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
