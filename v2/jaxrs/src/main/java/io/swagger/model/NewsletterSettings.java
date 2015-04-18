package io.swagger.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class NewsletterSettings  {
  
  private String id = null;
  private String emailStatus = null;
  private String twitterStatus = null;
  private String linkedinStatus = null;
  private Integer emailHour = null;
  private Integer twitterHour = null;
  private Integer linkedinHour = null;
  private Integer facebookHour = null;

  
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
  @JsonProperty("facebookHour")
  public Integer getFacebookHour() {
    return facebookHour;
  }
  public void setFacebookHour(Integer facebookHour) {
    this.facebookHour = facebookHour;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NewsletterSettings {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  emailStatus: ").append(emailStatus).append("\n");
    sb.append("  twitterStatus: ").append(twitterStatus).append("\n");
    sb.append("  linkedinStatus: ").append(linkedinStatus).append("\n");
    sb.append("  emailHour: ").append(emailHour).append("\n");
    sb.append("  twitterHour: ").append(twitterHour).append("\n");
    sb.append("  linkedinHour: ").append(linkedinHour).append("\n");
    sb.append("  facebookHour: ").append(facebookHour).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
