using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Newsletters {
    

    
    public List<Newsletter> Newletters { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Newsletters {\n");
      
      sb.Append("  Newletters: ").Append(Newletters).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}