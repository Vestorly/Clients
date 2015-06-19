using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Newsletterresponse {
    
    
    [DataMember(Name="newsletter", EmitDefaultValue=false)]
    public Newsletter newsletter { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Newsletterresponse {\n");
      
      sb.Append("  newsletter: ").Append(newsletter).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
