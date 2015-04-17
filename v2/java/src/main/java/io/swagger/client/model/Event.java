package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Event  {
  
  private String id = null;
  private String referrer = null;
  private String originalUrl = null;
  private String originatorEmail = null;
  private String subjectEmail = null;
  private String advisorEmail = null;
  private String originatorGroupName = null;
  private String newsletter = null;

  
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
  @JsonProperty("referrer")
  public String getReferrer() {
    return referrer;
  }
  public void setReferrer(String referrer) {
    this.referrer = referrer;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("original_url")
  public String getOriginalUrl() {
    return originalUrl;
  }
  public void setOriginalUrl(String originalUrl) {
    this.originalUrl = originalUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("originator_email")
  public String getOriginatorEmail() {
    return originatorEmail;
  }
  public void setOriginatorEmail(String originatorEmail) {
    this.originatorEmail = originatorEmail;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("subject_email")
  public String getSubjectEmail() {
    return subjectEmail;
  }
  public void setSubjectEmail(String subjectEmail) {
    this.subjectEmail = subjectEmail;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("advisor_email")
  public String getAdvisorEmail() {
    return advisorEmail;
  }
  public void setAdvisorEmail(String advisorEmail) {
    this.advisorEmail = advisorEmail;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("originator_group_name")
  public String getOriginatorGroupName() {
    return originatorGroupName;
  }
  public void setOriginatorGroupName(String originatorGroupName) {
    this.originatorGroupName = originatorGroupName;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("newsletter")
  public String getNewsletter() {
    return newsletter;
  }
  public void setNewsletter(String newsletter) {
    this.newsletter = newsletter;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Event {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  referrer: ").append(referrer).append("\n");
    sb.append("  originalUrl: ").append(originalUrl).append("\n");
    sb.append("  originatorEmail: ").append(originatorEmail).append("\n");
    sb.append("  subjectEmail: ").append(subjectEmail).append("\n");
    sb.append("  advisorEmail: ").append(advisorEmail).append("\n");
    sb.append("  originatorGroupName: ").append(originatorGroupName).append("\n");
    sb.append("  newsletter: ").append(newsletter).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
