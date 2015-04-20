using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Posts {
    

    
    public List<Post> Posts { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Posts {\n");
      
      sb.Append("  Posts: ").Append(Posts).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}