using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Members {
    

    
    public List<Member> Posts { get; set; }

    

    
    public bool? MoreResults { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Members {\n");
      
      sb.Append("  Posts: ").Append(Posts).Append("\n");
      
      sb.Append("  MoreResults: ").Append(MoreResults).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}