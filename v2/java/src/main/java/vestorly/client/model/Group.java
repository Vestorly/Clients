package vestorly.client.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Group  {
  
  private String id = null;
  private String name = null;
  private Boolean isDefault = null;
  private Boolean isHidden = null;
  private String newWeeklyMailerContent = null;
  private String newsletterSubject = null;
  private Boolean autopublish = null;
  private Integer numberArticlesPerGroup = null;
  private Integer numberArticlesPerNewsletter = null;

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("_id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("is_default")
  public Boolean getIsDefault() {
    return isDefault;
  }
  public void setIsDefault(Boolean isDefault) {
    this.isDefault = isDefault;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("is_hidden")
  public Boolean getIsHidden() {
    return isHidden;
  }
  public void setIsHidden(Boolean isHidden) {
    this.isHidden = isHidden;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("new_weekly_mailer_content")
  public String getNewWeeklyMailerContent() {
    return newWeeklyMailerContent;
  }
  public void setNewWeeklyMailerContent(String newWeeklyMailerContent) {
    this.newWeeklyMailerContent = newWeeklyMailerContent;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("newsletter_subject")
  public String getNewsletterSubject() {
    return newsletterSubject;
  }
  public void setNewsletterSubject(String newsletterSubject) {
    this.newsletterSubject = newsletterSubject;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("autopublish")
  public Boolean getAutopublish() {
    return autopublish;
  }
  public void setAutopublish(Boolean autopublish) {
    this.autopublish = autopublish;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("number_articles_per_group")
  public Integer getNumberArticlesPerGroup() {
    return numberArticlesPerGroup;
  }
  public void setNumberArticlesPerGroup(Integer numberArticlesPerGroup) {
    this.numberArticlesPerGroup = numberArticlesPerGroup;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("number_articles_per_newsletter")
  public Integer getNumberArticlesPerNewsletter() {
    return numberArticlesPerNewsletter;
  }
  public void setNumberArticlesPerNewsletter(Integer numberArticlesPerNewsletter) {
    this.numberArticlesPerNewsletter = numberArticlesPerNewsletter;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Group {\n");
    
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
