using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Advisors {
    
    
    [DataMember(Name="advisors", EmitDefaultValue=false)]
    public List<Advisor> Advisors { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Advisors {\n");
      
      sb.Append("  Advisors: ").Append(Advisors).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
