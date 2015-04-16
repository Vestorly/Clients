using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Advisor {
    

    
    public bool? ClientOnly { get; set; }

    

    
    public bool? ImgCompressed { get; set; }

    

    
    public bool? ImgChanged { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Advisor {\n");
      
      sb.Append("  ClientOnly: ").Append(ClientOnly).Append("\n");
      
      sb.Append("  ImgCompressed: ").Append(ImgCompressed).Append("\n");
      
      sb.Append("  ImgChanged: ").Append(ImgChanged).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}