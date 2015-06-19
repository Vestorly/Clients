package io.swagger.client.model;

import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class NewsletterSetting  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("email_day_of_week")
  private Integer emailDayOfWeek = null;
  @SerializedName("email_hour")
  private Integer emailHour = null;
  @SerializedName("email_status")
  private String emailStatus = null;
  @SerializedName("facebook_active_wall")
  private String facebookActiveWall = null;
  @SerializedName("facebook_day_of_week")
  private Integer facebookDayOfWeek = null;
  @SerializedName("facebook_hour")
  private Integer facebookHour = null;
  @SerializedName("facebook_status")
  private String facebookStatus = null;
  @SerializedName("linkedin_active_wall")
  private String linkedinActiveWall = null;
  @SerializedName("linkedin_day_of_week")
  private Integer linkedinDayOfWeek = null;
  @SerializedName("linkedin_hour")
  private Integer linkedinHour = null;
  @SerializedName("linkedin_status")
  private String linkedinStatus = null;
  @SerializedName("social_title")
  private String socialTitle = null;
  @SerializedName("social_subtitle")
  private String socialSubtitle = null;
  @SerializedName("social_description")
  private String socialDescription = null;
  @SerializedName("twitter_day_of_week")
  private Integer twitterDayOfWeek = null;
  @SerializedName("twitter_hour")
  private Integer twitterHour = null;
  @SerializedName("twitter_status")
  private String twitterStatus = null;
  @SerializedName("social_posting_text")
  private String socialPostingText = null;
  @SerializedName("newsletter_type")
  private String newsletterType = null;
  @SerializedName("group_id")
  private String groupId = null;
  @SerializedName("montage_enabled")
  private Boolean montageEnabled = null;
  @SerializedName("montage_title")
  private String montageTitle = null;
  @SerializedName("montage_facebook_image_url")
  private String montageFacebookImageUrl = null;
  @SerializedName("montage_linkedin_image_url")
  private String montageLinkedinImageUrl = null;
  @SerializedName("montage_twitter_image_url")
  private String montageTwitterImageUrl = null;
  @SerializedName("newsletter_ids")
  private List<String> newsletterIds = new ArrayList<String>() ;
  @SerializedName("primary_email_font")
  private String primaryEmailFont = null;
  @SerializedName("footer_email_font")
  private String footerEmailFont = null;
  @SerializedName("email_accent_color")
  private String emailAccentColor = null;
  @SerializedName("render_version")
  private String renderVersion = null;
  @SerializedName("header_image_url")
  private String headerImageUrl = null;
  @SerializedName("header_background_color")
  private String headerBackgroundColor = null;
  @SerializedName("banner_color")
  private String bannerColor = null;
  @SerializedName("title_color")
  private String titleColor = null;
  @SerializedName("footer_html")
  private String footerHtml = null;
  @SerializedName("intro_text")
  private String introText = null;
  @SerializedName("footer_image_url")
  private String footerImageUrl = null;
  @SerializedName("subject")
  private String subject = null;
  @SerializedName("salutation_text")
  private String salutationText = null;
  @SerializedName("body_html")
  private String bodyHtml = null;

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getEmailDayOfWeek() {
    return emailDayOfWeek;
  }
  public void setEmailDayOfWeek(Integer emailDayOfWeek) {
    this.emailDayOfWeek = emailDayOfWeek;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getEmailHour() {
    return emailHour;
  }
  public void setEmailHour(Integer emailHour) {
    this.emailHour = emailHour;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getEmailStatus() {
    return emailStatus;
  }
  public void setEmailStatus(String emailStatus) {
    this.emailStatus = emailStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getFacebookActiveWall() {
    return facebookActiveWall;
  }
  public void setFacebookActiveWall(String facebookActiveWall) {
    this.facebookActiveWall = facebookActiveWall;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getFacebookDayOfWeek() {
    return facebookDayOfWeek;
  }
  public void setFacebookDayOfWeek(Integer facebookDayOfWeek) {
    this.facebookDayOfWeek = facebookDayOfWeek;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getFacebookHour() {
    return facebookHour;
  }
  public void setFacebookHour(Integer facebookHour) {
    this.facebookHour = facebookHour;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getFacebookStatus() {
    return facebookStatus;
  }
  public void setFacebookStatus(String facebookStatus) {
    this.facebookStatus = facebookStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getLinkedinActiveWall() {
    return linkedinActiveWall;
  }
  public void setLinkedinActiveWall(String linkedinActiveWall) {
    this.linkedinActiveWall = linkedinActiveWall;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getLinkedinDayOfWeek() {
    return linkedinDayOfWeek;
  }
  public void setLinkedinDayOfWeek(Integer linkedinDayOfWeek) {
    this.linkedinDayOfWeek = linkedinDayOfWeek;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getLinkedinHour() {
    return linkedinHour;
  }
  public void setLinkedinHour(Integer linkedinHour) {
    this.linkedinHour = linkedinHour;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getLinkedinStatus() {
    return linkedinStatus;
  }
  public void setLinkedinStatus(String linkedinStatus) {
    this.linkedinStatus = linkedinStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSocialTitle() {
    return socialTitle;
  }
  public void setSocialTitle(String socialTitle) {
    this.socialTitle = socialTitle;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSocialSubtitle() {
    return socialSubtitle;
  }
  public void setSocialSubtitle(String socialSubtitle) {
    this.socialSubtitle = socialSubtitle;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSocialDescription() {
    return socialDescription;
  }
  public void setSocialDescription(String socialDescription) {
    this.socialDescription = socialDescription;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getTwitterDayOfWeek() {
    return twitterDayOfWeek;
  }
  public void setTwitterDayOfWeek(Integer twitterDayOfWeek) {
    this.twitterDayOfWeek = twitterDayOfWeek;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getTwitterHour() {
    return twitterHour;
  }
  public void setTwitterHour(Integer twitterHour) {
    this.twitterHour = twitterHour;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getTwitterStatus() {
    return twitterStatus;
  }
  public void setTwitterStatus(String twitterStatus) {
    this.twitterStatus = twitterStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSocialPostingText() {
    return socialPostingText;
  }
  public void setSocialPostingText(String socialPostingText) {
    this.socialPostingText = socialPostingText;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getNewsletterType() {
    return newsletterType;
  }
  public void setNewsletterType(String newsletterType) {
    this.newsletterType = newsletterType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getGroupId() {
    return groupId;
  }
  public void setGroupId(String groupId) {
    this.groupId = groupId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getMontageEnabled() {
    return montageEnabled;
  }
  public void setMontageEnabled(Boolean montageEnabled) {
    this.montageEnabled = montageEnabled;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getMontageTitle() {
    return montageTitle;
  }
  public void setMontageTitle(String montageTitle) {
    this.montageTitle = montageTitle;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getMontageFacebookImageUrl() {
    return montageFacebookImageUrl;
  }
  public void setMontageFacebookImageUrl(String montageFacebookImageUrl) {
    this.montageFacebookImageUrl = montageFacebookImageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getMontageLinkedinImageUrl() {
    return montageLinkedinImageUrl;
  }
  public void setMontageLinkedinImageUrl(String montageLinkedinImageUrl) {
    this.montageLinkedinImageUrl = montageLinkedinImageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getMontageTwitterImageUrl() {
    return montageTwitterImageUrl;
  }
  public void setMontageTwitterImageUrl(String montageTwitterImageUrl) {
    this.montageTwitterImageUrl = montageTwitterImageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getNewsletterIds() {
    return newsletterIds;
  }
  public void setNewsletterIds(List<String> newsletterIds) {
    this.newsletterIds = newsletterIds;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getPrimaryEmailFont() {
    return primaryEmailFont;
  }
  public void setPrimaryEmailFont(String primaryEmailFont) {
    this.primaryEmailFont = primaryEmailFont;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getFooterEmailFont() {
    return footerEmailFont;
  }
  public void setFooterEmailFont(String footerEmailFont) {
    this.footerEmailFont = footerEmailFont;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getEmailAccentColor() {
    return emailAccentColor;
  }
  public void setEmailAccentColor(String emailAccentColor) {
    this.emailAccentColor = emailAccentColor;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getRenderVersion() {
    return renderVersion;
  }
  public void setRenderVersion(String renderVersion) {
    this.renderVersion = renderVersion;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getHeaderImageUrl() {
    return headerImageUrl;
  }
  public void setHeaderImageUrl(String headerImageUrl) {
    this.headerImageUrl = headerImageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getHeaderBackgroundColor() {
    return headerBackgroundColor;
  }
  public void setHeaderBackgroundColor(String headerBackgroundColor) {
    this.headerBackgroundColor = headerBackgroundColor;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getBannerColor() {
    return bannerColor;
  }
  public void setBannerColor(String bannerColor) {
    this.bannerColor = bannerColor;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getTitleColor() {
    return titleColor;
  }
  public void setTitleColor(String titleColor) {
    this.titleColor = titleColor;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getFooterHtml() {
    return footerHtml;
  }
  public void setFooterHtml(String footerHtml) {
    this.footerHtml = footerHtml;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getIntroText() {
    return introText;
  }
  public void setIntroText(String introText) {
    this.introText = introText;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getFooterImageUrl() {
    return footerImageUrl;
  }
  public void setFooterImageUrl(String footerImageUrl) {
    this.footerImageUrl = footerImageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSubject() {
    return subject;
  }
  public void setSubject(String subject) {
    this.subject = subject;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSalutationText() {
    return salutationText;
  }
  public void setSalutationText(String salutationText) {
    this.salutationText = salutationText;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getBodyHtml() {
    return bodyHtml;
  }
  public void setBodyHtml(String bodyHtml) {
    this.bodyHtml = bodyHtml;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NewsletterSetting {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  emailDayOfWeek: ").append(emailDayOfWeek).append("\n");
    sb.append("  emailHour: ").append(emailHour).append("\n");
    sb.append("  emailStatus: ").append(emailStatus).append("\n");
    sb.append("  facebookActiveWall: ").append(facebookActiveWall).append("\n");
    sb.append("  facebookDayOfWeek: ").append(facebookDayOfWeek).append("\n");
    sb.append("  facebookHour: ").append(facebookHour).append("\n");
    sb.append("  facebookStatus: ").append(facebookStatus).append("\n");
    sb.append("  linkedinActiveWall: ").append(linkedinActiveWall).append("\n");
    sb.append("  linkedinDayOfWeek: ").append(linkedinDayOfWeek).append("\n");
    sb.append("  linkedinHour: ").append(linkedinHour).append("\n");
    sb.append("  linkedinStatus: ").append(linkedinStatus).append("\n");
    sb.append("  socialTitle: ").append(socialTitle).append("\n");
    sb.append("  socialSubtitle: ").append(socialSubtitle).append("\n");
    sb.append("  socialDescription: ").append(socialDescription).append("\n");
    sb.append("  twitterDayOfWeek: ").append(twitterDayOfWeek).append("\n");
    sb.append("  twitterHour: ").append(twitterHour).append("\n");
    sb.append("  twitterStatus: ").append(twitterStatus).append("\n");
    sb.append("  socialPostingText: ").append(socialPostingText).append("\n");
    sb.append("  newsletterType: ").append(newsletterType).append("\n");
    sb.append("  groupId: ").append(groupId).append("\n");
    sb.append("  montageEnabled: ").append(montageEnabled).append("\n");
    sb.append("  montageTitle: ").append(montageTitle).append("\n");
    sb.append("  montageFacebookImageUrl: ").append(montageFacebookImageUrl).append("\n");
    sb.append("  montageLinkedinImageUrl: ").append(montageLinkedinImageUrl).append("\n");
    sb.append("  montageTwitterImageUrl: ").append(montageTwitterImageUrl).append("\n");
    sb.append("  newsletterIds: ").append(newsletterIds).append("\n");
    sb.append("  primaryEmailFont: ").append(primaryEmailFont).append("\n");
    sb.append("  footerEmailFont: ").append(footerEmailFont).append("\n");
    sb.append("  emailAccentColor: ").append(emailAccentColor).append("\n");
    sb.append("  renderVersion: ").append(renderVersion).append("\n");
    sb.append("  headerImageUrl: ").append(headerImageUrl).append("\n");
    sb.append("  headerBackgroundColor: ").append(headerBackgroundColor).append("\n");
    sb.append("  bannerColor: ").append(bannerColor).append("\n");
    sb.append("  titleColor: ").append(titleColor).append("\n");
    sb.append("  footerHtml: ").append(footerHtml).append("\n");
    sb.append("  introText: ").append(introText).append("\n");
    sb.append("  footerImageUrl: ").append(footerImageUrl).append("\n");
    sb.append("  subject: ").append(subject).append("\n");
    sb.append("  salutationText: ").append(salutationText).append("\n");
    sb.append("  bodyHtml: ").append(bodyHtml).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
