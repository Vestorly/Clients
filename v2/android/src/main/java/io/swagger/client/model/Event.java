package io.swagger.client.model;

import io.swagger.client.model.Symbol;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


/**
 * An Event document.
 **/
@ApiModel(description = "An Event document.")
public class Event  {
  
  private String _id = null;
  private Symbol type = null;
  private String referrer = null;
  private String original_url = null;
  private String originator_email = null;
  private String subject_email = null;
  private String advisor_email = null;
  private String originator_group_name = null;
  private String newsletter = null;

  
  /**
   * Id of object
   **/
  @ApiModelProperty(required = true, value = "Id of object")
  @JsonProperty("_id")
  public String get_id() {
    return _id;
  }
  public void set_id(String _id) {
    this._id = _id;
  }

  
  /**
   * Type of the event
   **/
  @ApiModelProperty(required = true, value = "Type of the event")
  @JsonProperty("type")
  public Symbol getType() {
    return type;
  }
  public void setType(Symbol type) {
    this.type = type;
  }

  
  /**
   * Event referrer
   **/
  @ApiModelProperty(required = true, value = "Event referrer")
  @JsonProperty("referrer")
  public String getReferrer() {
    return referrer;
  }
  public void setReferrer(String referrer) {
    this.referrer = referrer;
  }

  
  /**
   * Originator URL
   **/
  @ApiModelProperty(required = true, value = "Originator URL")
  @JsonProperty("original_url")
  public String getOriginal_url() {
    return original_url;
  }
  public void setOriginal_url(String original_url) {
    this.original_url = original_url;
  }

  
  /**
   * Originator email
   **/
  @ApiModelProperty(required = true, value = "Originator email")
  @JsonProperty("originator_email")
  public String getOriginator_email() {
    return originator_email;
  }
  public void setOriginator_email(String originator_email) {
    this.originator_email = originator_email;
  }

  
  /**
   * Subject email
   **/
  @ApiModelProperty(required = true, value = "Subject email")
  @JsonProperty("subject_email")
  public String getSubject_email() {
    return subject_email;
  }
  public void setSubject_email(String subject_email) {
    this.subject_email = subject_email;
  }

  
  /**
   * Advisor email
   **/
  @ApiModelProperty(required = true, value = "Advisor email")
  @JsonProperty("advisor_email")
  public String getAdvisor_email() {
    return advisor_email;
  }
  public void setAdvisor_email(String advisor_email) {
    this.advisor_email = advisor_email;
  }

  
  /**
   * Original group name
   **/
  @ApiModelProperty(required = true, value = "Original group name")
  @JsonProperty("originator_group_name")
  public String getOriginator_group_name() {
    return originator_group_name;
  }
  public void setOriginator_group_name(String originator_group_name) {
    this.originator_group_name = originator_group_name;
  }

  
  /**
   * Newsletter
   **/
  @ApiModelProperty(required = true, value = "Newsletter")
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
    
    sb.append("  _id: ").append(_id).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("  referrer: ").append(referrer).append("\n");
    sb.append("  original_url: ").append(original_url).append("\n");
    sb.append("  originator_email: ").append(originator_email).append("\n");
    sb.append("  subject_email: ").append(subject_email).append("\n");
    sb.append("  advisor_email: ").append(advisor_email).append("\n");
    sb.append("  originator_group_name: ").append(originator_group_name).append("\n");
    sb.append("  newsletter: ").append(newsletter).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
