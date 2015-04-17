package io.swagger.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Newsletter  {
  
  private Boolean isSent = null;
  private Boolean isDefault = null;
  private Long clickCount = null;
  private Long uniqueClickCount = null;
  private Long totalClickCount = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("isSent")
  public Boolean getIsSent() {
    return isSent;
  }
  public void setIsSent(Boolean isSent) {
    this.isSent = isSent;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("isDefault")
  public Boolean getIsDefault() {
    return isDefault;
  }
  public void setIsDefault(Boolean isDefault) {
    this.isDefault = isDefault;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("clickCount")
  public Long getClickCount() {
    return clickCount;
  }
  public void setClickCount(Long clickCount) {
    this.clickCount = clickCount;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("uniqueClickCount")
  public Long getUniqueClickCount() {
    return uniqueClickCount;
  }
  public void setUniqueClickCount(Long uniqueClickCount) {
    this.uniqueClickCount = uniqueClickCount;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("totalClickCount")
  public Long getTotalClickCount() {
    return totalClickCount;
  }
  public void setTotalClickCount(Long totalClickCount) {
    this.totalClickCount = totalClickCount;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Newsletter {\n");
    
    sb.append("  isSent: ").append(isSent).append("\n");
    sb.append("  isDefault: ").append(isDefault).append("\n");
    sb.append("  clickCount: ").append(clickCount).append("\n");
    sb.append("  uniqueClickCount: ").append(uniqueClickCount).append("\n");
    sb.append("  totalClickCount: ").append(totalClickCount).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
