using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Memberresponse {
    

    
    public Member Member { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Memberresponse {\n");
      
      sb.Append("  Member: ").Append(Member).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}