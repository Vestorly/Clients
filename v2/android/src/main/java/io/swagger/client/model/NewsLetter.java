package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Newsletter  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("is_sent")
  private Boolean isSent = null;
  @SerializedName("is_default")
  private Boolean isDefault = null;
  @SerializedName("click_count")
  private Long clickCount = null;
  @SerializedName("unique_click_count")
  private Long uniqueClickCount = null;
  @SerializedName("total_click_count")
  private Long totalClickCount = null;

  
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
  public Boolean getIsSent() {
    return isSent;
  }
  public void setIsSent(Boolean isSent) {
    this.isSent = isSent;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsDefault() {
    return isDefault;
  }
  public void setIsDefault(Boolean isDefault) {
    this.isDefault = isDefault;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Long getClickCount() {
    return clickCount;
  }
  public void setClickCount(Long clickCount) {
    this.clickCount = clickCount;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Long getUniqueClickCount() {
    return uniqueClickCount;
  }
  public void setUniqueClickCount(Long uniqueClickCount) {
    this.uniqueClickCount = uniqueClickCount;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  isSent: ").append(isSent).append("\n");
    sb.append("  isDefault: ").append(isDefault).append("\n");
    sb.append("  clickCount: ").append(clickCount).append("\n");
    sb.append("  uniqueClickCount: ").append(uniqueClickCount).append("\n");
    sb.append("  totalClickCount: ").append(totalClickCount).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
