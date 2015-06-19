using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Posts {
    
    
    [DataMember(Name="posts", EmitDefaultValue=false)]
    public List<Post> posts { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Posts {\n");
      
      sb.Append("  posts: ").Append(posts).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
