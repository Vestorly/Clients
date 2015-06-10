using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Eventcreateresponse {
    
    
    [DataMember(Name="meta", EmitDefaultValue=false)]
    public Meta Meta { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Eventcreateresponse {\n");
      
      sb.Append("  Meta: ").Append(Meta).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
