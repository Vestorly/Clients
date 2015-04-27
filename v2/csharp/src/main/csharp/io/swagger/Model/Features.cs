using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Features {
    

    
    public string Id { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Features {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}