using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Articleresponse {
    
    
    [DataMember(Name="article", EmitDefaultValue=false)]
    public Article Article { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Articleresponse {\n");
      
      sb.Append("  Article: ").Append(Article).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
