using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Newslettersettings {
    

    
    public List<NewsletterSetting> NewletterSettings { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Newslettersettings {\n");
      
      sb.Append("  NewletterSettings: ").Append(NewletterSettings).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}