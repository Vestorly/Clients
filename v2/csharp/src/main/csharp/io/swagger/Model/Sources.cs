using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Sources {
    

    
    public List<Source> Sources { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Sources {\n");
      
      sb.Append("  Sources: ").Append(Sources).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}