package io.swagger.client.model;

import io.swagger.client.model.MemberEvent;
import io.swagger.client.model.TruncatedMember;
import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class MemberEvents  {
  
  @SerializedName("members")
  private List<TruncatedMember> members = new ArrayList<TruncatedMember>() ;
  @SerializedName("member_events")
  private List<MemberEvent> memberEvents = new ArrayList<MemberEvent>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<TruncatedMember> getMembers() {
    return members;
  }
  public void setMembers(List<TruncatedMember> members) {
    this.members = members;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
