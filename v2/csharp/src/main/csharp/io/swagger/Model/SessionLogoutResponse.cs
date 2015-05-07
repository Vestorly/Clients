using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class SessionLogoutResponse {
    

    
    public string Message { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class SessionLogoutResponse {\n");
      
      sb.Append("  Message: ").Append(Message).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}