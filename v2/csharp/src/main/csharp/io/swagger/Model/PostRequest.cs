using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Postrequest {
    

    
    public PostInput Post { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Postrequest {\n");
      
      sb.Append("  Post: ").Append(Post).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}