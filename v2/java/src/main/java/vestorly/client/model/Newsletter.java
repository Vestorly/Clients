package vestorly.client.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Newsletter  {
  
  private String id = null;
  private Boolean isSent = null;
  private Boolean isDefault = null;
  private Long clickCount = null;
  private Long uniqueClickCount = null;
  private Long totalClickCount = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("_id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("is_sent")
  public Boolean getIsSent() {
    return isSent;
  }
  public void setIsSent(Boolean isSent) {
    this.isSent = isSent;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("is_default")
  public Boolean getIsDefault() {
    return isDefault;
  }
  public void setIsDefault(Boolean isDefault) {
    this.isDefault = isDefault;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("click_count")
  public Long getClickCount() {
    return clickCount;
  }
  public void setClickCount(Long clickCount) {
    this.clickCount = clickCount;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("unique_click_count")
  public Long getUniqueClickCount() {
    return uniqueClickCount;
  }
  public void setUniqueClickCount(Long uniqueClickCount) {
    this.uniqueClickCount = uniqueClickCount;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("total_click_count")
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
