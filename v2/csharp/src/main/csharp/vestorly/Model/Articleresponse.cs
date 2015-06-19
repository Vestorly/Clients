using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Articleresponse {
    
    
    [DataMember(Name="article", EmitDefaultValue=false)]
    public Article article { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Articleresponse {\n");
      
      sb.Append("  article: ").Append(article).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
