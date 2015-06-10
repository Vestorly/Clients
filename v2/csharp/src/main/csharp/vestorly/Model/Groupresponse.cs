using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Groupresponse {
    
    
    [DataMember(Name="group", EmitDefaultValue=false)]
    public Group Group { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Groupresponse {\n");
      
      sb.Append("  Group: ").Append(Group).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
