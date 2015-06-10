using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class PostInput {
    
    
    [DataMember(Name="created_at", EmitDefaultValue=false)]
    public string CreatedAt { get; set; }

    
    
    [DataMember(Name="updated_at", EmitDefaultValue=false)]
    public string UpdatedAt { get; set; }

    
    
    [DataMember(Name="external_url", EmitDefaultValue=false)]
    public string ExternalUrl { get; set; }

    
    
    [DataMember(Name="external_url_source", EmitDefaultValue=false)]
    public string ExternalUrlSource { get; set; }

    
    
    [DataMember(Name="external_url_type", EmitDefaultValue=false)]
    public string ExternalUrlType { get; set; }

    
    
    [DataMember(Name="image_path", EmitDefaultValue=false)]
    public string ImagePath { get; set; }

    
    
    [DataMember(Name="image_url", EmitDefaultValue=false)]
    public string ImageUrl { get; set; }

    
    
    [DataMember(Name="image_height", EmitDefaultValue=false)]
    public string ImageHeight { get; set; }

    
    
    [DataMember(Name="image_width", EmitDefaultValue=false)]
    public string ImageWidth { get; set; }

    
    
    [DataMember(Name="logo_url", EmitDefaultValue=false)]
    public string LogoUrl { get; set; }

    
    
    [DataMember(Name="square_logo_url", EmitDefaultValue=false)]
    public string SquareLogoUrl { get; set; }

    
    
    [DataMember(Name="needs_sanitize", EmitDefaultValue=false)]
    public string NeedsSanitize { get; set; }

    
    
    [DataMember(Name="summary", EmitDefaultValue=false)]
    public string Summary { get; set; }

    
    
    [DataMember(Name="topic", EmitDefaultValue=false)]
    public string Topic { get; set; }

    
    
    [DataMember(Name="approval_status", EmitDefaultValue=false)]
    public string ApprovalStatus { get; set; }

    
    
    [DataMember(Name="approval_transactions", EmitDefaultValue=false)]
    public List<string> ApprovalTransactions { get; set; }

    
    
    [DataMember(Name="group_ids", EmitDefaultValue=false)]
    public List<string> GroupIds { get; set; }

    
    
    [DataMember(Name="slug", EmitDefaultValue=false)]
    public string Slug { get; set; }

    
    
    [DataMember(Name="article_id", EmitDefaultValue=false)]
    public string ArticleId { get; set; }

    
    
    [DataMember(Name="comment", EmitDefaultValue=false)]
    public string Comment { get; set; }

    
    
    [DataMember(Name="newsletter_ids", EmitDefaultValue=false)]
    public List<string> NewsletterIds { get; set; }

    
    
    [DataMember(Name="is_featured", EmitDefaultValue=false)]
    public bool? IsFeatured { get; set; }

    
    
    [DataMember(Name="advisor_id", EmitDefaultValue=false)]
    public string AdvisorId { get; set; }

    
    
    [DataMember(Name="is_published", EmitDefaultValue=false)]
    public bool? IsPublished { get; set; }

    
    
    [DataMember(Name="is_responsive", EmitDefaultValue=false)]
    public bool? IsResponsive { get; set; }

    
    
    [DataMember(Name="is_proxy_needed", EmitDefaultValue=false)]
    public bool? IsProxyNeeded { get; set; }

    
    
    [DataMember(Name="is_mobile_proxy_needed", EmitDefaultValue=false)]
    public bool? IsMobileProxyNeeded { get; set; }

    
    
    [DataMember(Name="proxy_url", EmitDefaultValue=false)]
    public string ProxyUrl { get; set; }

    
    
    [DataMember(Name="video", EmitDefaultValue=false)]
    public string Video { get; set; }

    
    
    [DataMember(Name="pdf_attachment_url", EmitDefaultValue=false)]
    public string PdfAttachmentUrl { get; set; }

    
    
    [DataMember(Name="post_date", EmitDefaultValue=false)]
    public string PostDate { get; set; }

    
    
    [DataMember(Name="display_date", EmitDefaultValue=false)]
    public string DisplayDate { get; set; }

    
    
    [DataMember(Name="suitability_score", EmitDefaultValue=false)]
    public string SuitabilityScore { get; set; }

    
    
    [DataMember(Name="video_id", EmitDefaultValue=false)]
    public string VideoId { get; set; }

    
    
    [DataMember(Name="display_tag", EmitDefaultValue=false)]
    public string DisplayTag { get; set; }

    
    
    [DataMember(Name="display_summary", EmitDefaultValue=false)]
    public string DisplaySummary { get; set; }

    
    
    [DataMember(Name="vestorly_url", EmitDefaultValue=false)]
    public string VestorlyUrl { get; set; }

    
    
    [DataMember(Name="title", EmitDefaultValue=false)]
    public string Title { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class PostInput {\n");
      
      sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
      
      sb.Append("  UpdatedAt: ").Append(UpdatedAt).Append("\n");
      
      sb.Append("  ExternalUrl: ").Append(ExternalUrl).Append("\n");
      
      sb.Append("  ExternalUrlSource: ").Append(ExternalUrlSource).Append("\n");
      
      sb.Append("  ExternalUrlType: ").Append(ExternalUrlType).Append("\n");
      
      sb.Append("  ImagePath: ").Append(ImagePath).Append("\n");
      
      sb.Append("  ImageUrl: ").Append(ImageUrl).Append("\n");
      
      sb.Append("  ImageHeight: ").Append(ImageHeight).Append("\n");
      
      sb.Append("  ImageWidth: ").Append(ImageWidth).Append("\n");
      
      sb.Append("  LogoUrl: ").Append(LogoUrl).Append("\n");
      
      sb.Append("  SquareLogoUrl: ").Append(SquareLogoUrl).Append("\n");
      
      sb.Append("  NeedsSanitize: ").Append(NeedsSanitize).Append("\n");
      
      sb.Append("  Summary: ").Append(Summary).Append("\n");
      
      sb.Append("  Topic: ").Append(Topic).Append("\n");
      
      sb.Append("  ApprovalStatus: ").Append(ApprovalStatus).Append("\n");
      
      sb.Append("  ApprovalTransactions: ").Append(ApprovalTransactions).Append("\n");
      
      sb.Append("  GroupIds: ").Append(GroupIds).Append("\n");
      
      sb.Append("  Slug: ").Append(Slug).Append("\n");
      
      sb.Append("  ArticleId: ").Append(ArticleId).Append("\n");
      
      sb.Append("  Comment: ").Append(Comment).Append("\n");
      
      sb.Append("  NewsletterIds: ").Append(NewsletterIds).Append("\n");
      
      sb.Append("  IsFeatured: ").Append(IsFeatured).Append("\n");
      
      sb.Append("  AdvisorId: ").Append(AdvisorId).Append("\n");
      
      sb.Append("  IsPublished: ").Append(IsPublished).Append("\n");
      
      sb.Append("  IsResponsive: ").Append(IsResponsive).Append("\n");
      
      sb.Append("  IsProxyNeeded: ").Append(IsProxyNeeded).Append("\n");
      
      sb.Append("  IsMobileProxyNeeded: ").Append(IsMobileProxyNeeded).Append("\n");
      
      sb.Append("  ProxyUrl: ").Append(ProxyUrl).Append("\n");
      
      sb.Append("  Video: ").Append(Video).Append("\n");
      
      sb.Append("  PdfAttachmentUrl: ").Append(PdfAttachmentUrl).Append("\n");
      
      sb.Append("  PostDate: ").Append(PostDate).Append("\n");
      
      sb.Append("  DisplayDate: ").Append(DisplayDate).Append("\n");
      
      sb.Append("  SuitabilityScore: ").Append(SuitabilityScore).Append("\n");
      
      sb.Append("  VideoId: ").Append(VideoId).Append("\n");
      
      sb.Append("  DisplayTag: ").Append(DisplayTag).Append("\n");
      
      sb.Append("  DisplaySummary: ").Append(DisplaySummary).Append("\n");
      
      sb.Append("  VestorlyUrl: ").Append(VestorlyUrl).Append("\n");
      
      sb.Append("  Title: ").Append(Title).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
