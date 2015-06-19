using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Articles {
    
    
    [DataMember(Name="articles", EmitDefaultValue=false)]
    public List<Article> articles { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Articles {\n");
      
      sb.Append("  articles: ").Append(articles).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
