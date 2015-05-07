using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Meta {
    

    
    public string SortOrder { get; set; }

    

    
    public bool? MoreResults { get; set; }

    

    
    public string Message { get; set; }

    

    
    public List<string> SortedBy { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Meta {\n");
      
      sb.Append("  SortOrder: ").Append(SortOrder).Append("\n");
      
      sb.Append("  MoreResults: ").Append(MoreResults).Append("\n");
      
      sb.Append("  Message: ").Append(Message).Append("\n");
      
      sb.Append("  SortedBy: ").Append(SortedBy).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}