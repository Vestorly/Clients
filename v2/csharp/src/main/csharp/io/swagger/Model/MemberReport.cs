using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class MemberReport {
    

    
    public int? Day { get; set; }

    

    
    public int? EventCount { get; set; }

    

    
    public string OriginatorGroupId { get; set; }

    

    
    public string ParentOriginatorId { get; set; }

    

    
    public string Source { get; set; }

    

    
    public string Type { get; set; }

    

    
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