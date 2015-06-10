package io.swagger.client.model;

import io.swagger.client.model.EventContent;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Event  {
  
  @SerializedName("_id")
  private String id = null;
  public enum TypeEnum {
     page_view,  sign_up,  sign_in,  content_posted,  create_post,  publish_post,  update_post,  delete_post,  unpublish_post,  invite,  publish_newsletter,  publish_social,  click,  delivered,  open,  dropped,  bounce, 
  };
  @SerializedName("type")
  private TypeEnum type = null;
  @SerializedName("referer")
  private String referer = null;
  @SerializedName("original_url")
  private String originalUrl = null;
  @SerializedName("originator_email")
  private String originatorEmail = null;
  @SerializedName("subject_email")
  private String subjectEmail = null;
  @SerializedName("parent_event_id")
  private String parentEventId = null;
  @SerializedName("originator_id")
  private String originatorId = null;
  @SerializedName("advisor_id")
  private String advisorId = null;
  @SerializedName("subject_id")
  private String subjectId = null;
  @SerializedName("event_content")
  private EventContent eventContent = null;
  @SerializedName("created_at")
  private String createdAt = null;

  
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
  @ApiModelProperty(required = true, value = "")
  public TypeEnum getType() {
    return type;
  }
  public void setType(TypeEnum type) {
    this.type = type;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getReferer() {
    return referer;
  }
  public void setReferer(String referer) {
    this.referer = referer;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getOriginalUrl() {
    return originalUrl;
  }
  public void setOriginalUrl(String originalUrl) {
    this.originalUrl = originalUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getOriginatorEmail() {
    return originatorEmail;
  }
  public void setOriginatorEmail(String originatorEmail) {
    this.originatorEmail = originatorEmail;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getSubjectEmail() {
    return subjectEmail;
  }
  public void setSubjectEmail(String subjectEmail) {
    this.subjectEmail = subjectEmail;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getParentEventId() {
    return parentEventId;
  }
  public void setParentEventId(String parentEventId) {
    this.parentEventId = parentEventId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getOriginatorId() {
    return originatorId;
  }
  public void setOriginatorId(String originatorId) {
    this.originatorId = originatorId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getAdvisorId() {
    return advisorId;
  }
  public void setAdvisorId(String advisorId) {
    this.advisorId = advisorId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSubjectId() {
    return subjectId;
  }
  public void setSubjectId(String subjectId) {
    this.subjectId = subjectId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public EventContent getEventContent() {
    return eventContent;
  }
  public void setEventContent(EventContent eventContent) {
    this.eventContent = eventContent;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Event {\n");
    
    sb.append("  id: ").append(id).append("\n");
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
