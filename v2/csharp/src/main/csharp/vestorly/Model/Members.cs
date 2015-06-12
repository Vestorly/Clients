using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Members {
    
    
    [DataMember(Name="members", EmitDefaultValue=false)]
    public List<Member> Members { get; set; }

    
    
    [DataMember(Name="more_results", EmitDefaultValue=false)]
    public bool? MoreResults { get; set; }

    
    
    [DataMember(Name="meta", EmitDefaultValue=false)]
    public Meta Meta { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Members {\n");
      
      sb.Append("  Members: ").Append(Members).Append("\n");
      
      sb.Append("  MoreResults: ").Append(MoreResults).Append("\n");
      
      sb.Append("  Meta: ").Append(Meta).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
