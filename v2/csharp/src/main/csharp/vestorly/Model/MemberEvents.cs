using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class MemberEvents {
    
    
    [DataMember(Name="members", EmitDefaultValue=false)]
    public List<TruncatedMember> members { get; set; }

    
    
    [DataMember(Name="member_events", EmitDefaultValue=false)]
    public List<MemberEvent> memberEvents { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MemberEvents {\n");
      
      sb.Append("  members: ").Append(members).Append("\n");
      
      sb.Append("  memberEvents: ").Append(memberEvents).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
