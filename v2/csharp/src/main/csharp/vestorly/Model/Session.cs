using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Session {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    
    [DataMember(Name="vestorly-auth", EmitDefaultValue=false)]
    public string VestorlyAuth { get; set; }

    
    
    [DataMember(Name="new_user", EmitDefaultValue=false)]
    public bool? NewUser { get; set; }

    
    
    [DataMember(Name="current_user", EmitDefaultValue=false)]
    public User CurrentUser { get; set; }

    
    
    [DataMember(Name="settings", EmitDefaultValue=false)]
    public Settings Settings { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Session {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  VestorlyAuth: ").Append(VestorlyAuth).Append("\n");
      
      sb.Append("  NewUser: ").Append(NewUser).Append("\n");
      
      sb.Append("  CurrentUser: ").Append(CurrentUser).Append("\n");
      
      sb.Append("  Settings: ").Append(Settings).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
