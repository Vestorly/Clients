using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class NewsletterSettingsInput {
    
    
    [DataMember(Name="newsletter_setting", EmitDefaultValue=false)]
    public NewsletterSetting newsletterSetting { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NewsletterSettingsInput {\n");
      
      sb.Append("  newsletterSetting: ").Append(newsletterSetting).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
