using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Source {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    
    [DataMember(Name="name", EmitDefaultValue=false)]
    public string name { get; set; }

    
    
    [DataMember(Name="url", EmitDefaultValue=false)]
    public string url { get; set; }

    
    
    [DataMember(Name="logo_url", EmitDefaultValue=false)]
    public string logoUrl { get; set; }

    
    
    [DataMember(Name="enabled", EmitDefaultValue=false)]
    public bool? enabled { get; set; }

    
    
    [DataMember(Name="custom_rss_feed", EmitDefaultValue=false)]
    public bool? customRssFeed { get; set; }

    
    
    [DataMember(Name="rss_publisher", EmitDefaultValue=false)]
    public string rssPublisher { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Source {\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("  name: ").Append(name).Append("\n");
      
      sb.Append("  url: ").Append(url).Append("\n");
      
      sb.Append("  logoUrl: ").Append(logoUrl).Append("\n");
      
      sb.Append("  enabled: ").Append(enabled).Append("\n");
      
      sb.Append("  customRssFeed: ").Append(customRssFeed).Append("\n");
      
      sb.Append("  rssPublisher: ").Append(rssPublisher).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
