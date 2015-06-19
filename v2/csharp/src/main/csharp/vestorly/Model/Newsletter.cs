using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Newsletter {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    
    [DataMember(Name="is_sent", EmitDefaultValue=false)]
    public bool? isSent { get; set; }

    
    
    [DataMember(Name="is_default", EmitDefaultValue=false)]
    public bool? isDefault { get; set; }

    
    
    [DataMember(Name="click_count", EmitDefaultValue=false)]
    public long? clickCount { get; set; }

    
    
    [DataMember(Name="unique_click_count", EmitDefaultValue=false)]
    public long? uniqueClickCount { get; set; }

    
    
    [DataMember(Name="total_click_count", EmitDefaultValue=false)]
    public long? totalClickCount { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Newsletter {\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("  isSent: ").Append(isSent).Append("\n");
      
      sb.Append("  isDefault: ").Append(isDefault).Append("\n");
      
      sb.Append("  clickCount: ").Append(clickCount).Append("\n");
      
      sb.Append("  uniqueClickCount: ").Append(uniqueClickCount).Append("\n");
      
      sb.Append("  totalClickCount: ").Append(totalClickCount).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
