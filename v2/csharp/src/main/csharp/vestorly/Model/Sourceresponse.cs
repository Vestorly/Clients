using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Sourceresponse {
    
    
    [DataMember(Name="source", EmitDefaultValue=false)]
    public Source Source { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Sourceresponse {\n");
      
      sb.Append("  Source: ").Append(Source).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
