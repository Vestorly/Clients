using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class MemberReport {
    
    
    [DataMember(Name="day", EmitDefaultValue=false)]
    public int? day { get; set; }

    
    
    [DataMember(Name="event_count", EmitDefaultValue=false)]
    public int? eventCount { get; set; }

    
    
    [DataMember(Name="originator_group_id", EmitDefaultValue=false)]
    public string originatorGroupId { get; set; }

    
    
    [DataMember(Name="parent_originator_id", EmitDefaultValue=false)]
    public string parentOriginatorId { get; set; }

    
    
    [DataMember(Name="source", EmitDefaultValue=false)]
    public string source { get; set; }

    
    
    [DataMember(Name="type", EmitDefaultValue=false)]
    public string type { get; set; }

    
    
    [DataMember(Name="year", EmitDefaultValue=false)]
    public int? year { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MemberReport {\n");
      
      sb.Append("  day: ").Append(day).Append("\n");
      
      sb.Append("  eventCount: ").Append(eventCount).Append("\n");
      
      sb.Append("  originatorGroupId: ").Append(originatorGroupId).Append("\n");
      
      sb.Append("  parentOriginatorId: ").Append(parentOriginatorId).Append("\n");
      
      sb.Append("  source: ").Append(source).Append("\n");
      
      sb.Append("  type: ").Append(type).Append("\n");
      
      sb.Append("  year: ").Append(year).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
