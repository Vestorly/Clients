using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Group {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    
    [DataMember(Name="name", EmitDefaultValue=false)]
    public string name { get; set; }

    
    
    [DataMember(Name="is_default", EmitDefaultValue=false)]
    public bool? isDefault { get; set; }

    
    
    [DataMember(Name="is_hidden", EmitDefaultValue=false)]
    public bool? isHidden { get; set; }

    
    
    [DataMember(Name="new_weekly_mailer_content", EmitDefaultValue=false)]
    public string newWeeklyMailerContent { get; set; }

    
    
    [DataMember(Name="newsletter_subject", EmitDefaultValue=false)]
    public string newsletterSubject { get; set; }

    
    
    [DataMember(Name="autopublish", EmitDefaultValue=false)]
    public bool? autopublish { get; set; }

    
    
    [DataMember(Name="number_articles_per_group", EmitDefaultValue=false)]
    public int? numberArticlesPerGroup { get; set; }

    
    
    [DataMember(Name="number_articles_per_newsletter", EmitDefaultValue=false)]
    public int? numberArticlesPerNewsletter { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Group {\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("  name: ").Append(name).Append("\n");
      
      sb.Append("  isDefault: ").Append(isDefault).Append("\n");
      
      sb.Append("  isHidden: ").Append(isHidden).Append("\n");
      
      sb.Append("  newWeeklyMailerContent: ").Append(newWeeklyMailerContent).Append("\n");
      
      sb.Append("  newsletterSubject: ").Append(newsletterSubject).Append("\n");
      
      sb.Append("  autopublish: ").Append(autopublish).Append("\n");
      
      sb.Append("  numberArticlesPerGroup: ").Append(numberArticlesPerGroup).Append("\n");
      
      sb.Append("  numberArticlesPerNewsletter: ").Append(numberArticlesPerNewsletter).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
