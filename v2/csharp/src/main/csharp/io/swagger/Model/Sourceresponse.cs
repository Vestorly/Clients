using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Sourceresponse {
    

    
    public Source Source { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Sourceresponse {\n");
      
      sb.Append("  Source: ").Append(Source).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}