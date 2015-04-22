using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class NewsletterSettingsInput {
    

    
    public string EmailStatus { get; set; }

    

    
    public string TwitterStatus { get; set; }

    

    
    public string LinkedinStatus { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NewsletterSettingsInput {\n");
      
      sb.Append("  EmailStatus: ").Append(EmailStatus).Append("\n");
      
      sb.Append("  TwitterStatus: ").Append(TwitterStatus).Append("\n");
      
      sb.Append("  LinkedinStatus: ").Append(LinkedinStatus).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}