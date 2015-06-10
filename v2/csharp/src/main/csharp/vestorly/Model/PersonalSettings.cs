using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class PersonalSettings {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class PersonalSettings {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
