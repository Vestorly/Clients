using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class NewsletterSetting {
    

    
    public string Id { get; set; }

    

    
    public int? EmailDayOfWeek { get; set; }

    

    
    public int? EmailHour { get; set; }

    

    
    public string EmailStatus { get; set; }

    

    
    public string FacebookActiveWall { get; set; }

    

    
    public int? FacebookDayOfWeek { get; set; }

    

    
    public int? FacebookHour { get; set; }

    

    
    public string FacebookStatus { get; set; }

    

    
    public string LinkedinActiveWall { get; set; }

    

    
    public int? LinkedinDayOfWeek { get; set; }

    

    
    public int? LinkedinHour { get; set; }

    

    
    public string LinkedinStatus { get; set; }

    

    
    public string SocialTitle { get; set; }

    

    
    public string SocialSubtitle { get; set; }

    

    
    public string SocialDescription { get; set; }

    

    
    public int? TwitterDayOfWeek { get; set; }

    

    
    public int? TwitterHour { get; set; }

    

    
    public string TwitterStatus { get; set; }

    

    
    public string SocialPostingText { get; set; }

    

    
    public string NewsletterType { get; set; }

    

    
    public string GroupId { get; set; }

    

    
    public bool? MontageEnabled { get; set; }

    

    
    public string MontageTitle { get; set; }

    

    
    public string MontageFacebookImageUrl { get; set; }

    

    
    public string MontageLinkedinImageUrl { get; set; }

    

    
    public string MontageTwitterImageUrl { get; set; }

    

    
    public List<string> NewsletterIds { get; set; }

    

    
    public string PrimaryEmailFont { get; set; }

    

    
    public string FooterEmailFont { get; set; }

    

    
    public string EmailAccentColor { get; set; }

    

    
    public string RenderVersion { get; set; }

    

    
    public string HeaderImageUrl { get; set; }

    

    
    public string HeaderBackgroundColor { get; set; }

    

    
    public string BannerColor { get; set; }

    

    
    public string TitleColor { get; set; }

    

    
    public string FooterHtml { get; set; }

    

    
    public string IntroText { get; set; }

    

    
    public string FooterImageUrl { get; set; }

    

    
    public string Subject { get; set; }

    

    
    public string SalutationText { get; set; }

    

    
    public string BodyHtml { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NewsletterSetting {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  EmailDayOfWeek: ").Append(EmailDayOfWeek).Append("\n");
      
      sb.Append("  EmailHour: ").Append(EmailHour).Append("\n");
      
      sb.Append("  EmailStatus: ").Append(EmailStatus).Append("\n");
      
      sb.Append("  FacebookActiveWall: ").Append(FacebookActiveWall).Append("\n");
      
      sb.Append("  FacebookDayOfWeek: ").Append(FacebookDayOfWeek).Append("\n");
      
      sb.Append("  FacebookHour: ").Append(FacebookHour).Append("\n");
      
      sb.Append("  FacebookStatus: ").Append(FacebookStatus).Append("\n");
      
      sb.Append("  LinkedinActiveWall: ").Append(LinkedinActiveWall).Append("\n");
      
      sb.Append("  LinkedinDayOfWeek: ").Append(LinkedinDayOfWeek).Append("\n");
      
      sb.Append("  LinkedinHour: ").Append(LinkedinHour).Append("\n");
      
      sb.Append("  LinkedinStatus: ").Append(LinkedinStatus).Append("\n");
      
      sb.Append("  SocialTitle: ").Append(SocialTitle).Append("\n");
      
      sb.Append("  SocialSubtitle: ").Append(SocialSubtitle).Append("\n");
      
      sb.Append("  SocialDescription: ").Append(SocialDescription).Append("\n");
      
      sb.Append("  TwitterDayOfWeek: ").Append(TwitterDayOfWeek).Append("\n");
      
      sb.Append("  TwitterHour: ").Append(TwitterHour).Append("\n");
      
      sb.Append("  TwitterStatus: ").Append(TwitterStatus).Append("\n");
      
      sb.Append("  SocialPostingText: ").Append(SocialPostingText).Append("\n");
      
      sb.Append("  NewsletterType: ").Append(NewsletterType).Append("\n");
      
      sb.Append("  GroupId: ").Append(GroupId).Append("\n");
      
      sb.Append("  MontageEnabled: ").Append(MontageEnabled).Append("\n");
      
      sb.Append("  MontageTitle: ").Append(MontageTitle).Append("\n");
      
      sb.Append("  MontageFacebookImageUrl: ").Append(MontageFacebookImageUrl).Append("\n");
      
      sb.Append("  MontageLinkedinImageUrl: ").Append(MontageLinkedinImageUrl).Append("\n");
      
      sb.Append("  MontageTwitterImageUrl: ").Append(MontageTwitterImageUrl).Append("\n");
      
      sb.Append("  NewsletterIds: ").Append(NewsletterIds).Append("\n");
      
      sb.Append("  PrimaryEmailFont: ").Append(PrimaryEmailFont).Append("\n");
      
      sb.Append("  FooterEmailFont: ").Append(FooterEmailFont).Append("\n");
      
      sb.Append("  EmailAccentColor: ").Append(EmailAccentColor).Append("\n");
      
      sb.Append("  RenderVersion: ").Append(RenderVersion).Append("\n");
      
      sb.Append("  HeaderImageUrl: ").Append(HeaderImageUrl).Append("\n");
      
      sb.Append("  HeaderBackgroundColor: ").Append(HeaderBackgroundColor).Append("\n");
      
      sb.Append("  BannerColor: ").Append(BannerColor).Append("\n");
      
      sb.Append("  TitleColor: ").Append(TitleColor).Append("\n");
      
      sb.Append("  FooterHtml: ").Append(FooterHtml).Append("\n");
      
      sb.Append("  IntroText: ").Append(IntroText).Append("\n");
      
      sb.Append("  FooterImageUrl: ").Append(FooterImageUrl).Append("\n");
      
      sb.Append("  Subject: ").Append(Subject).Append("\n");
      
      sb.Append("  SalutationText: ").Append(SalutationText).Append("\n");
      
      sb.Append("  BodyHtml: ").Append(BodyHtml).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}