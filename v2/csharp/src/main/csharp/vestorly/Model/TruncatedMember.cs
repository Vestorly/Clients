using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class TruncatedMember {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    
    [DataMember(Name="first_name", EmitDefaultValue=false)]
    public string firstName { get; set; }

    
    
    [DataMember(Name="last_name", EmitDefaultValue=false)]
    public string lastName { get; set; }

    
    
    [DataMember(Name="email", EmitDefaultValue=false)]
    public string email { get; set; }

    
    
    [DataMember(Name="picture_url", EmitDefaultValue=false)]
    public string pictureUrl { get; set; }

    
    
    [DataMember(Name="added_on", EmitDefaultValue=false)]
    public string addedOn { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class TruncatedMember {\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("  firstName: ").Append(firstName).Append("\n");
      
      sb.Append("  lastName: ").Append(lastName).Append("\n");
      
      sb.Append("  email: ").Append(email).Append("\n");
      
      sb.Append("  pictureUrl: ").Append(pictureUrl).Append("\n");
      
      sb.Append("  addedOn: ").Append(addedOn).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
