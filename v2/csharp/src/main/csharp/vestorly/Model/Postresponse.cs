using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Postresponse {
    
    
    [DataMember(Name="post", EmitDefaultValue=false)]
    public Post Post { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Postresponse {\n");
      
      sb.Append("  Post: ").Append(Post).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
