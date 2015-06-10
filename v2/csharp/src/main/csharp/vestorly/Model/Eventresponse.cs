using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Eventresponse {
    
    
    [DataMember(Name="event", EmitDefaultValue=false)]
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
