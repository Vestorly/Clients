using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Source {
    

    
    public string Id { get; set; }

    

    
    public string Name { get; set; }

    

    
    public string Url { get; set; }

    

    
    public string LogoUrl { get; set; }

    

    
    public bool? Enabled { get; set; }

    

    
    public bool? CustomRssFeed { get; set; }

    

    
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