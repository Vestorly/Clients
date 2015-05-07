using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class MemberReports {
    

    
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