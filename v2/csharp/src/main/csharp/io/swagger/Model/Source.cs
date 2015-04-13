using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Source {
    

    /* Id of source */
    
    public string Id { get; set; }

    

    /* Name of source */
    
    public string Name { get; set; }

    

    /* Url of source */
    
    public string Url { get; set; }

    

    /* Logo url of source */
    
    public string LogoUrl { get; set; }

    

    /* Is the source enabled */
    
    public bool? Enabled { get; set; }

    

    /* Is the source using custom RSS feed */
    
    public bool? CustomRssFeed { get; set; }

    

    /* RSS publisher of the source */
    
    public string RssPublisher { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Source {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  Name: ").Append(Name).Append("\n");
      
      sb.Append("  Url: ").Append(Url).Append("\n");
      
      sb.Append("  LogoUrl: ").Append(LogoUrl).Append("\n");
      
      sb.Append("  Enabled: ").Append(Enabled).Append("\n");
      
      sb.Append("  CustomRssFeed: ").Append(CustomRssFeed).Append("\n");
      
      sb.Append("  RssPublisher: ").Append(RssPublisher).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}