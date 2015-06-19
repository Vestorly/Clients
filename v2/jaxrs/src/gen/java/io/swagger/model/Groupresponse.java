package io.swagger.model;

import io.swagger.model.Group;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Groupresponse  {
  
  private Group group = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("group")
  public Group getGroup() {
    return group;
  }
  public void setGroup(Group group) {
    this.group = group;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Groupresponse {\n");
    
    sb.append("  group: ").append(group).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
