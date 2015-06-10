using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class MemberReports {
    
    
    [DataMember(Name="member_reports", EmitDefaultValue=false)]
    public List<MemberReport> MemberReports { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MemberReports {\n");
      
      sb.Append("  MemberReports: ").Append(MemberReports).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
