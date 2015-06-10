using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Memberresponse {
    
    
    [DataMember(Name="member", EmitDefaultValue=false)]
    public Member Member { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Memberresponse {\n");
      
      sb.Append("  Member: ").Append(Member).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
