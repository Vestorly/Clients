using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Newsletterresponse {
    
    
    [DataMember(Name="newsletter", EmitDefaultValue=false)]
    public Newsletter Newsletter { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Newsletterresponse {\n");
      
      sb.Append("  Newsletter: ").Append(Newsletter).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
