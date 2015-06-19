package io.swagger.client.model;

import io.swagger.client.model.Member;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Memberresponse  {
  
  @SerializedName("member")
  private Member member = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
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
