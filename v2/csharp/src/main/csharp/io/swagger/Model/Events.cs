using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Events {
    

    
    public List<Event> Events { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Events {\n");
      
      sb.Append("  Events: ").Append(Events).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}