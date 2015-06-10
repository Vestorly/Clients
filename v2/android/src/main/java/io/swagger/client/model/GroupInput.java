package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class GroupInput  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("is_default")
  private Boolean isDefault = null;
  @SerializedName("is_hidden")
  private Boolean isHidden = null;
  @SerializedName("new_weekly_mailer_content")
  private String newWeeklyMailerContent = null;
  @SerializedName("newsletter_subject")
  private String newsletterSubject = null;
  @SerializedName("autopublish")
  private Boolean autopublish = null;
  @SerializedName("number_articles_per_group")
  private Integer numberArticlesPerGroup = null;
  @SerializedName("number_articles_per_newsletter")
  private Integer numberArticlesPerNewsletter = null;

  
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
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsDefault() {
    return isDefault;
  }
  public void setIsDefault(Boolean isDefault) {
    this.isDefault = isDefault;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsHidden() {
    return isHidden;
  }
  public void setIsHidden(Boolean isHidden) {
    this.isHidden = isHidden;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getNewWeeklyMailerContent() {
    return newWeeklyMailerContent;
  }
  public void setNewWeeklyMailerContent(String newWeeklyMailerContent) {
    this.newWeeklyMailerContent = newWeeklyMailerContent;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getNewsletterSubject() {
    return newsletterSubject;
  }
  public void setNewsletterSubject(String newsletterSubject) {
    this.newsletterSubject = newsletterSubject;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getAutopublish() {
    return autopublish;
  }
  public void setAutopublish(Boolean autopublish) {
    this.autopublish = autopublish;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getNumberArticlesPerGroup() {
    return numberArticlesPerGroup;
  }
  public void setNumberArticlesPerGroup(Integer numberArticlesPerGroup) {
    this.numberArticlesPerGroup = numberArticlesPerGroup;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getNumberArticlesPerNewsletter() {
    return numberArticlesPerNewsletter;
  }
  public void setNumberArticlesPerNewsletter(Integer numberArticlesPerNewsletter) {
    this.numberArticlesPerNewsletter = numberArticlesPerNewsletter;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class GroupInput {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  isDefault: ").append(isDefault).append("\n");
    sb.append("  isHidden: ").append(isHidden).append("\n");
    sb.append("  newWeeklyMailerContent: ").append(newWeeklyMailerContent).append("\n");
    sb.append("  newsletterSubject: ").append(newsletterSubject).append("\n");
    sb.append("  autopublish: ").append(autopublish).append("\n");
    sb.append("  numberArticlesPerGroup: ").append(numberArticlesPerGroup).append("\n");
    sb.append("  numberArticlesPerNewsletter: ").append(numberArticlesPerNewsletter).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
