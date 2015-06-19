using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class NewsletterSetting {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    
    [DataMember(Name="email_day_of_week", EmitDefaultValue=false)]
    public int? emailDayOfWeek { get; set; }

    
    
    [DataMember(Name="email_hour", EmitDefaultValue=false)]
    public int? emailHour { get; set; }

    
    
    [DataMember(Name="email_status", EmitDefaultValue=false)]
    public string emailStatus { get; set; }

    
    
    [DataMember(Name="facebook_active_wall", EmitDefaultValue=false)]
    public string facebookActiveWall { get; set; }

    
    
    [DataMember(Name="facebook_day_of_week", EmitDefaultValue=false)]
    public int? facebookDayOfWeek { get; set; }

    
    
    [DataMember(Name="facebook_hour", EmitDefaultValue=false)]
    public int? facebookHour { get; set; }

    
    
    [DataMember(Name="facebook_status", EmitDefaultValue=false)]
    public string facebookStatus { get; set; }

    
    
    [DataMember(Name="linkedin_active_wall", EmitDefaultValue=false)]
    public string linkedinActiveWall { get; set; }

    
    
    [DataMember(Name="linkedin_day_of_week", EmitDefaultValue=false)]
    public int? linkedinDayOfWeek { get; set; }

    
    
    [DataMember(Name="linkedin_hour", EmitDefaultValue=false)]
    public int? linkedinHour { get; set; }

    
    
    [DataMember(Name="linkedin_status", EmitDefaultValue=false)]
    public string linkedinStatus { get; set; }

    
    
    [DataMember(Name="social_title", EmitDefaultValue=false)]
    public string socialTitle { get; set; }

    
    
    [DataMember(Name="social_subtitle", EmitDefaultValue=false)]
    public string socialSubtitle { get; set; }

    
    
    [DataMember(Name="social_description", EmitDefaultValue=false)]
    public string socialDescription { get; set; }

    
    
    [DataMember(Name="twitter_day_of_week", EmitDefaultValue=false)]
    public int? twitterDayOfWeek { get; set; }

    
    
    [DataMember(Name="twitter_hour", EmitDefaultValue=false)]
    public int? twitterHour { get; set; }

    
    
    [DataMember(Name="twitter_status", EmitDefaultValue=false)]
    public string twitterStatus { get; set; }

    
    
    [DataMember(Name="social_posting_text", EmitDefaultValue=false)]
    public string socialPostingText { get; set; }

    
    
    [DataMember(Name="newsletter_type", EmitDefaultValue=false)]
    public string newsletterType { get; set; }

    
    
    [DataMember(Name="group_id", EmitDefaultValue=false)]
    public string groupId { get; set; }

    
    
    [DataMember(Name="montage_enabled", EmitDefaultValue=false)]
    public bool? montageEnabled { get; set; }

    
    
    [DataMember(Name="montage_title", EmitDefaultValue=false)]
    public string montageTitle { get; set; }

    
    
    [DataMember(Name="montage_facebook_image_url", EmitDefaultValue=false)]
    public string montageFacebookImageUrl { get; set; }

    
    
    [DataMember(Name="montage_linkedin_image_url", EmitDefaultValue=false)]
    public string montageLinkedinImageUrl { get; set; }

    
    
    [DataMember(Name="montage_twitter_image_url", EmitDefaultValue=false)]
    public string montageTwitterImageUrl { get; set; }

    
    
    [DataMember(Name="newsletter_ids", EmitDefaultValue=false)]
    public List<string> newsletterIds { get; set; }

    
    
    [DataMember(Name="primary_email_font", EmitDefaultValue=false)]
    public string primaryEmailFont { get; set; }

    
    
    [DataMember(Name="footer_email_font", EmitDefaultValue=false)]
    public string footerEmailFont { get; set; }

    
    
    [DataMember(Name="email_accent_color", EmitDefaultValue=false)]
    public string emailAccentColor { get; set; }

    
    
    [DataMember(Name="render_version", EmitDefaultValue=false)]
    public string renderVersion { get; set; }

    
    
    [DataMember(Name="header_image_url", EmitDefaultValue=false)]
    public string headerImageUrl { get; set; }

    
    
    [DataMember(Name="header_background_color", EmitDefaultValue=false)]
    public string headerBackgroundColor { get; set; }

    
    
    [DataMember(Name="banner_color", EmitDefaultValue=false)]
    public string bannerColor { get; set; }

    
    
    [DataMember(Name="title_color", EmitDefaultValue=false)]
    public string titleColor { get; set; }

    
    
    [DataMember(Name="footer_html", EmitDefaultValue=false)]
    public string footerHtml { get; set; }

    
    
    [DataMember(Name="intro_text", EmitDefaultValue=false)]
    public string introText { get; set; }

    
    
    [DataMember(Name="footer_image_url", EmitDefaultValue=false)]
    public string footerImageUrl { get; set; }

    
    
    [DataMember(Name="subject", EmitDefaultValue=false)]
    public string subject { get; set; }

    
    
    [DataMember(Name="salutation_text", EmitDefaultValue=false)]
    public string salutationText { get; set; }

    
    
    [DataMember(Name="body_html", EmitDefaultValue=false)]
    public string bodyHtml { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NewsletterSetting {\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("  emailDayOfWeek: ").Append(emailDayOfWeek).Append("\n");
      
      sb.Append("  emailHour: ").Append(emailHour).Append("\n");
      
      sb.Append("  emailStatus: ").Append(emailStatus).Append("\n");
      
      sb.Append("  facebookActiveWall: ").Append(facebookActiveWall).Append("\n");
      
      sb.Append("  facebookDayOfWeek: ").Append(facebookDayOfWeek).Append("\n");
      
      sb.Append("  facebookHour: ").Append(facebookHour).Append("\n");
      
      sb.Append("  facebookStatus: ").Append(facebookStatus).Append("\n");
      
      sb.Append("  linkedinActiveWall: ").Append(linkedinActiveWall).Append("\n");
      
      sb.Append("  linkedinDayOfWeek: ").Append(linkedinDayOfWeek).Append("\n");
      
      sb.Append("  linkedinHour: ").Append(linkedinHour).Append("\n");
      
      sb.Append("  linkedinStatus: ").Append(linkedinStatus).Append("\n");
      
      sb.Append("  socialTitle: ").Append(socialTitle).Append("\n");
      
      sb.Append("  socialSubtitle: ").Append(socialSubtitle).Append("\n");
      
      sb.Append("  socialDescription: ").Append(socialDescription).Append("\n");
      
      sb.Append("  twitterDayOfWeek: ").Append(twitterDayOfWeek).Append("\n");
      
      sb.Append("  twitterHour: ").Append(twitterHour).Append("\n");
      
      sb.Append("  twitterStatus: ").Append(twitterStatus).Append("\n");
      
      sb.Append("  socialPostingText: ").Append(socialPostingText).Append("\n");
      
      sb.Append("  newsletterType: ").Append(newsletterType).Append("\n");
      
      sb.Append("  groupId: ").Append(groupId).Append("\n");
      
      sb.Append("  montageEnabled: ").Append(montageEnabled).Append("\n");
      
      sb.Append("  montageTitle: ").Append(montageTitle).Append("\n");
      
      sb.Append("  montageFacebookImageUrl: ").Append(montageFacebookImageUrl).Append("\n");
      
      sb.Append("  montageLinkedinImageUrl: ").Append(montageLinkedinImageUrl).Append("\n");
      
      sb.Append("  montageTwitterImageUrl: ").Append(montageTwitterImageUrl).Append("\n");
      
      sb.Append("  newsletterIds: ").Append(newsletterIds).Append("\n");
      
      sb.Append("  primaryEmailFont: ").Append(primaryEmailFont).Append("\n");
      
      sb.Append("  footerEmailFont: ").Append(footerEmailFont).Append("\n");
      
      sb.Append("  emailAccentColor: ").Append(emailAccentColor).Append("\n");
      
      sb.Append("  renderVersion: ").Append(renderVersion).Append("\n");
      
      sb.Append("  headerImageUrl: ").Append(headerImageUrl).Append("\n");
      
      sb.Append("  headerBackgroundColor: ").Append(headerBackgroundColor).Append("\n");
      
      sb.Append("  bannerColor: ").Append(bannerColor).Append("\n");
      
      sb.Append("  titleColor: ").Append(titleColor).Append("\n");
      
      sb.Append("  footerHtml: ").Append(footerHtml).Append("\n");
      
      sb.Append("  introText: ").Append(introText).Append("\n");
      
      sb.Append("  footerImageUrl: ").Append(footerImageUrl).Append("\n");
      
      sb.Append("  subject: ").Append(subject).Append("\n");
      
      sb.Append("  salutationText: ").Append(salutationText).Append("\n");
      
      sb.Append("  bodyHtml: ").Append(bodyHtml).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
