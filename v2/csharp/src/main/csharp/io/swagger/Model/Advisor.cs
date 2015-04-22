using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Advisor {
    

    
    public string Id { get; set; }

    

    
    public string Name { get; set; }

    

    
    public string Tag { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Advisor {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  Name: ").Append(Name).Append("\n");
      
      sb.Append("  Tag: ").Append(Tag).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}