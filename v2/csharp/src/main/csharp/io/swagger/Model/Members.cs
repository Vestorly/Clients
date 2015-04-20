using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Members {
    

    
    public List<Member> Members { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Members {\n");
      
      sb.Append("  Members: ").Append(Members).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}