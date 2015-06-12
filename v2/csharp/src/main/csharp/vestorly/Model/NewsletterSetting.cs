using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class NewsletterSetting {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    
    [DataMember(Name="email_day_of_week", EmitDefaultValue=false)]
    public int? EmailDayOfWeek { get; set; }

    
    
    [DataMember(Name="email_hour", EmitDefaultValue=false)]
    public int? EmailHour { get; set; }

    
    
    [DataMember(Name="email_status", EmitDefaultValue=false)]
    public string EmailStatus { get; set; }

    
    
    [DataMember(Name="facebook_active_wall", EmitDefaultValue=false)]
    public string FacebookActiveWall { get; set; }

    
    
    [DataMember(Name="facebook_day_of_week", EmitDefaultValue=false)]
    public int? FacebookDayOfWeek { get; set; }

    
    
    [DataMember(Name="facebook_hour", EmitDefaultValue=false)]
    public int? FacebookHour { get; set; }

    
    
    [DataMember(Name="facebook_status", EmitDefaultValue=false)]
    public string FacebookStatus { get; set; }

    
    
    [DataMember(Name="linkedin_active_wall", EmitDefaultValue=false)]
    public string LinkedinActiveWall { get; set; }

    
    
    [DataMember(Name="linkedin_day_of_week", EmitDefaultValue=false)]
    public int? LinkedinDayOfWeek { get; set; }

    
    
    [DataMember(Name="linkedin_hour", EmitDefaultValue=false)]
    public int? LinkedinHour { get; set; }

    
    
    [DataMember(Name="linkedin_status", EmitDefaultValue=false)]
    public string LinkedinStatus { get; set; }

    
    
    [DataMember(Name="social_title", EmitDefaultValue=false)]
    public string SocialTitle { get; set; }

    
    
    [DataMember(Name="social_subtitle", EmitDefaultValue=false)]
    public string SocialSubtitle { get; set; }

    
    
    [DataMember(Name="social_description", EmitDefaultValue=false)]
    public string SocialDescription { get; set; }

    
    
    [DataMember(Name="twitter_day_of_week", EmitDefaultValue=false)]
    public int? TwitterDayOfWeek { get; set; }

    
    
    [DataMember(Name="twitter_hour", EmitDefaultValue=false)]
    public int? TwitterHour { get; set; }

    
    
    [DataMember(Name="twitter_status", EmitDefaultValue=false)]
    public string TwitterStatus { get; set; }

    
    
    [DataMember(Name="social_posting_text", EmitDefaultValue=false)]
    public string SocialPostingText { get; set; }

    
    
    [DataMember(Name="newsletter_type", EmitDefaultValue=false)]
    public string NewsletterType { get; set; }

    
    
    [DataMember(Name="group_id", EmitDefaultValue=false)]
    public string GroupId { get; set; }

    
    
    [DataMember(Name="montage_enabled", EmitDefaultValue=false)]
    public bool? MontageEnabled { get; set; }

    
    
    [DataMember(Name="montage_title", EmitDefaultValue=false)]
    public string MontageTitle { get; set; }

    
    
    [DataMember(Name="montage_facebook_image_url", EmitDefaultValue=false)]
    public string MontageFacebookImageUrl { get; set; }

    
    
    [DataMember(Name="montage_linkedin_image_url", EmitDefaultValue=false)]
    public string MontageLinkedinImageUrl { get; set; }

    
    
    [DataMember(Name="montage_twitter_image_url", EmitDefaultValue=false)]
    public string MontageTwitterImageUrl { get; set; }

    
    
    [DataMember(Name="newsletter_ids", EmitDefaultValue=false)]
    public List<string> NewsletterIds { get; set; }

    
    
    [DataMember(Name="primary_email_font", EmitDefaultValue=false)]
    public string PrimaryEmailFont { get; set; }

    
    
    [DataMember(Name="footer_email_font", EmitDefaultValue=false)]
    public string FooterEmailFont { get; set; }

    
    
    [DataMember(Name="email_accent_color", EmitDefaultValue=false)]
    public string EmailAccentColor { get; set; }

    
    
    [DataMember(Name="render_version", EmitDefaultValue=false)]
    public string RenderVersion { get; set; }

    
    
    [DataMember(Name="header_image_url", EmitDefaultValue=false)]
    public string HeaderImageUrl { get; set; }

    
    
    [DataMember(Name="header_background_color", EmitDefaultValue=false)]
    public string HeaderBackgroundColor { get; set; }

    
    
    [DataMember(Name="banner_color", EmitDefaultValue=false)]
    public string BannerColor { get; set; }

    
    
    [DataMember(Name="title_color", EmitDefaultValue=false)]
    public string TitleColor { get; set; }

    
    
    [DataMember(Name="footer_html", EmitDefaultValue=false)]
    public string FooterHtml { get; set; }

    
    
    [DataMember(Name="intro_text", EmitDefaultValue=false)]
    public string IntroText { get; set; }

    
    
    [DataMember(Name="footer_image_url", EmitDefaultValue=false)]
    public string FooterImageUrl { get; set; }

    
    
    [DataMember(Name="subject", EmitDefaultValue=false)]
    public string Subject { get; set; }

    
    
    [DataMember(Name="salutation_text", EmitDefaultValue=false)]
    public string SalutationText { get; set; }

    
    
    [DataMember(Name="body_html", EmitDefaultValue=false)]
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
