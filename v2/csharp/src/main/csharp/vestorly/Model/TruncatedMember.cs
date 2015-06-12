using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class TruncatedMember {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    
    [DataMember(Name="first_name", EmitDefaultValue=false)]
    public string FirstName { get; set; }

    
    
    [DataMember(Name="last_name", EmitDefaultValue=false)]
    public string LastName { get; set; }

    
    
    [DataMember(Name="email", EmitDefaultValue=false)]
    public string Email { get; set; }

    
    
    [DataMember(Name="picture_url", EmitDefaultValue=false)]
    public string PictureUrl { get; set; }

    
    
    [DataMember(Name="added_on", EmitDefaultValue=false)]
    public string AddedOn { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class TruncatedMember {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  FirstName: ").Append(FirstName).Append("\n");
      
      sb.Append("  LastName: ").Append(LastName).Append("\n");
      
      sb.Append("  Email: ").Append(Email).Append("\n");
      
      sb.Append("  PictureUrl: ").Append(PictureUrl).Append("\n");
      
      sb.Append("  AddedOn: ").Append(AddedOn).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
