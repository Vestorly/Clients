using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Groups {
    

    
    public List<Group> Groups { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Groups {\n");
      
      sb.Append("  Groups: ").Append(Groups).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}