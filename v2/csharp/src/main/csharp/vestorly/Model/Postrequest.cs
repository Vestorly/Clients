using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Postrequest {
    
    
    [DataMember(Name="post", EmitDefaultValue=false)]
    public PostInput post { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Postrequest {\n");
      
      sb.Append("  post: ").Append(post).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
