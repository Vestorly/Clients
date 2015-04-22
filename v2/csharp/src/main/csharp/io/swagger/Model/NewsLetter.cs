using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Newsletter {
    

    
    public string Id { get; set; }

    

    
    public bool? IsSent { get; set; }

    

    
    public bool? IsDefault { get; set; }

    

    
    public long? ClickCount { get; set; }

    

    
    public long? UniqueClickCount { get; set; }

    

    
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