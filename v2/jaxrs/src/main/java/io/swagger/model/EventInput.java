package io.swagger.model;

import io.swagger.model.EventContent;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class EventInput  {
  
  public enum TypeEnum {
     page_view,  sign_up,  sign_in,  content_posted,  create_post,  publish_post,  update_post,  delete_post,  unpublish_post,  invite,  publish_newsletter,  publish_social,  click,  delivered,  open,  dropped,  bounce, 
  };
  private TypeEnum type = null;
  private String referer = null;
  private String originalUrl = null;
  private String originatorEmail = null;
  private String subjectEmail = null;
  private String parentEventId = null;
  private String originatorId = null;
  private String advisorId = null;
  private String subjectId = null;
  private EventContent eventContent = null;
  private String createdAt = null;

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("type")
  public TypeEnum getType() {
    return type;
  }
  public void setType(TypeEnum type) {
    this.type = type;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("referer")
  public String getReferer() {
    return referer;
  }
  public void setReferer(String referer) {
    this.referer = referer;
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
  @ApiModelProperty(value = "")
  @JsonProperty("parentEventId")
  public String getParentEventId() {
    return parentEventId;
  }
  public void setParentEventId(String parentEventId) {
    this.parentEventId = parentEventId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("originatorId")
  public String getOriginatorId() {
    return originatorId;
  }
  public void setOriginatorId(String originatorId) {
    this.originatorId = originatorId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("advisorId")
  public String getAdvisorId() {
    return advisorId;
  }
  public void setAdvisorId(String advisorId) {
    this.advisorId = advisorId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("subjectId")
  public String getSubjectId() {
    return subjectId;
  }
  public void setSubjectId(String subjectId) {
    this.subjectId = subjectId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("eventContent")
  public EventContent getEventContent() {
    return eventContent;
  }
  public void setEventContent(EventContent eventContent) {
    this.eventContent = eventContent;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("createdAt")
  public String getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class EventInput {\n");
    
    sb.append("  type: ").append(type).append("\n");
    sb.append("  referer: ").append(referer).append("\n");
    sb.append("  originalUrl: ").append(originalUrl).append("\n");
    sb.append("  originatorEmail: ").append(originatorEmail).append("\n");
    sb.append("  subjectEmail: ").append(subjectEmail).append("\n");
    sb.append("  parentEventId: ").append(parentEventId).append("\n");
    sb.append("  originatorId: ").append(originatorId).append("\n");
    sb.append("  advisorId: ").append(advisorId).append("\n");
    sb.append("  subjectId: ").append(subjectId).append("\n");
    sb.append("  eventContent: ").append(eventContent).append("\n");
    sb.append("  createdAt: ").append(createdAt).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
