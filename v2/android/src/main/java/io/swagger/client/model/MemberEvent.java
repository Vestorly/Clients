package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class MemberEvent  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("created_at")
  private String createdAt = null;
  @SerializedName("type")
  private String type = null;
  @SerializedName("source")
  private String source = null;
  @SerializedName("referer")
  private String referer = null;
  @SerializedName("original_url")
  private String originalUrl = null;
  @SerializedName("originator_email")
  private String originatorEmail = null;
  @SerializedName("originator_name")
  private String originatorName = null;
  @SerializedName("parent_originator_id")
  private String parentOriginatorId = null;
  @SerializedName("parent_event_id")
  private String parentEventId = null;
  @SerializedName("originator_type")
  private String originatorType = null;
  @SerializedName("originator_group_id")
  private String originatorGroupId = null;
  @SerializedName("event_type")
  private String eventType = null;
  @SerializedName("event_source")
  private String eventSource = null;
  @SerializedName("content_url")
  private String contentUrl = null;
  @SerializedName("event_date")
  private String eventDate = null;
  @SerializedName("username")
  private String username = null;
  @SerializedName("member_id")
  private String memberId = null;
  @SerializedName("originator_id")
  private String originatorId = null;
  @SerializedName("subject_id")
  private String subjectId = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
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

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSource() {
    return source;
  }
  public void setSource(String source) {
    this.source = source;
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
  @ApiModelProperty(value = "")
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
  @ApiModelProperty(value = "")
  public String getOriginatorName() {
    return originatorName;
  }
  public void setOriginatorName(String originatorName) {
    this.originatorName = originatorName;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getParentOriginatorId() {
    return parentOriginatorId;
  }
  public void setParentOriginatorId(String parentOriginatorId) {
    this.parentOriginatorId = parentOriginatorId;
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
  public String getOriginatorType() {
    return originatorType;
  }
  public void setOriginatorType(String originatorType) {
    this.originatorType = originatorType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getOriginatorGroupId() {
    return originatorGroupId;
  }
  public void setOriginatorGroupId(String originatorGroupId) {
    this.originatorGroupId = originatorGroupId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getEventType() {
    return eventType;
  }
  public void setEventType(String eventType) {
    this.eventType = eventType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getEventSource() {
    return eventSource;
  }
  public void setEventSource(String eventSource) {
    this.eventSource = eventSource;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getContentUrl() {
    return contentUrl;
  }
  public void setContentUrl(String contentUrl) {
    this.contentUrl = contentUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getEventDate() {
    return eventDate;
  }
  public void setEventDate(String eventDate) {
    this.eventDate = eventDate;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getUsername() {
    return username;
  }
  public void setUsername(String username) {
    this.username = username;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getMemberId() {
    return memberId;
  }
  public void setMemberId(String memberId) {
    this.memberId = memberId;
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
  public String getSubjectId() {
    return subjectId;
  }
  public void setSubjectId(String subjectId) {
    this.subjectId = subjectId;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class MemberEvent {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  createdAt: ").append(createdAt).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("  source: ").append(source).append("\n");
    sb.append("  referer: ").append(referer).append("\n");
    sb.append("  originalUrl: ").append(originalUrl).append("\n");
    sb.append("  originatorEmail: ").append(originatorEmail).append("\n");
    sb.append("  originatorName: ").append(originatorName).append("\n");
    sb.append("  parentOriginatorId: ").append(parentOriginatorId).append("\n");
    sb.append("  parentEventId: ").append(parentEventId).append("\n");
    sb.append("  originatorType: ").append(originatorType).append("\n");
    sb.append("  originatorGroupId: ").append(originatorGroupId).append("\n");
    sb.append("  eventType: ").append(eventType).append("\n");
    sb.append("  eventSource: ").append(eventSource).append("\n");
    sb.append("  contentUrl: ").append(contentUrl).append("\n");
    sb.append("  eventDate: ").append(eventDate).append("\n");
    sb.append("  username: ").append(username).append("\n");
    sb.append("  memberId: ").append(memberId).append("\n");
    sb.append("  originatorId: ").append(originatorId).append("\n");
    sb.append("  subjectId: ").append(subjectId).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
