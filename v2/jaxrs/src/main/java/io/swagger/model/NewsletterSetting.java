package io.swagger.model;

import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class NewsletterSetting  {
  
  private String id = null;
  private Integer emailDayOfWeek = null;
  private Integer emailHour = null;
  private String emailStatus = null;
  private String facebookActiveWall = null;
  private Integer facebookDayOfWeek = null;
  private Integer facebookHour = null;
  private String facebookStatus = null;
  private String linkedinActiveWall = null;
  private Integer linkedinDayOfWeek = null;
  private Integer linkedinHour = null;
  private String linkedinStatus = null;
  private String socialTitle = null;
  private String socialSubtitle = null;
  private String socialDescription = null;
  private Integer twitterDayOfWeek = null;
  private Integer twitterHour = null;
  private String twitterStatus = null;
  private String socialPostingText = null;
  private String newsletterType = null;
  private String groupId = null;
  private Boolean montageEnabled = null;
  private String montageTitle = null;
  private String montageFacebookImageUrl = null;
  private String montageLinkedinImageUrl = null;
  private String montageTwitterImageUrl = null;
  private List<String> newsletterIds = new ArrayList<String>() ;
  private String primaryEmailFont = null;
  private String footerEmailFont = null;
  private String emailAccentColor = null;
  private String renderVersion = null;
  private String headerImageUrl = null;
  private String headerBackgroundColor = null;
  private String bannerColor = null;
  private String titleColor = null;
  private String footerHtml = null;
  private String introText = null;
  private String footerImageUrl = null;
  private String subject = null;
  private String salutationText = null;
  private String bodyHtml = null;

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("emailDayOfWeek")
  public Integer getEmailDayOfWeek() {
    return emailDayOfWeek;
  }
  public void setEmailDayOfWeek(Integer emailDayOfWeek) {
    this.emailDayOfWeek = emailDayOfWeek;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("emailHour")
  public Integer getEmailHour() {
    return emailHour;
  }
  public void setEmailHour(Integer emailHour) {
    this.emailHour = emailHour;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("emailStatus")
  public String getEmailStatus() {
    return emailStatus;
  }
  public void setEmailStatus(String emailStatus) {
    this.emailStatus = emailStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("facebookActiveWall")
  public String getFacebookActiveWall() {
    return facebookActiveWall;
  }
  public void setFacebookActiveWall(String facebookActiveWall) {
    this.facebookActiveWall = facebookActiveWall;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("facebookDayOfWeek")
  public Integer getFacebookDayOfWeek() {
    return facebookDayOfWeek;
  }
  public void setFacebookDayOfWeek(Integer facebookDayOfWeek) {
    this.facebookDayOfWeek = facebookDayOfWeek;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("facebookHour")
  public Integer getFacebookHour() {
    return facebookHour;
  }
  public void setFacebookHour(Integer facebookHour) {
    this.facebookHour = facebookHour;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("facebookStatus")
  public String getFacebookStatus() {
    return facebookStatus;
  }
  public void setFacebookStatus(String facebookStatus) {
    this.facebookStatus = facebookStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("linkedinActiveWall")
  public String getLinkedinActiveWall() {
    return linkedinActiveWall;
  }
  public void setLinkedinActiveWall(String linkedinActiveWall) {
    this.linkedinActiveWall = linkedinActiveWall;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("linkedinDayOfWeek")
  public Integer getLinkedinDayOfWeek() {
    return linkedinDayOfWeek;
  }
  public void setLinkedinDayOfWeek(Integer linkedinDayOfWeek) {
    this.linkedinDayOfWeek = linkedinDayOfWeek;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("linkedinHour")
  public Integer getLinkedinHour() {
    return linkedinHour;
  }
  public void setLinkedinHour(Integer linkedinHour) {
    this.linkedinHour = linkedinHour;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("linkedinStatus")
  public String getLinkedinStatus() {
    return linkedinStatus;
  }
  public void setLinkedinStatus(String linkedinStatus) {
    this.linkedinStatus = linkedinStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("socialTitle")
  public String getSocialTitle() {
    return socialTitle;
  }
  public void setSocialTitle(String socialTitle) {
    this.socialTitle = socialTitle;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("socialSubtitle")
  public String getSocialSubtitle() {
    return socialSubtitle;
  }
  public void setSocialSubtitle(String socialSubtitle) {
    this.socialSubtitle = socialSubtitle;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("socialDescription")
  public String getSocialDescription() {
    return socialDescription;
  }
  public void setSocialDescription(String socialDescription) {
    this.socialDescription = socialDescription;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("twitterDayOfWeek")
  public Integer getTwitterDayOfWeek() {
    return twitterDayOfWeek;
  }
  public void setTwitterDayOfWeek(Integer twitterDayOfWeek) {
    this.twitterDayOfWeek = twitterDayOfWeek;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("twitterHour")
  public Integer getTwitterHour() {
    return twitterHour;
  }
  public void setTwitterHour(Integer twitterHour) {
    this.twitterHour = twitterHour;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("twitterStatus")
  public String getTwitterStatus() {
    return twitterStatus;
  }
  public void setTwitterStatus(String twitterStatus) {
    this.twitterStatus = twitterStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("socialPostingText")
  public String getSocialPostingText() {
    return socialPostingText;
  }
  public void setSocialPostingText(String socialPostingText) {
    this.socialPostingText = socialPostingText;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("newsletterType")
  public String getNewsletterType() {
    return newsletterType;
  }
  public void setNewsletterType(String newsletterType) {
    this.newsletterType = newsletterType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("groupId")
  public String getGroupId() {
    return groupId;
  }
  public void setGroupId(String groupId) {
    this.groupId = groupId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("montageEnabled")
  public Boolean getMontageEnabled() {
    return montageEnabled;
  }
  public void setMontageEnabled(Boolean montageEnabled) {
    this.montageEnabled = montageEnabled;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("montageTitle")
  public String getMontageTitle() {
    return montageTitle;
  }
  public void setMontageTitle(String montageTitle) {
    this.montageTitle = montageTitle;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("montageFacebookImageUrl")
  public String getMontageFacebookImageUrl() {
    return montageFacebookImageUrl;
  }
  public void setMontageFacebookImageUrl(String montageFacebookImageUrl) {
    this.montageFacebookImageUrl = montageFacebookImageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("montageLinkedinImageUrl")
  public String getMontageLinkedinImageUrl() {
    return montageLinkedinImageUrl;
  }
  public void setMontageLinkedinImageUrl(String montageLinkedinImageUrl) {
    this.montageLinkedinImageUrl = montageLinkedinImageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("montageTwitterImageUrl")
  public String getMontageTwitterImageUrl() {
    return montageTwitterImageUrl;
  }
  public void setMontageTwitterImageUrl(String montageTwitterImageUrl) {
    this.montageTwitterImageUrl = montageTwitterImageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("newsletterIds")
  public List<String> getNewsletterIds() {
    return newsletterIds;
  }
  public void setNewsletterIds(List<String> newsletterIds) {
    this.newsletterIds = newsletterIds;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("primaryEmailFont")
  public String getPrimaryEmailFont() {
    return primaryEmailFont;
  }
  public void setPrimaryEmailFont(String primaryEmailFont) {
    this.primaryEmailFont = primaryEmailFont;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("footerEmailFont")
  public String getFooterEmailFont() {
    return footerEmailFont;
  }
  public void setFooterEmailFont(String footerEmailFont) {
    this.footerEmailFont = footerEmailFont;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("emailAccentColor")
  public String getEmailAccentColor() {
    return emailAccentColor;
  }
  public void setEmailAccentColor(String emailAccentColor) {
    this.emailAccentColor = emailAccentColor;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("renderVersion")
  public String getRenderVersion() {
    return renderVersion;
  }
  public void setRenderVersion(String renderVersion) {
    this.renderVersion = renderVersion;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("headerImageUrl")
  public String getHeaderImageUrl() {
    return headerImageUrl;
  }
  public void setHeaderImageUrl(String headerImageUrl) {
    this.headerImageUrl = headerImageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("headerBackgroundColor")
  public String getHeaderBackgroundColor() {
    return headerBackgroundColor;
  }
  public void setHeaderBackgroundColor(String headerBackgroundColor) {
    this.headerBackgroundColor = headerBackgroundColor;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("bannerColor")
  public String getBannerColor() {
    return bannerColor;
  }
  public void setBannerColor(String bannerColor) {
    this.bannerColor = bannerColor;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("titleColor")
  public String getTitleColor() {
    return titleColor;
  }
  public void setTitleColor(String titleColor) {
    this.titleColor = titleColor;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("footerHtml")
  public String getFooterHtml() {
    return footerHtml;
  }
  public void setFooterHtml(String footerHtml) {
    this.footerHtml = footerHtml;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("introText")
  public String getIntroText() {
    return introText;
  }
  public void setIntroText(String introText) {
    this.introText = introText;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("footerImageUrl")
  public String getFooterImageUrl() {
    return footerImageUrl;
  }
  public void setFooterImageUrl(String footerImageUrl) {
    this.footerImageUrl = footerImageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("subject")
  public String getSubject() {
    return subject;
  }
  public void setSubject(String subject) {
    this.subject = subject;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("salutationText")
  public String getSalutationText() {
    return salutationText;
  }
  public void setSalutationText(String salutationText) {
    this.salutationText = salutationText;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("bodyHtml")
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
