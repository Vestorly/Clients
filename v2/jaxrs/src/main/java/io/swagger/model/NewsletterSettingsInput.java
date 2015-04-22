package io.swagger.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class NewsletterSettingsInput  {
  
  private String emailStatus = null;
  private String twitterStatus = null;
  private String linkedinStatus = null;

  
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

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NewsletterSettingsInput {\n");
    
    sb.append("  emailStatus: ").append(emailStatus).append("\n");
    sb.append("  twitterStatus: ").append(twitterStatus).append("\n");
    sb.append("  linkedinStatus: ").append(linkedinStatus).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
