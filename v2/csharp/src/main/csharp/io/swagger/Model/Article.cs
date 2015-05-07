using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Article {
    

    
    public string Id { get; set; }

    

    
    public string CreatedAt { get; set; }

    

    
    public string Title { get; set; }

    

    
    public string Body { get; set; }

    

    
    public bool? IsResponsive { get; set; }

    

    
    public bool? IsProxyNeeded { get; set; }

    

    
    public bool? IsMobileProxyNeeded { get; set; }

    

    
    public bool? NeedsSanitize { get; set; }

    

    
    public string ProxyUrl { get; set; }

    

    
    public string Topic { get; set; }

    

    
    public string SuitabilityScore { get; set; }

    

    
    public string Summary { get; set; }

    

    
    public string ImagePath { get; set; }

    

    
    public string ImageUrl { get; set; }

    

    
    public int? ImageHeight { get; set; }

    

    
    public int? ImageWidth { get; set; }

    

    
    public string LogoUrl { get; set; }

    

    
    public string SquareLogoUrl { get; set; }

    

    
    public string Url { get; set; }

    

    
    public string ExternalUrl { get; set; }

    

    
    public string ExternalUrlSource { get; set; }

    

    
    public string ExternalUrlType { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Article {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
      
      sb.Append("  Title: ").Append(Title).Append("\n");
      
      sb.Append("  Body: ").Append(Body).Append("\n");
      
      sb.Append("  IsResponsive: ").Append(IsResponsive).Append("\n");
      
      sb.Append("  IsProxyNeeded: ").Append(IsProxyNeeded).Append("\n");
      
      sb.Append("  IsMobileProxyNeeded: ").Append(IsMobileProxyNeeded).Append("\n");
      
      sb.Append("  NeedsSanitize: ").Append(NeedsSanitize).Append("\n");
      
      sb.Append("  ProxyUrl: ").Append(ProxyUrl).Append("\n");
      
      sb.Append("  Topic: ").Append(Topic).Append("\n");
      
      sb.Append("  SuitabilityScore: ").Append(SuitabilityScore).Append("\n");
      
      sb.Append("  Summary: ").Append(Summary).Append("\n");
      
      sb.Append("  ImagePath: ").Append(ImagePath).Append("\n");
      
      sb.Append("  ImageUrl: ").Append(ImageUrl).Append("\n");
      
      sb.Append("  ImageHeight: ").Append(ImageHeight).Append("\n");
      
      sb.Append("  ImageWidth: ").Append(ImageWidth).Append("\n");
      
      sb.Append("  LogoUrl: ").Append(LogoUrl).Append("\n");
      
      sb.Append("  SquareLogoUrl: ").Append(SquareLogoUrl).Append("\n");
      
      sb.Append("  Url: ").Append(Url).Append("\n");
      
      sb.Append("  ExternalUrl: ").Append(ExternalUrl).Append("\n");
      
      sb.Append("  ExternalUrlSource: ").Append(ExternalUrlSource).Append("\n");
      
      sb.Append("  ExternalUrlType: ").Append(ExternalUrlType).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}