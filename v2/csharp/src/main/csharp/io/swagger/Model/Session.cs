using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Session {
    

    
    public string Id { get; set; }

    

    
    public string VestorlyAuth { get; set; }

    

    
    public bool? NewUser { get; set; }

    

    
    public User CurrentUser { get; set; }

    

    
    public Settings Settings { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Session {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  VestorlyAuth: ").Append(VestorlyAuth).Append("\n");
      
      sb.Append("  NewUser: ").Append(NewUser).Append("\n");
      
      sb.Append("  CurrentUser: ").Append(CurrentUser).Append("\n");
      
      sb.Append("  Settings: ").Append(Settings).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}