using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class MemberEvents {
    
    
    [DataMember(Name="members", EmitDefaultValue=false)]
    public List<TruncatedMember> Members { get; set; }

    
    
    [DataMember(Name="member_events", EmitDefaultValue=false)]
    public List<MemberEvent> MemberEvents { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MemberEvents {\n");
      
      sb.Append("  Members: ").Append(Members).Append("\n");
      
      sb.Append("  MemberEvents: ").Append(MemberEvents).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
