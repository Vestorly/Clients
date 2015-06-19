using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class PersonalSettings {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class PersonalSettings {\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
