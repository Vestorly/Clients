using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Posts {
    
    
    [DataMember(Name="posts", EmitDefaultValue=false)]
    public List<Post> Posts { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Posts {\n");
      
      sb.Append("  Posts: ").Append(Posts).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
