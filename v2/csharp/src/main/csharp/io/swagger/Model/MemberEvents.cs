using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class MemberEvents {
    

    
    public List<TruncatedMember> Members { get; set; }

    

    
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