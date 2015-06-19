package vestorly.client.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class MemberReport  {
  
  private Integer day = null;
  private Integer eventCount = null;
  private String originatorGroupId = null;
  private String parentOriginatorId = null;
  private String source = null;
  private String type = null;
  private Integer year = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("day")
  public Integer getDay() {
    return day;
  }
  public void setDay(Integer day) {
    this.day = day;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("event_count")
  public Integer getEventCount() {
    return eventCount;
  }
  public void setEventCount(Integer eventCount) {
    this.eventCount = eventCount;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("originator_group_id")
  public String getOriginatorGroupId() {
    return originatorGroupId;
  }
  public void setOriginatorGroupId(String originatorGroupId) {
    this.originatorGroupId = originatorGroupId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("parent_originator_id")
  public String getParentOriginatorId() {
    return parentOriginatorId;
  }
  public void setParentOriginatorId(String parentOriginatorId) {
    this.parentOriginatorId = parentOriginatorId;
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
  @JsonProperty("year")
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
