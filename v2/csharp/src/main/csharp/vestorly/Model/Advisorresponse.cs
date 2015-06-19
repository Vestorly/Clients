using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Advisorresponse {
    
    
    [DataMember(Name="advisor", EmitDefaultValue=false)]
    public Advisor advisor { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Advisorresponse {\n");
      
      sb.Append("  advisor: ").Append(advisor).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
