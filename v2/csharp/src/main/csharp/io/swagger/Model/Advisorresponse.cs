using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Advisorresponse {
    

    
    public Advisor Advisor { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Advisorresponse {\n");
      
      sb.Append("  Advisor: ").Append(Advisor).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}