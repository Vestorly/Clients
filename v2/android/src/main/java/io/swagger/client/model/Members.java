package io.swagger.client.model;

import java.util.*;
import io.swagger.client.model.Member;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Members  {
  
  private List<Member> members = new ArrayList<Member>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("members")
  public List<Member> getMembers() {
    return members;
  }
  public void setMembers(List<Member> members) {
    this.members = members;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Members {\n");
    
    sb.append("  members: ").append(members).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
