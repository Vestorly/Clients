using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Newsletterresponse {
    

    
    public Post Newsletter { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Newsletterresponse {\n");
      
      sb.Append("  Newsletter: ").Append(Newsletter).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}