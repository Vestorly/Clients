package io.swagger.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class EventInput  {
  
  private String referrer = null;
  private String originalUrl = null;
  private String originatorEmail = null;
  private String subjectEmail = null;
  private String advisorEmail = null;
  private String originatorGroupName = null;
  private String newsletter = null;

  
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
  @JsonProperty("originalUrl")
  public String getOriginalUrl() {
    return originalUrl;
  }
  public void setOriginalUrl(String originalUrl) {
    this.originalUrl = originalUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("originatorEmail")
  public String getOriginatorEmail() {
    return originatorEmail;
  }
  public void setOriginatorEmail(String originatorEmail) {
    this.originatorEmail = originatorEmail;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("subjectEmail")
  public String getSubjectEmail() {
    return subjectEmail;
  }
  public void setSubjectEmail(String subjectEmail) {
    this.subjectEmail = subjectEmail;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("advisorEmail")
  public String getAdvisorEmail() {
    return advisorEmail;
  }
  public void setAdvisorEmail(String advisorEmail) {
    this.advisorEmail = advisorEmail;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("originatorGroupName")
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
    sb.append("class EventInput {\n");
    
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
