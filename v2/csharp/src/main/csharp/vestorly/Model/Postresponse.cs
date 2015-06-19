using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Postresponse {
    
    
    [DataMember(Name="post", EmitDefaultValue=false)]
    public Post post { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Postresponse {\n");
      
      sb.Append("  post: ").Append(post).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
