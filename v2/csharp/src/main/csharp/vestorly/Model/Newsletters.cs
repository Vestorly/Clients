using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Newsletters {
    
    
    [DataMember(Name="newsletters", EmitDefaultValue=false)]
    public List<Newsletter> Newsletters { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Newsletters {\n");
      
      sb.Append("  Newsletters: ").Append(Newsletters).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
