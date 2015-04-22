using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Advisors {
    

    
    public List<Advisor> Advisors { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Advisors {\n");
      
      sb.Append("  Advisors: ").Append(Advisors).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}