using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Groupresponse {
    
    
    [DataMember(Name="group", EmitDefaultValue=false)]
    public Group group { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Groupresponse {\n");
      
      sb.Append("  group: ").Append(group).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
