using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Newslettersettingresponse {
    

    
    public NewsletterSetting NewsletterSetting { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Newslettersettingresponse {\n");
      
      sb.Append("  NewsletterSetting: ").Append(NewsletterSetting).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}