using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Article {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    
    [DataMember(Name="created_at", EmitDefaultValue=false)]
    public string createdAt { get; set; }

    
    
    [DataMember(Name="title", EmitDefaultValue=false)]
    public string title { get; set; }

    
    
    [DataMember(Name="body", EmitDefaultValue=false)]
    public string body { get; set; }

    
    
    [DataMember(Name="is_responsive", EmitDefaultValue=false)]
    public bool? isResponsive { get; set; }

    
    
    [DataMember(Name="is_proxy_needed", EmitDefaultValue=false)]
    public bool? isProxyNeeded { get; set; }

    
    
    [DataMember(Name="is_mobile_proxy_needed", EmitDefaultValue=false)]
    public bool? isMobileProxyNeeded { get; set; }

    
    
    [DataMember(Name="needs_sanitize", EmitDefaultValue=false)]
    public bool? needsSanitize { get; set; }

    
    
    [DataMember(Name="proxy_url", EmitDefaultValue=false)]
    public string proxyUrl { get; set; }

    
    
    [DataMember(Name="topic", EmitDefaultValue=false)]
    public string topic { get; set; }

    
    
    [DataMember(Name="suitability_score", EmitDefaultValue=false)]
    public string suitabilityScore { get; set; }

    
    
    [DataMember(Name="summary", EmitDefaultValue=false)]
    public string summary { get; set; }

    
    
    [DataMember(Name="image_path", EmitDefaultValue=false)]
    public string imagePath { get; set; }

    
    
    [DataMember(Name="image_url", EmitDefaultValue=false)]
    public string imageUrl { get; set; }

    
    
    [DataMember(Name="image_height", EmitDefaultValue=false)]
    public int? imageHeight { get; set; }

    
    
    [DataMember(Name="image_width", EmitDefaultValue=false)]
    public int? imageWidth { get; set; }

    
    
    [DataMember(Name="logo_url", EmitDefaultValue=false)]
    public string logoUrl { get; set; }

    
    
    [DataMember(Name="square_logo_url", EmitDefaultValue=false)]
    public string squareLogoUrl { get; set; }

    
    
    [DataMember(Name="url", EmitDefaultValue=false)]
    public string url { get; set; }

    
    
    [DataMember(Name="external_url", EmitDefaultValue=false)]
    public string externalUrl { get; set; }

    
    
    [DataMember(Name="external_url_source", EmitDefaultValue=false)]
    public string externalUrlSource { get; set; }

    
    
    [DataMember(Name="external_url_type", EmitDefaultValue=false)]
    public string externalUrlType { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Article {\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("  createdAt: ").Append(createdAt).Append("\n");
      
      sb.Append("  title: ").Append(title).Append("\n");
      
      sb.Append("  body: ").Append(body).Append("\n");
      
      sb.Append("  isResponsive: ").Append(isResponsive).Append("\n");
      
      sb.Append("  isProxyNeeded: ").Append(isProxyNeeded).Append("\n");
      
      sb.Append("  isMobileProxyNeeded: ").Append(isMobileProxyNeeded).Append("\n");
      
      sb.Append("  needsSanitize: ").Append(needsSanitize).Append("\n");
      
      sb.Append("  proxyUrl: ").Append(proxyUrl).Append("\n");
      
      sb.Append("  topic: ").Append(topic).Append("\n");
      
      sb.Append("  suitabilityScore: ").Append(suitabilityScore).Append("\n");
      
      sb.Append("  summary: ").Append(summary).Append("\n");
      
      sb.Append("  imagePath: ").Append(imagePath).Append("\n");
      
      sb.Append("  imageUrl: ").Append(imageUrl).Append("\n");
      
      sb.Append("  imageHeight: ").Append(imageHeight).Append("\n");
      
      sb.Append("  imageWidth: ").Append(imageWidth).Append("\n");
      
      sb.Append("  logoUrl: ").Append(logoUrl).Append("\n");
      
      sb.Append("  squareLogoUrl: ").Append(squareLogoUrl).Append("\n");
      
      sb.Append("  url: ").Append(url).Append("\n");
      
      sb.Append("  externalUrl: ").Append(externalUrl).Append("\n");
      
      sb.Append("  externalUrlSource: ").Append(externalUrlSource).Append("\n");
      
      sb.Append("  externalUrlType: ").Append(externalUrlType).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
