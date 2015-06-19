using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Eventcreateresponse {
    
    
    [DataMember(Name="meta", EmitDefaultValue=false)]
    public Meta meta { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Eventcreateresponse {\n");
      
      sb.Append("  meta: ").Append(meta).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
