package io.swagger.client.model;

import io.swagger.client.model.Member;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Memberresponse  {
  
  private Member member = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("member")
  public Member getMember() {
    return member;
  }
  public void setMember(Member member) {
    this.member = member;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Memberresponse {\n");
    
    sb.append("  member: ").append(member).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
