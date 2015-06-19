package io.swagger.client.model;

import java.util.*;
import io.swagger.client.model.Group;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Groups  {
  
  @SerializedName("groups")
  private List<Group> groups = new ArrayList<Group>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<Group> getGroups() {
    return groups;
  }
  public void setGroups(List<Group> groups) {
    this.groups = groups;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Groups {\n");
    
    sb.append("  groups: ").append(groups).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
