using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class GroupInput {
    

    
    public string Id { get; set; }

    

    
    public string Name { get; set; }

    

    
    public bool? IsDefault { get; set; }

    

    
    public bool? IsHidden { get; set; }

    

    
    public string NewWeeklyMailerContent { get; set; }

    

    
    public string NewsletterSubject { get; set; }

    

    
    public bool? Autopublish { get; set; }

    

    
    public int? NumberArticlesPerGroup { get; set; }

    

    
    public int? NumberArticlesPerNewsletter { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class GroupInput {\n");
      
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