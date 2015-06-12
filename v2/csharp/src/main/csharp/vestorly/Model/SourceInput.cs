using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class SourceInput {
    
    
    [DataMember(Name="name", EmitDefaultValue=false)]
    public string Name { get; set; }

    
    
    [DataMember(Name="url", EmitDefaultValue=false)]
    public string Url { get; set; }

    
    
    [DataMember(Name="logo_url", EmitDefaultValue=false)]
    public string LogoUrl { get; set; }

    
    
    [DataMember(Name="enabled", EmitDefaultValue=false)]
    public bool? Enabled { get; set; }

    
    
    [DataMember(Name="custom_rss_feed", EmitDefaultValue=false)]
    public bool? CustomRssFeed { get; set; }

    
    
    [DataMember(Name="rss_publisher", EmitDefaultValue=false)]
    public string RssPublisher { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class SourceInput {\n");
      
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
