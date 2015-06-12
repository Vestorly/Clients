using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Advisorresponse {
    
    
    [DataMember(Name="advisor", EmitDefaultValue=false)]
    public Advisor Advisor { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Advisorresponse {\n");
      
      sb.Append("  Advisor: ").Append(Advisor).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
