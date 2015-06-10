using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Newsletter {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    
    [DataMember(Name="is_sent", EmitDefaultValue=false)]
    public bool? IsSent { get; set; }

    
    
    [DataMember(Name="is_default", EmitDefaultValue=false)]
    public bool? IsDefault { get; set; }

    
    
    [DataMember(Name="click_count", EmitDefaultValue=false)]
    public long? ClickCount { get; set; }

    
    
    [DataMember(Name="unique_click_count", EmitDefaultValue=false)]
    public long? UniqueClickCount { get; set; }

    
    
    [DataMember(Name="total_click_count", EmitDefaultValue=false)]
    public long? TotalClickCount { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Newsletter {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  IsSent: ").Append(IsSent).Append("\n");
      
      sb.Append("  IsDefault: ").Append(IsDefault).Append("\n");
      
      sb.Append("  ClickCount: ").Append(ClickCount).Append("\n");
      
      sb.Append("  UniqueClickCount: ").Append(UniqueClickCount).Append("\n");
      
      sb.Append("  TotalClickCount: ").Append(TotalClickCount).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
