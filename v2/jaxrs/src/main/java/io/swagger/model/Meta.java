package io.swagger.model;

import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Meta  {
  
  private String sortOrder = null;
  private Boolean moreResults = null;
  private String message = null;
  private List<String> sortedBy = new ArrayList<String>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("sortOrder")
  public String getSortOrder() {
    return sortOrder;
  }
  public void setSortOrder(String sortOrder) {
    this.sortOrder = sortOrder;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("moreResults")
  public Boolean getMoreResults() {
    return moreResults;
  }
  public void setMoreResults(Boolean moreResults) {
    this.moreResults = moreResults;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("message")
  public String getMessage() {
    return message;
  }
  public void setMessage(String message) {
    this.message = message;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("sortedBy")
  public List<String> getSortedBy() {
    return sortedBy;
  }
  public void setSortedBy(List<String> sortedBy) {
    this.sortedBy = sortedBy;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Meta {\n");
    
    sb.append("  sortOrder: ").append(sortOrder).append("\n");
    sb.append("  moreResults: ").append(moreResults).append("\n");
    sb.append("  message: ").append(message).append("\n");
    sb.append("  sortedBy: ").append(sortedBy).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
