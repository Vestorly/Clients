using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Article {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    
    [DataMember(Name="created_at", EmitDefaultValue=false)]
    public string CreatedAt { get; set; }

    
    
    [DataMember(Name="title", EmitDefaultValue=false)]
    public string Title { get; set; }

    
    
    [DataMember(Name="body", EmitDefaultValue=false)]
    public string Body { get; set; }

    
    
    [DataMember(Name="is_responsive", EmitDefaultValue=false)]
    public bool? IsResponsive { get; set; }

    
    
    [DataMember(Name="is_proxy_needed", EmitDefaultValue=false)]
    public bool? IsProxyNeeded { get; set; }

    
    
    [DataMember(Name="is_mobile_proxy_needed", EmitDefaultValue=false)]
    public bool? IsMobileProxyNeeded { get; set; }

    
    
    [DataMember(Name="needs_sanitize", EmitDefaultValue=false)]
    public bool? NeedsSanitize { get; set; }

    
    
    [DataMember(Name="proxy_url", EmitDefaultValue=false)]
    public string ProxyUrl { get; set; }

    
    
    [DataMember(Name="topic", EmitDefaultValue=false)]
    public string Topic { get; set; }

    
    
    [DataMember(Name="suitability_score", EmitDefaultValue=false)]
    public string SuitabilityScore { get; set; }

    
    
    [DataMember(Name="summary", EmitDefaultValue=false)]
    public string Summary { get; set; }

    
    
    [DataMember(Name="image_path", EmitDefaultValue=false)]
    public string ImagePath { get; set; }

    
    
    [DataMember(Name="image_url", EmitDefaultValue=false)]
    public string ImageUrl { get; set; }

    
    
    [DataMember(Name="image_height", EmitDefaultValue=false)]
    public int? ImageHeight { get; set; }

    
    
    [DataMember(Name="image_width", EmitDefaultValue=false)]
    public int? ImageWidth { get; set; }

    
    
    [DataMember(Name="logo_url", EmitDefaultValue=false)]
    public string LogoUrl { get; set; }

    
    
    [DataMember(Name="square_logo_url", EmitDefaultValue=false)]
    public string SquareLogoUrl { get; set; }

    
    
    [DataMember(Name="url", EmitDefaultValue=false)]
    public string Url { get; set; }

    
    
    [DataMember(Name="external_url", EmitDefaultValue=false)]
    public string ExternalUrl { get; set; }

    
    
    [DataMember(Name="external_url_source", EmitDefaultValue=false)]
    public string ExternalUrlSource { get; set; }

    
    
    [DataMember(Name="external_url_type", EmitDefaultValue=false)]
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
