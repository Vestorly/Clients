using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Post {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    
    [DataMember(Name="created_at", EmitDefaultValue=false)]
    public string createdAt { get; set; }

    
    
    [DataMember(Name="updated_at", EmitDefaultValue=false)]
    public string updatedAt { get; set; }

    
    
    [DataMember(Name="external_url", EmitDefaultValue=false)]
    public string externalUrl { get; set; }

    
    
    [DataMember(Name="external_url_source", EmitDefaultValue=false)]
    public string externalUrlSource { get; set; }

    
    
    [DataMember(Name="external_url_type", EmitDefaultValue=false)]
    public string externalUrlType { get; set; }

    
    
    [DataMember(Name="image_path", EmitDefaultValue=false)]
    public string imagePath { get; set; }

    
    
    [DataMember(Name="image_url", EmitDefaultValue=false)]
    public string imageUrl { get; set; }

    
    
    [DataMember(Name="image_height", EmitDefaultValue=false)]
    public string imageHeight { get; set; }

    
    
    [DataMember(Name="image_width", EmitDefaultValue=false)]
    public string imageWidth { get; set; }

    
    
    [DataMember(Name="logo_url", EmitDefaultValue=false)]
    public string logoUrl { get; set; }

    
    
    [DataMember(Name="square_logo_url", EmitDefaultValue=false)]
    public string squareLogoUrl { get; set; }

    
    
    [DataMember(Name="needs_sanitize", EmitDefaultValue=false)]
    public string needsSanitize { get; set; }

    
    
    [DataMember(Name="summary", EmitDefaultValue=false)]
    public string summary { get; set; }

    
    
    [DataMember(Name="topic", EmitDefaultValue=false)]
    public string topic { get; set; }

    
    
    [DataMember(Name="approval_status", EmitDefaultValue=false)]
    public string approvalStatus { get; set; }

    
    
    [DataMember(Name="approval_transactions", EmitDefaultValue=false)]
    public List<string> approvalTransactions { get; set; }

    
    
    [DataMember(Name="group_ids", EmitDefaultValue=false)]
    public List<string> groupIds { get; set; }

    
    
    [DataMember(Name="slug", EmitDefaultValue=false)]
    public string slug { get; set; }

    
    
    [DataMember(Name="article_id", EmitDefaultValue=false)]
    public string articleId { get; set; }

    
    
    [DataMember(Name="comment", EmitDefaultValue=false)]
    public string comment { get; set; }

    
    
    [DataMember(Name="newsletter_ids", EmitDefaultValue=false)]
    public List<string> newsletterIds { get; set; }

    
    
    [DataMember(Name="is_featured", EmitDefaultValue=false)]
    public bool? isFeatured { get; set; }

    
    
    [DataMember(Name="advisor_id", EmitDefaultValue=false)]
    public string advisorId { get; set; }

    
    
    [DataMember(Name="is_published", EmitDefaultValue=false)]
    public bool? isPublished { get; set; }

    
    
    [DataMember(Name="is_responsive", EmitDefaultValue=false)]
    public bool? isResponsive { get; set; }

    
    
    [DataMember(Name="is_proxy_needed", EmitDefaultValue=false)]
    public bool? isProxyNeeded { get; set; }

    
    
    [DataMember(Name="is_mobile_proxy_needed", EmitDefaultValue=false)]
    public bool? isMobileProxyNeeded { get; set; }

    
    
    [DataMember(Name="proxy_url", EmitDefaultValue=false)]
    public string proxyUrl { get; set; }

    
    
    [DataMember(Name="video", EmitDefaultValue=false)]
    public string video { get; set; }

    
    
    [DataMember(Name="pdf_attachment_url", EmitDefaultValue=false)]
    public string pdfAttachmentUrl { get; set; }

    
    
    [DataMember(Name="post_date", EmitDefaultValue=false)]
    public string postDate { get; set; }

    
    
    [DataMember(Name="display_date", EmitDefaultValue=false)]
    public string displayDate { get; set; }

    
    
    [DataMember(Name="suitability_score", EmitDefaultValue=false)]
    public string suitabilityScore { get; set; }

    
    
    [DataMember(Name="video_id", EmitDefaultValue=false)]
    public string videoId { get; set; }

    
    
    [DataMember(Name="display_tag", EmitDefaultValue=false)]
    public string displayTag { get; set; }

    
    
    [DataMember(Name="display_summary", EmitDefaultValue=false)]
    public string displaySummary { get; set; }

    
    
    [DataMember(Name="vestorly_url", EmitDefaultValue=false)]
    public string vestorlyUrl { get; set; }

    
    
    [DataMember(Name="title", EmitDefaultValue=false)]
    public string title { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Post {\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("  createdAt: ").Append(createdAt).Append("\n");
      
      sb.Append("  updatedAt: ").Append(updatedAt).Append("\n");
      
      sb.Append("  externalUrl: ").Append(externalUrl).Append("\n");
      
      sb.Append("  externalUrlSource: ").Append(externalUrlSource).Append("\n");
      
      sb.Append("  externalUrlType: ").Append(externalUrlType).Append("\n");
      
      sb.Append("  imagePath: ").Append(imagePath).Append("\n");
      
      sb.Append("  imageUrl: ").Append(imageUrl).Append("\n");
      
      sb.Append("  imageHeight: ").Append(imageHeight).Append("\n");
      
      sb.Append("  imageWidth: ").Append(imageWidth).Append("\n");
      
      sb.Append("  logoUrl: ").Append(logoUrl).Append("\n");
      
      sb.Append("  squareLogoUrl: ").Append(squareLogoUrl).Append("\n");
      
      sb.Append("  needsSanitize: ").Append(needsSanitize).Append("\n");
      
      sb.Append("  summary: ").Append(summary).Append("\n");
      
      sb.Append("  topic: ").Append(topic).Append("\n");
      
      sb.Append("  approvalStatus: ").Append(approvalStatus).Append("\n");
      
      sb.Append("  approvalTransactions: ").Append(approvalTransactions).Append("\n");
      
      sb.Append("  groupIds: ").Append(groupIds).Append("\n");
      
      sb.Append("  slug: ").Append(slug).Append("\n");
      
      sb.Append("  articleId: ").Append(articleId).Append("\n");
      
      sb.Append("  comment: ").Append(comment).Append("\n");
      
      sb.Append("  newsletterIds: ").Append(newsletterIds).Append("\n");
      
      sb.Append("  isFeatured: ").Append(isFeatured).Append("\n");
      
      sb.Append("  advisorId: ").Append(advisorId).Append("\n");
      
      sb.Append("  isPublished: ").Append(isPublished).Append("\n");
      
      sb.Append("  isResponsive: ").Append(isResponsive).Append("\n");
      
      sb.Append("  isProxyNeeded: ").Append(isProxyNeeded).Append("\n");
      
      sb.Append("  isMobileProxyNeeded: ").Append(isMobileProxyNeeded).Append("\n");
      
      sb.Append("  proxyUrl: ").Append(proxyUrl).Append("\n");
      
      sb.Append("  video: ").Append(video).Append("\n");
      
      sb.Append("  pdfAttachmentUrl: ").Append(pdfAttachmentUrl).Append("\n");
      
      sb.Append("  postDate: ").Append(postDate).Append("\n");
      
      sb.Append("  displayDate: ").Append(displayDate).Append("\n");
      
      sb.Append("  suitabilityScore: ").Append(suitabilityScore).Append("\n");
      
      sb.Append("  videoId: ").Append(videoId).Append("\n");
      
      sb.Append("  displayTag: ").Append(displayTag).Append("\n");
      
      sb.Append("  displaySummary: ").Append(displaySummary).Append("\n");
      
      sb.Append("  vestorlyUrl: ").Append(vestorlyUrl).Append("\n");
      
      sb.Append("  title: ").Append(title).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
