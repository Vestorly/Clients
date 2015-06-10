package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class MemberReport  {
  
  @SerializedName("day")
  private Integer day = null;
  @SerializedName("event_count")
  private Integer eventCount = null;
  @SerializedName("originator_group_id")
  private String originatorGroupId = null;
  @SerializedName("parent_originator_id")
  private String parentOriginatorId = null;
  @SerializedName("source")
  private String source = null;
  @SerializedName("type")
  private String type = null;
  @SerializedName("year")
  private Integer year = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getDay() {
    return day;
  }
  public void setDay(Integer day) {
    this.day = day;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getEventCount() {
    return eventCount;
  }
  public void setEventCount(Integer eventCount) {
    this.eventCount = eventCount;
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
  public String getParentOriginatorId() {
    return parentOriginatorId;
  }
  public void setParentOriginatorId(String parentOriginatorId) {
    this.parentOriginatorId = parentOriginatorId;
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
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getYear() {
    return year;
  }
  public void setYear(Integer year) {
    this.year = year;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class MemberReport {\n");
    
    sb.append("  day: ").append(day).append("\n");
    sb.append("  eventCount: ").append(eventCount).append("\n");
    sb.append("  originatorGroupId: ").append(originatorGroupId).append("\n");
    sb.append("  parentOriginatorId: ").append(parentOriginatorId).append("\n");
    sb.append("  source: ").append(source).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("  year: ").append(year).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
