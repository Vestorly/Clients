using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Session {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    
    [DataMember(Name="vestorly-auth", EmitDefaultValue=false)]
    public string vestorlyAuth { get; set; }

    
    
    [DataMember(Name="new_user", EmitDefaultValue=false)]
    public bool? newUser { get; set; }

    
    
    [DataMember(Name="current_user", EmitDefaultValue=false)]
    public User currentUser { get; set; }

    
    
    [DataMember(Name="settings", EmitDefaultValue=false)]
    public Settings settings { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Session {\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("  vestorlyAuth: ").Append(vestorlyAuth).Append("\n");
      
      sb.Append("  newUser: ").Append(newUser).Append("\n");
      
      sb.Append("  currentUser: ").Append(currentUser).Append("\n");
      
      sb.Append("  settings: ").Append(settings).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
