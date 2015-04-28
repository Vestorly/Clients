using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Eventresponse {
    

    
    public Event Event { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Eventresponse {\n");
      
      sb.Append("  Event: ").Append(Event).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}