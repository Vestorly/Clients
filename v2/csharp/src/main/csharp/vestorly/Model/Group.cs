using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Group {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    
    [DataMember(Name="name", EmitDefaultValue=false)]
    public string Name { get; set; }

    
    
    [DataMember(Name="is_default", EmitDefaultValue=false)]
    public bool? IsDefault { get; set; }

    
    
    [DataMember(Name="is_hidden", EmitDefaultValue=false)]
    public bool? IsHidden { get; set; }

    
    
    [DataMember(Name="new_weekly_mailer_content", EmitDefaultValue=false)]
    public string NewWeeklyMailerContent { get; set; }

    
    
    [DataMember(Name="newsletter_subject", EmitDefaultValue=false)]
    public string NewsletterSubject { get; set; }

    
    
    [DataMember(Name="autopublish", EmitDefaultValue=false)]
    public bool? Autopublish { get; set; }

    
    
    [DataMember(Name="number_articles_per_group", EmitDefaultValue=false)]
    public int? NumberArticlesPerGroup { get; set; }

    
    
    [DataMember(Name="number_articles_per_newsletter", EmitDefaultValue=false)]
    public int? NumberArticlesPerNewsletter { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Group {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  Name: ").Append(Name).Append("\n");
      
      sb.Append("  IsDefault: ").Append(IsDefault).Append("\n");
      
      sb.Append("  IsHidden: ").Append(IsHidden).Append("\n");
      
      sb.Append("  NewWeeklyMailerContent: ").Append(NewWeeklyMailerContent).Append("\n");
      
      sb.Append("  NewsletterSubject: ").Append(NewsletterSubject).Append("\n");
      
      sb.Append("  Autopublish: ").Append(Autopublish).Append("\n");
      
      sb.Append("  NumberArticlesPerGroup: ").Append(NumberArticlesPerGroup).Append("\n");
      
      sb.Append("  NumberArticlesPerNewsletter: ").Append(NumberArticlesPerNewsletter).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
