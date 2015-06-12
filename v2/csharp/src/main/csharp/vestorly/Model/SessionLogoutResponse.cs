using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class SessionLogoutResponse {
    
    
    [DataMember(Name="message", EmitDefaultValue=false)]
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
