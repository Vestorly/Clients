using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class NewsletterSettings {
    
    
    [DataMember(Name="newsletter_settings", EmitDefaultValue=false)]
    public List<NewsletterSetting> NewsletterSettings { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NewsletterSettings {\n");
      
      sb.Append("  NewsletterSettings: ").Append(NewsletterSettings).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
