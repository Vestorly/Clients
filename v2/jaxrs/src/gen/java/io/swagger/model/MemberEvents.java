package io.swagger.model;

import io.swagger.model.MemberEvent;
import io.swagger.model.TruncatedMember;
import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class MemberEvents  {
  
  private List<TruncatedMember> members = new ArrayList<TruncatedMember>() ;
  private List<MemberEvent> memberEvents = new ArrayList<MemberEvent>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("members")
  public List<TruncatedMember> getMembers() {
    return members;
  }
  public void setMembers(List<TruncatedMember> members) {
    this.members = members;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("memberEvents")
  public List<MemberEvent> getMemberEvents() {
    return memberEvents;
  }
  public void setMemberEvents(List<MemberEvent> memberEvents) {
    this.memberEvents = memberEvents;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class MemberEvents {\n");
    
    sb.append("  members: ").append(members).append("\n");
    sb.append("  memberEvents: ").append(memberEvents).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
