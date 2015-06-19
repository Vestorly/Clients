package io.swagger.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class MemberEvent  {
  
  private String id = null;
  private String createdAt = null;
  private String type = null;
  private String source = null;
  private String referer = null;
  private String originalUrl = null;
  private String originatorEmail = null;
  private String originatorName = null;
  private String parentOriginatorId = null;
  private String parentEventId = null;
  private String originatorType = null;
  private String originatorGroupId = null;
  private String eventType = null;
  private String eventSource = null;
  private String contentUrl = null;
  private String eventDate = null;
  private String username = null;
  private String memberId = null;
  private String originatorId = null;
  private String subjectId = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
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
  @JsonProperty("createdAt")
  public String getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("type")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("source")
  public String getSource() {
    return source;
  }
  public void setSource(String source) {
    this.source = source;
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
  @ApiModelProperty(value = "")
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
  @ApiModelProperty(value = "")
  @JsonProperty("originatorName")
  public String getOriginatorName() {
    return originatorName;
  }
  public void setOriginatorName(String originatorName) {
    this.originatorName = originatorName;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("parentOriginatorId")
  public String getParentOriginatorId() {
    return parentOriginatorId;
  }
  public void setParentOriginatorId(String parentOriginatorId) {
    this.parentOriginatorId = parentOriginatorId;
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
  @JsonProperty("originatorType")
  public String getOriginatorType() {
    return originatorType;
  }
  public void setOriginatorType(String originatorType) {
    this.originatorType = originatorType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("originatorGroupId")
  public String getOriginatorGroupId() {
    return originatorGroupId;
  }
  public void setOriginatorGroupId(String originatorGroupId) {
    this.originatorGroupId = originatorGroupId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("eventType")
  public String getEventType() {
    return eventType;
  }
  public void setEventType(String eventType) {
    this.eventType = eventType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("eventSource")
  public String getEventSource() {
    return eventSource;
  }
  public void setEventSource(String eventSource) {
    this.eventSource = eventSource;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("contentUrl")
  public String getContentUrl() {
    return contentUrl;
  }
  public void setContentUrl(String contentUrl) {
    this.contentUrl = contentUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("eventDate")
  public String getEventDate() {
    return eventDate;
  }
  public void setEventDate(String eventDate) {
    this.eventDate = eventDate;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("username")
  public String getUsername() {
    return username;
  }
  public void setUsername(String username) {
    this.username = username;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("memberId")
  public String getMemberId() {
    return memberId;
  }
  public void setMemberId(String memberId) {
    this.memberId = memberId;
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
  @JsonProperty("subjectId")
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
