using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Events {
    
    
    [DataMember(Name="events", EmitDefaultValue=false)]
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
