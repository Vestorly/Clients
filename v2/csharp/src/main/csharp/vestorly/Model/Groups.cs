using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Groups {
    
    
    [DataMember(Name="groups", EmitDefaultValue=false)]
    public List<Group> groups { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Groups {\n");
      
      sb.Append("  groups: ").Append(groups).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
