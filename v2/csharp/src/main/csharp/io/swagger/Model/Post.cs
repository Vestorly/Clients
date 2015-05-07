using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Post {
    

    
    public string Id { get; set; }

    

    
    public string CreatedAt { get; set; }

    

    
    public string UpdatedAt { get; set; }

    

    
    public string ExternalUrl { get; set; }

    

    
    public string ExternalUrlSource { get; set; }

    

    
    public string ExternalUrlType { get; set; }

    

    
    public string ImagePath { get; set; }

    

    
    public string ImageUrl { get; set; }

    

    
    public string ImageHeight { get; set; }

    

    
    public string ImageWidth { get; set; }

    

    
    public string LogoUrl { get; set; }

    

    
    public string SquareLogoUrl { get; set; }

    

    
    public string NeedsSanitize { get; set; }

    

    
    public string Summary { get; set; }

    

    
    public string Topic { get; set; }

    

    
    public string ApprovalStatus { get; set; }

    

    
    public string ApprovalTransactions { get; set; }

    

    
    public List<string> GroupIds { get; set; }

    

    
    public string Slug { get; set; }

    

    
    public string ArticleId { get; set; }

    

    
    public string Comment { get; set; }

    

    
    public List<string> NewsletterIds { get; set; }

    

    
    public bool? IsFeatured { get; set; }

    

    
    public string AdvisorId { get; set; }

    

    
    public bool? IsPublished { get; set; }

    

    
    public bool? IsResponsive { get; set; }

    

    
    public bool? IsProxyNeeded { get; set; }

    

    
    public bool? IsMobileProxyNeeded { get; set; }

    

    
    public string ProxyUrl { get; set; }

    

    
    public string Video { get; set; }

    

    
    public string PdfAttachmentUrl { get; set; }

    

    
    public string PostDate { get; set; }

    

    
    public string DisplayDate { get; set; }

    

    
    public string SuitabilityScore { get; set; }

    

    
    public string VideoId { get; set; }

    

    
    public string DisplayTag { get; set; }

    

    
    public string DisplaySummary { get; set; }

    

    
    public string VestorlyUrl { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Post {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
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
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}