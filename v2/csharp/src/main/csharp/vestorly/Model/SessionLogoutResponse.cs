using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class SessionLogoutResponse {
    
    
    [DataMember(Name="message", EmitDefaultValue=false)]
    public string message { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class SessionLogoutResponse {\n");
      
      sb.Append("  message: ").Append(message).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
