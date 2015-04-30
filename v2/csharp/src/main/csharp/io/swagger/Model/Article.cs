using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Article {
    

    
    public string Id { get; set; }

    

    
    public string CreatedAt { get; set; }

    

    
    public string Title { get; set; }

    

    
    public string OpenCalaisTopics { get; set; }

    

    
    public string OpenCalaisKeywords { get; set; }

    

    
    public string VestorlyTopics { get; set; }

    

    
    public string Categories { get; set; }

    

    
    public string Summary { get; set; }

    

    
    public string UnparsedHtml { get; set; }

    

    
    public string LogoUrl { get; set; }

    

    
    public string ImageUrl { get; set; }

    

    
    public string Url { get; set; }

    

    
    public string ExternalUrl { get; set; }

    

    
    public string Tags { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Article {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
      
      sb.Append("  Title: ").Append(Title).Append("\n");
      
      sb.Append("  OpenCalaisTopics: ").Append(OpenCalaisTopics).Append("\n");
      
      sb.Append("  OpenCalaisKeywords: ").Append(OpenCalaisKeywords).Append("\n");
      
      sb.Append("  VestorlyTopics: ").Append(VestorlyTopics).Append("\n");
      
      sb.Append("  Categories: ").Append(Categories).Append("\n");
      
      sb.Append("  Summary: ").Append(Summary).Append("\n");
      
      sb.Append("  UnparsedHtml: ").Append(UnparsedHtml).Append("\n");
      
      sb.Append("  LogoUrl: ").Append(LogoUrl).Append("\n");
      
      sb.Append("  ImageUrl: ").Append(ImageUrl).Append("\n");
      
      sb.Append("  Url: ").Append(Url).Append("\n");
      
      sb.Append("  ExternalUrl: ").Append(ExternalUrl).Append("\n");
      
      sb.Append("  Tags: ").Append(Tags).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}