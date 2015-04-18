package io.swagger.model;

import io.swagger.model.Group;
import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Groups  {
  
  private List<Group> groups = new ArrayList<Group>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("groups")
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
