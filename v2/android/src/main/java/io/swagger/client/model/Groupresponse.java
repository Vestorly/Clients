package io.swagger.client.model;

import io.swagger.client.model.Group;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Groupresponse  {
  
  @SerializedName("group")
  private Group group = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
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
