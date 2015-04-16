using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Articles {
    

    
    public List<Article> Articles { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Articles {\n");
      
      sb.Append("  Articles: ").Append(Articles).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}