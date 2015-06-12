using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Sources {
    
    
    [DataMember(Name="sources", EmitDefaultValue=false)]
    public List<Source> Sources { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Sources {\n");
      
      sb.Append("  Sources: ").Append(Sources).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
