using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Eventresponse {
    
    
    [DataMember(Name="event", EmitDefaultValue=false)]
    public Event _event { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Eventresponse {\n");
      
      sb.Append("  _event: ").Append(_event).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
