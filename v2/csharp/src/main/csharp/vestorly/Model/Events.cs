using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Events {
    
    
    [DataMember(Name="events", EmitDefaultValue=false)]
    public List<Event> events { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Events {\n");
      
      sb.Append("  events: ").Append(events).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
