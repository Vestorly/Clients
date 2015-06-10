using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class MemberReport {
    
    
    [DataMember(Name="day", EmitDefaultValue=false)]
    public int? Day { get; set; }

    
    
    [DataMember(Name="event_count", EmitDefaultValue=false)]
    public int? EventCount { get; set; }

    
    
    [DataMember(Name="originator_group_id", EmitDefaultValue=false)]
    public string OriginatorGroupId { get; set; }

    
    
    [DataMember(Name="parent_originator_id", EmitDefaultValue=false)]
    public string ParentOriginatorId { get; set; }

    
    
    [DataMember(Name="source", EmitDefaultValue=false)]
    public string Source { get; set; }

    
    
    [DataMember(Name="type", EmitDefaultValue=false)]
    public string Type { get; set; }

    
    
    [DataMember(Name="year", EmitDefaultValue=false)]
    public int? Year { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MemberReport {\n");
      
      sb.Append("  Day: ").Append(Day).Append("\n");
      
      sb.Append("  EventCount: ").Append(EventCount).Append("\n");
      
      sb.Append("  OriginatorGroupId: ").Append(OriginatorGroupId).Append("\n");
      
      sb.Append("  ParentOriginatorId: ").Append(ParentOriginatorId).Append("\n");
      
      sb.Append("  Source: ").Append(Source).Append("\n");
      
      sb.Append("  Type: ").Append(Type).Append("\n");
      
      sb.Append("  Year: ").Append(Year).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
