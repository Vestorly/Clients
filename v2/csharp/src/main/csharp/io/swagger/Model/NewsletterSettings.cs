using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class NewsletterSettings {
    

    
    public string Id { get; set; }

    

    
    public string EmailStatus { get; set; }

    

    
    public string TwitterStatus { get; set; }

    

    
    public string LinkedinStatus { get; set; }

    

    
    public int? EmailHour { get; set; }

    

    
    public int? TwitterHour { get; set; }

    

    
    public int? LinkedinHour { get; set; }

    

    
    public int? FacebookHour { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NewsletterSettings {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  EmailStatus: ").Append(EmailStatus).Append("\n");
      
      sb.Append("  TwitterStatus: ").Append(TwitterStatus).Append("\n");
      
      sb.Append("  LinkedinStatus: ").Append(LinkedinStatus).Append("\n");
      
      sb.Append("  EmailHour: ").Append(EmailHour).Append("\n");
      
      sb.Append("  TwitterHour: ").Append(TwitterHour).Append("\n");
      
      sb.Append("  LinkedinHour: ").Append(LinkedinHour).Append("\n");
      
      sb.Append("  FacebookHour: ").Append(FacebookHour).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}