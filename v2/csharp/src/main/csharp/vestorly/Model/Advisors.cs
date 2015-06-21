using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Advisors {
    
    
    [DataMember(Name="advisors", EmitDefaultValue=false)]
    public List<Advisor> advisors { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Advisors {\n");
      
      sb.Append("  advisors: ").Append(advisors).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
