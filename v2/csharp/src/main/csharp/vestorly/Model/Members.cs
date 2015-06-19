using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Members {
    
    
    [DataMember(Name="members", EmitDefaultValue=false)]
    public List<Member> members { get; set; }

    
    
    [DataMember(Name="more_results", EmitDefaultValue=false)]
    public bool? moreResults { get; set; }

    
    
    [DataMember(Name="meta", EmitDefaultValue=false)]
    public Meta meta { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Members {\n");
      
      sb.Append("  members: ").Append(members).Append("\n");
      
      sb.Append("  moreResults: ").Append(moreResults).Append("\n");
      
      sb.Append("  meta: ").Append(meta).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
