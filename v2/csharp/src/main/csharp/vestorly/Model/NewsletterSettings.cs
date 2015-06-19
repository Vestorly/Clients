using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class NewsletterSettings {
    
    
    [DataMember(Name="newsletter_settings", EmitDefaultValue=false)]
    public List<NewsletterSetting> newsletterSettings { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NewsletterSettings {\n");
      
      sb.Append("  newsletterSettings: ").Append(newsletterSettings).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
